using System;

using Mogre;

namespace MSpriteRenderer {

  class ShutdownException : Exception { }

  public abstract partial class BaseApplication : IDisposable
  {
      protected Viewport vp;

    public void Dispose() {
      if(mRoot != null) {
        mRoot.Shutdown();
        mRoot = null;
      }
    }

    public void Go() {
      try {
        if(!Setup())
          return;

        mRoot.StartRendering();

        DestroyScene();
      }
      catch(System.Runtime.InteropServices.SEHException e) {
        Console.WriteLine(e);

        System.Windows.Forms.MessageBox.Show(
            "An Ogre error has occurred. Check the Ogre.log file for details", "Exception",
            System.Windows.Forms.MessageBoxButtons.OK,
            System.Windows.Forms.MessageBoxIcon.Error);
      }
      catch(Exception e) {
        Console.WriteLine(e);

        System.Windows.Forms.MessageBox.Show(
            e.Message, "Error",
            System.Windows.Forms.MessageBoxButtons.OK,
            System.Windows.Forms.MessageBoxIcon.Error);
      }
    }

    protected virtual bool Setup() {
      mRoot = new Root(mPluginsCfg);

        RenderSystem renderSystem = null;
        foreach(var rs in mRoot.GetAvailableRenderers())
        {
            if (rs.Name == "Direct3D9 Rendering Subsystem")
            {
                renderSystem = rs;
                break;
            }
        }
        
        renderSystem.SetConfigOption("Full Screen", "No");
        renderSystem.SetConfigOption("Video Mode", "200 x 200 @ 32-bit colour");
        renderSystem.SetConfigOption("FSAA", "0");
        renderSystem.SetConfigOption("VSync", "No");
        renderSystem.SetConfigOption("sRGB Gamma Conversion", "No");
        mRoot.RenderSystem = renderSystem;

        mWindow = mRoot.Initialise(true, "MSpriteRenderer Preview Window");
      //if(!Configure())
      //  return false;

      ChooseSceneManager();
      CreateCamera();
      CreateViewports();

      TextureManager.Singleton.DefaultNumMipmaps = 5;


      CreateResourceListener();
      LoadResources();

      CreateScene();

      CreateFrameListeners();

      mDebugOverlay = new DebugOverlay(mWindow);
      mDebugOverlay.AdditionalInfo = "Bilinear";

      return true;
    }

    protected virtual bool Configure() {
      if(mRoot.ShowConfigDialog()) {
        mWindow = mRoot.Initialise(true, "TutorialApplication Render Window");
        return true;
      } else {
        return false;
      }
    }

    protected virtual void ChooseSceneManager() {
      mSceneMgr = mRoot.CreateSceneManager(SceneType.ST_GENERIC);
    }

    protected virtual void CreateCamera() {
      mCamera = mSceneMgr.CreateCamera("PlayerCam");

      mCamera.Position = new Vector3(0, 10, 10);

      mCamera.LookAt(new Vector3(0, 50, 0));
      mCamera.NearClipDistance = 1;
    }

    protected virtual void CreateViewports() {
      // Create one viewport, entire window
      vp = mWindow.AddViewport(mCamera);
      vp.BackgroundColour = ColourValue.Black;

      // Alter the camera aspect ratio to match the viewport
      mCamera.AspectRatio = (vp.ActualWidth / vp.ActualHeight);
    }

    protected virtual void CreateResourceListener() {
    }

    protected virtual void LoadResources() {
      // Load resource paths from config file
      var cf = new ConfigFile();
      cf.Load(mResourcesCfg, "\t:=", true);

      // Go through all sections & settings in the file
      var seci = cf.GetSectionIterator();
      while(seci.MoveNext()) {
        foreach(var pair in seci.Current) {
          ResourceGroupManager.Singleton.AddResourceLocation(
              pair.Value, pair.Key, seci.CurrentKey);
        }
      }

      ResourceGroupManager.Singleton.InitialiseAllResourceGroups();
    }

    protected void ReloadAllTextures() {
      TextureManager.Singleton.ReloadAll();
    }

    protected void CycleTextureFilteringMode() {
      mTextureMode = (mTextureMode + 1) % 4;
      switch(mTextureMode) {
        case 0:
        MaterialManager.Singleton.SetDefaultTextureFiltering(TextureFilterOptions.TFO_BILINEAR);
        mDebugOverlay.AdditionalInfo = "BiLinear";
        break;

        case 1:
        MaterialManager.Singleton.SetDefaultTextureFiltering(TextureFilterOptions.TFO_TRILINEAR);
        mDebugOverlay.AdditionalInfo = "TriLinear";
        break;

        case 2:
        MaterialManager.Singleton.SetDefaultTextureFiltering(TextureFilterOptions.TFO_ANISOTROPIC);
        MaterialManager.Singleton.DefaultAnisotropy = 8;
        mDebugOverlay.AdditionalInfo = "Anisotropic";
        break;

        case 3:
        MaterialManager.Singleton.SetDefaultTextureFiltering(TextureFilterOptions.TFO_NONE);
        MaterialManager.Singleton.DefaultAnisotropy = 1;
        mDebugOverlay.AdditionalInfo = "None";
        break;
      }
    }

    protected void CyclePolygonMode() {
      mRenderMode = (mRenderMode + 1) % 3;
      switch(mRenderMode) {
        case 0:
        mCamera.PolygonMode = PolygonMode.PM_SOLID;
        break;

        case 1:
        mCamera.PolygonMode = PolygonMode.PM_WIREFRAME;
        break;

        case 2:
        mCamera.PolygonMode = PolygonMode.PM_POINTS;
        break;
      }
    }

    protected virtual void CreateFrameListeners() {
      mRoot.FrameRenderingQueued += new FrameListener.FrameRenderingQueuedHandler(OnFrameRenderingQueued);
    }

    protected virtual bool OnFrameRenderingQueued(FrameEvent evt) {
      if(mWindow.IsClosed)
        return false;

      if(mShutDown)
        return false;

      try {
        UpdateScene(evt);

        mDebugOverlay.Update(evt.timeSinceLastFrame);

        return true;
      }
      catch(ShutdownException) {
        mShutDown = true;
        return false;
      }
    }

    protected void Shutdown() {
      throw new ShutdownException();
    }

    protected virtual void CreateScene() {
    }

    protected virtual void UpdateScene(FrameEvent evt) {
    }

    protected virtual void DestroyScene() {
    }

    protected Root mRoot;
    protected SceneManager mSceneMgr;
    protected Camera mCamera;
    protected RenderWindow mWindow;
    protected string mPluginsCfg = "plugins.cfg";
    protected string mResourcesCfg = "resources.cfg";
    protected bool mShutDown = false;
    protected int mTextureMode = 0;
    protected int mRenderMode = 0;
    protected DebugOverlay mDebugOverlay;

  }

} // namespace MSpriteRenderer