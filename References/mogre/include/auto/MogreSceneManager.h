/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreSceneManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreRenderQueueListener.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreStringVector.h"
#include "MogrePlaneBoundedVolume.h"
#include "MogrePixelFormat.h"
#include "MogreShadowTextureManager.h"
#include "MogreLight.h"
#include "MogreRenderQueueSortingGrouping.h"
#include "MogreLodListener.h"
#include "MogreSceneQuery.h"

namespace Mogre
{
	[Flags]
	public enum class SceneType
	{
		ST_GENERIC = Ogre::ST_GENERIC,
		ST_EXTERIOR_CLOSE = Ogre::ST_EXTERIOR_CLOSE,
		ST_EXTERIOR_FAR = Ogre::ST_EXTERIOR_FAR,
		ST_EXTERIOR_REAL_FAR = Ogre::ST_EXTERIOR_REAL_FAR,
		ST_INTERIOR = Ogre::ST_INTERIOR
	};
	
	//################################################################
	//SceneManagerMetaData_NativePtr
	//################################################################
	
	public value class SceneManagerMetaData_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::SceneManagerMetaData* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property String^ typeName
		{
		public:
			String^ get();
		}
	
		property String^ description
		{
		public:
			String^ get();
		}
	
		property Mogre::SceneType sceneTypeMask
		{
		public:
			Mogre::SceneType get();
		}
	
		property bool worldGeometrySupported
		{
		public:
			bool get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( SceneManagerMetaData_NativePtr, Ogre::SceneManagerMetaData )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VisibleObjectsBoundsInfo_NativePtr
	//################################################################
	
	public value class VisibleObjectsBoundsInfo_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::VisibleObjectsBoundsInfo* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::AxisAlignedBox^ aabb
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ value);
		}
	
		property Mogre::AxisAlignedBox^ receiverAabb
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ value);
		}
	
		property Mogre::Real minDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real maxDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real minDistanceInFrustum
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real maxDistanceInFrustum
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		void Reset( );
	
		void Merge( Mogre::AxisAlignedBox^ boxBounds, Mogre::Sphere sphereBounds, Mogre::Camera^ cam, bool receiver );
		void Merge( Mogre::AxisAlignedBox^ boxBounds, Mogre::Sphere sphereBounds, Mogre::Camera^ cam );
	
		void MergeNonRenderedButInFrustum( Mogre::AxisAlignedBox^ boxBounds, Mogre::Sphere sphereBounds, Mogre::Camera^ cam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( VisibleObjectsBoundsInfo_NativePtr, Ogre::VisibleObjectsBoundsInfo )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static VisibleObjectsBoundsInfo_NativePtr Create( );
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ViewPoint
	//################################################################
	
	public ref class ViewPoint
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ViewPoint()
		{
		}
	
		Mogre::Vector3 _position;
		Mogre::Quaternion _orientation;
	
		static operator ViewPoint^ (const Ogre::ViewPoint& obj)
		{
			ViewPoint^ clr = gcnew ViewPoint;
			clr->_position = obj.position;
			clr->_orientation = obj.orientation;
	
			return clr;
		}
	
		static operator ViewPoint^ (const Ogre::ViewPoint* pObj)
		{
			return *pObj;
		}
	
		//Public Declarations
	public:
	
	
		property Mogre::Vector3 Position
		{
			Mogre::Vector3 get()
			{
				return _position;
			}
		}
	
		property Mogre::Quaternion Orientation
		{
			Mogre::Quaternion get()
			{
				return _orientation;
			}
		}
	
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SceneManager
	//################################################################
	
	public ref class SceneManager : public Wrapper, public IRenderQueueListener_Receiver
	{
		//Nested Types
		public: ref class SkyBoxGenParameters;
		public: ref class SkyDomeGenParameters;
		public: ref class SkyPlaneGenParameters;
	
		public: enum class IlluminationRenderStage
		{
			IRS_NONE = Ogre::SceneManager::IRS_NONE,
			IRS_RENDER_TO_TEXTURE = Ogre::SceneManager::IRS_RENDER_TO_TEXTURE,
			IRS_RENDER_RECEIVER_PASS = Ogre::SceneManager::IRS_RENDER_RECEIVER_PASS
		};
	
		public: enum class SpecialCaseRenderQueueMode
		{
			SCRQM_INCLUDE = Ogre::SceneManager::SCRQM_INCLUDE,
			SCRQM_EXCLUDE = Ogre::SceneManager::SCRQM_EXCLUDE
		};
	
		public: enum class PrefabType
		{
			PT_PLANE = Ogre::SceneManager::PT_PLANE,
			PT_CUBE = Ogre::SceneManager::PT_CUBE,
			PT_SPHERE = Ogre::SceneManager::PT_SPHERE
		};
	
		//################################################################
		//IListener
		//################################################################
	
		public: interface class IListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::SceneManager::Listener )
	
			virtual Ogre::SceneManager::Listener* _GetNativePtr();
	
		public:
	
	
			virtual void PreFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
	
			virtual void PostFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
	
			virtual void ShadowTexturesUpdated( size_t numberOfShadowTextures );
	
			virtual void ShadowTextureCasterPreViewProj( Mogre::Light^ light, Mogre::Camera^ camera, size_t iteration );
	
			virtual void ShadowTextureReceiverPreViewProj( Mogre::Light^ light, Mogre::Frustum^ frustum );
	
			virtual bool SortLightsAffectingFrustum( Mogre::LightList^ lightList );
	
			virtual void SceneManagerDestroyed( Mogre::SceneManager^ source );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener : public Wrapper, public Mogre::SceneManager::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::SceneManager::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener( );
		
		
			[Implementation::MethodIndex( 0 )]
			virtual void PreFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
		
			[Implementation::MethodIndex( 1 )]
			virtual void PostFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
		
			[Implementation::MethodIndex( 2 )]
			virtual void ShadowTexturesUpdated( size_t numberOfShadowTextures );
		
			[Implementation::MethodIndex( 3 )]
			virtual void ShadowTextureCasterPreViewProj( Mogre::Light^ light, Mogre::Camera^ camera, size_t iteration );
		
			[Implementation::MethodIndex( 4 )]
			virtual void ShadowTextureReceiverPreViewProj( Mogre::Light^ light, Mogre::Frustum^ frustum );
		
			[Implementation::MethodIndex( 5 )]
			virtual bool SortLightsAffectingFrustum( Mogre::LightList^ lightList );
		
			[Implementation::MethodIndex( 6 )]
			virtual void SceneManagerDestroyed( Mogre::SceneManager^ source );
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//################################################################
		//SkyBoxGenParameters
		//################################################################
	
		public: ref class SkyBoxGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyBoxGenParameters()
			{
			}
	
			Mogre::Real _skyBoxDistance;
	
			static operator SkyBoxGenParameters^ (const Ogre::SceneManager::SkyBoxGenParameters& obj)
			{
				SkyBoxGenParameters^ clr = gcnew SkyBoxGenParameters;
				clr->_skyBoxDistance = obj.skyBoxDistance;
	
				return clr;
			}
	
			static operator SkyBoxGenParameters^ (const Ogre::SceneManager::SkyBoxGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyBoxDistance
			{
				Mogre::Real get()
				{
					return _skyBoxDistance;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//SkyDomeGenParameters
		//################################################################
	
		public: ref class SkyDomeGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyDomeGenParameters()
			{
			}
	
			Mogre::Real _skyDomeCurvature;
			Mogre::Real _skyDomeTiling;
			Mogre::Real _skyDomeDistance;
			int _skyDomeXSegments;
			int _skyDomeYSegments;
			int _skyDomeYSegments_keep;
	
			static operator SkyDomeGenParameters^ (const Ogre::SceneManager::SkyDomeGenParameters& obj)
			{
				SkyDomeGenParameters^ clr = gcnew SkyDomeGenParameters;
				clr->_skyDomeCurvature = obj.skyDomeCurvature;
				clr->_skyDomeTiling = obj.skyDomeTiling;
				clr->_skyDomeDistance = obj.skyDomeDistance;
				clr->_skyDomeXSegments = obj.skyDomeXSegments;
				clr->_skyDomeYSegments = obj.skyDomeYSegments;
				clr->_skyDomeYSegments_keep = obj.skyDomeYSegments_keep;
	
				return clr;
			}
	
			static operator SkyDomeGenParameters^ (const Ogre::SceneManager::SkyDomeGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyDomeCurvature
			{
				Mogre::Real get()
				{
					return _skyDomeCurvature;
				}
			}
	
			property Mogre::Real SkyDomeTiling
			{
				Mogre::Real get()
				{
					return _skyDomeTiling;
				}
			}
	
			property Mogre::Real SkyDomeDistance
			{
				Mogre::Real get()
				{
					return _skyDomeDistance;
				}
			}
	
			property int SkyDomeXSegments
			{
				int get()
				{
					return _skyDomeXSegments;
				}
			}
	
			property int SkyDomeYSegments
			{
				int get()
				{
					return _skyDomeYSegments;
				}
			}
	
			property int SkyDomeYSegments_keep
			{
				int get()
				{
					return _skyDomeYSegments_keep;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//SkyPlaneGenParameters
		//################################################################
	
		public: ref class SkyPlaneGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyPlaneGenParameters()
			{
			}
	
			Mogre::Real _skyPlaneScale;
			Mogre::Real _skyPlaneTiling;
			Mogre::Real _skyPlaneBow;
			int _skyPlaneXSegments;
			int _skyPlaneYSegments;
	
			static operator SkyPlaneGenParameters^ (const Ogre::SceneManager::SkyPlaneGenParameters& obj)
			{
				SkyPlaneGenParameters^ clr = gcnew SkyPlaneGenParameters;
				clr->_skyPlaneScale = obj.skyPlaneScale;
				clr->_skyPlaneTiling = obj.skyPlaneTiling;
				clr->_skyPlaneBow = obj.skyPlaneBow;
				clr->_skyPlaneXSegments = obj.skyPlaneXSegments;
				clr->_skyPlaneYSegments = obj.skyPlaneYSegments;
	
				return clr;
			}
	
			static operator SkyPlaneGenParameters^ (const Ogre::SceneManager::SkyPlaneGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyPlaneScale
			{
				Mogre::Real get()
				{
					return _skyPlaneScale;
				}
			}
	
			property Mogre::Real SkyPlaneTiling
			{
				Mogre::Real get()
				{
					return _skyPlaneTiling;
				}
			}
	
			property Mogre::Real SkyPlaneBow
			{
				Mogre::Real get()
				{
					return _skyPlaneBow;
				}
			}
	
			property int SkyPlaneXSegments
			{
				int get()
				{
					return _skyPlaneXSegments;
				}
			}
	
			property int SkyPlaneYSegments
			{
				int get()
				{
					return _skyPlaneYSegments;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( CameraIterator, Ogre::SceneManager::CameraIterator, Mogre::SceneManager::CameraList, Mogre::Camera^, Ogre::Camera*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( AnimationIterator, Ogre::SceneManager::AnimationIterator, Mogre::SceneManager::AnimationList, Mogre::Animation^, Ogre::Animation*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( MovableObjectIterator, Ogre::SceneManager::MovableObjectIterator, Mogre::SceneManager::MovableObjectMap, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String )
	
		
		        public:
		        // Custom overloads for setting/getting SceneManager options
		
		        bool SetOption( String^ strKey, bool value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] bool% value )
		        {
		        pin_ptr<bool> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, int value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] int% value )
		        {
		        pin_ptr<int> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Real value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Real% value )
		        {
		        pin_ptr<Real> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, String^ value )
		        {
		        DECLARE_NATIVE_STRING( o_str, value )
		        return SetOption(strKey, &o_str);
		        }
		        bool GetOption( String^ strKey, [Out] String^% value )
		        {
		        Ogre::String o_str;
		        bool ret = GetOption(strKey, &o_str);
		        if (ret)
		        {
		        value = TO_CLR_STRING( o_str );
		        }
		
		        return ret;
		        }
		
		        bool SetOption( String^ strKey, Mogre::Vector3 value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Vector3% value )
		        {
		        pin_ptr<Mogre::Vector3> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Mogre::Vector2 value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Vector2% value )
		        {
		        pin_ptr<Mogre::Vector2> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Mogre::Quaternion value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Quaternion% value )
		        {
		        pin_ptr<Mogre::Quaternion> p = &value;
		        return GetOption(strKey, p);
		        }
		      
	
		//Private Declarations
	private protected:
		//Cached fields
		String^ _name;
		Mogre::RenderQueue^ _renderQueue;
		
		//Event and Listener fields
		RenderQueueListener_Director* _renderQueueListener;
		Mogre::RenderQueueListener::PreRenderQueuesHandler^ _preRenderQueues;
		Mogre::RenderQueueListener::PostRenderQueuesHandler^ _postRenderQueues;
		Mogre::RenderQueueListener::RenderQueueStartedHandler^ _renderQueueStarted;
		Mogre::RenderQueueListener::RenderQueueEndedHandler^ _renderQueueEnded;
	
	
		//Internal Declarations
	public protected:
		SceneManager( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		~SceneManager()
		{
			if (_renderQueueListener != 0)
			{
				if (_native != 0) static_cast<Ogre::SceneManager*>(_native)->removeRenderQueueListener(_renderQueueListener);
				delete _renderQueueListener; _renderQueueListener = 0;
			}
		}
	
	
		//Public Declarations
	public:
	
	
		event Mogre::RenderQueueListener::PreRenderQueuesHandler^ PreRenderQueues
		{
			void add(Mogre::RenderQueueListener::PreRenderQueuesHandler^ hnd)
			{
				if (_preRenderQueues == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForPreRenderQueues = true;
				}
				_preRenderQueues += hnd;
			}
			void remove(Mogre::RenderQueueListener::PreRenderQueuesHandler^ hnd)
			{
				_preRenderQueues -= hnd;
				if (_preRenderQueues == CLR_NULL) _renderQueueListener->doCallForPreRenderQueues = false;
			}
		private:
			void raise( )
			{
				if (_preRenderQueues)
					_preRenderQueues->Invoke( );
			}
		}
	
		event Mogre::RenderQueueListener::PostRenderQueuesHandler^ PostRenderQueues
		{
			void add(Mogre::RenderQueueListener::PostRenderQueuesHandler^ hnd)
			{
				if (_postRenderQueues == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForPostRenderQueues = true;
				}
				_postRenderQueues += hnd;
			}
			void remove(Mogre::RenderQueueListener::PostRenderQueuesHandler^ hnd)
			{
				_postRenderQueues -= hnd;
				if (_postRenderQueues == CLR_NULL) _renderQueueListener->doCallForPostRenderQueues = false;
			}
		private:
			void raise( )
			{
				if (_postRenderQueues)
					_postRenderQueues->Invoke( );
			}
		}
	
		event Mogre::RenderQueueListener::RenderQueueStartedHandler^ RenderQueueStarted
		{
			void add(Mogre::RenderQueueListener::RenderQueueStartedHandler^ hnd)
			{
				if (_renderQueueStarted == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForRenderQueueStarted = true;
				}
				_renderQueueStarted += hnd;
			}
			void remove(Mogre::RenderQueueListener::RenderQueueStartedHandler^ hnd)
			{
				_renderQueueStarted -= hnd;
				if (_renderQueueStarted == CLR_NULL) _renderQueueListener->doCallForRenderQueueStarted = false;
			}
		private:
			void raise( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation )
			{
				if (_renderQueueStarted)
					_renderQueueStarted->Invoke( queueGroupId, invocation, skipThisInvocation );
			}
		}
	
		event Mogre::RenderQueueListener::RenderQueueEndedHandler^ RenderQueueEnded
		{
			void add(Mogre::RenderQueueListener::RenderQueueEndedHandler^ hnd)
			{
				if (_renderQueueEnded == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForRenderQueueEnded = true;
				}
				_renderQueueEnded += hnd;
			}
			void remove(Mogre::RenderQueueListener::RenderQueueEndedHandler^ hnd)
			{
				_renderQueueEnded -= hnd;
				if (_renderQueueEnded == CLR_NULL) _renderQueueListener->doCallForRenderQueueEnded = false;
			}
		private:
			void raise( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation )
			{
				if (_renderQueueEnded)
					_renderQueueEnded->Invoke( queueGroupId, invocation, repeatThisInvocation );
			}
		}
	
	
		static property Mogre::uint32 WORLD_GEOMETRY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 ENTITY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 FX_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 STATICGEOMETRY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 LIGHT_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 FRUSTUM_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 USER_TYPE_MASK_LIMIT
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		property Mogre::ColourValue AmbientLight
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property bool CameraRelativeRendering
		{
		public:
			bool get();
		public:
			void set(bool rel);
		}
	
		property Mogre::Viewport^ CurrentViewport
		{
		public:
			Mogre::Viewport^ get();
		}
	
		property Mogre::RenderSystem^ DestinationRenderSystem
		{
		public:
			Mogre::RenderSystem^ get();
		}
	
		property bool DisplaySceneNodes
		{
		public:
			bool get();
		public:
			void set(bool display);
		}
	
		property bool FindVisibleObjects
		{
		public:
			bool get();
		public:
			void set(bool find);
		}
	
		property bool FlipCullingOnNegativeScale
		{
		public:
			bool get();
		public:
			void set(bool n);
		}
	
		property Mogre::ColourValue FogColour
		{
		public:
			Mogre::ColourValue get();
		}
	
		property Mogre::Real FogDensity
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real FogEnd
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::FogMode FogMode
		{
		public:
			Mogre::FogMode get();
		}
	
		property Mogre::Real FogStart
		{
		public:
			Mogre::Real get();
		}
	
		property bool IsLateMaterialResolving
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueAdditive
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueIntegrated
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueInUse
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueModulative
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueStencilBased
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueTextureBased
		{
		public:
			bool get();
		}
	
		property bool IsSkyBoxEnabled
		{
		public:
			bool get();
		}
	
		property bool IsSkyDomeEnabled
		{
		public:
			bool get();
		}
	
		property bool IsSkyPlaneEnabled
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property bool NormaliseNormalsOnScale
		{
		public:
			bool get();
		public:
			void set(bool n);
		}
	
		property Mogre::RenderQueue^ RenderQueue
		{
		public:
			Mogre::RenderQueue^ get();
		}
	
		property Mogre::SceneNode^ RootSceneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property bool ShadowCasterRenderBackFaces
		{
		public:
			bool get();
		public:
			void set(bool bf);
		}
	
		property Mogre::ColourValue ShadowColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Real ShadowDirectionalLightExtrusionDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real dist);
		}
	
		property Mogre::Real ShadowDirLightTextureOffset
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real offset);
		}
	
		property Mogre::Real ShadowFarDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real distance);
		}
	
		property Mogre::Real ShadowFarDistanceSquared
		{
		public:
			Mogre::Real get();
		}
	
		property size_t ShadowIndexBufferSize
		{
		public:
			size_t get();
		public:
			void set(size_t size);
		}
	
		property Mogre::ShadowTechnique ShadowTechnique
		{
		public:
			Mogre::ShadowTechnique get();
		public:
			void set(Mogre::ShadowTechnique technique);
		}
	
		property size_t ShadowTextureCount
		{
		public:
			size_t get();
		public:
			void set(size_t count);
		}
	
		property bool ShadowTextureSelfShadow
		{
		public:
			bool get();
		public:
			void set(bool selfShadow);
		}
	
		property bool ShadowUseLightClipPlanes
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool ShowBoundingBoxes
		{
		public:
			bool get();
		public:
			void set(bool bShow);
		}
	
		property bool ShowDebugShadows
		{
		public:
			bool get();
		public:
			void set(bool debug);
		}
	
		property Mogre::SceneNode^ SkyBoxNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::SceneNode^ SkyDomeNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::SceneNode^ SkyPlaneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		property Mogre::uint32 VisibilityMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 vmask);
		}
	
		property Mogre::uint8 WorldGeometryRenderQueue
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 qid);
		}
	
		void _Init_CLRObject( );
	
		void PrepareShadowTextures( Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Const_LightList^ lightList );
		void PrepareShadowTextures( Mogre::Camera^ cam, Mogre::Viewport^ vp );
	
		Mogre::Camera^ CreateCamera( String^ name );
	
		Mogre::Camera^ GetCamera( String^ name );
	
		bool HasCamera( String^ name );
	
		void DestroyCamera( Mogre::Camera^ cam );
	
		void DestroyCamera( String^ name );
	
		void DestroyAllCameras( );
	
		Mogre::Light^ CreateLight( String^ name );
	
		Mogre::Light^ CreateLight( );
	
		Mogre::Light^ GetLight( String^ name );
	
		bool HasLight( String^ name );
	
		Mogre::Const_PlaneList^ GetLightClippingPlanes( Mogre::Light^ l );
	
		Mogre::RealRect GetLightScissorRect( Mogre::Light^ l, Mogre::Camera^ cam );
	
		void DestroyLight( String^ name );
	
		void DestroyLight( Mogre::Light^ light );
	
		void DestroyAllLights( );
	
		void _notifyLightsDirty( );
	
		Mogre::ulong _getLightsDirtyCounter( );
	
		Mogre::Const_LightList^ _getLightsAffectingFrustum( );
	
		void _populateLightList( Mogre::Vector3 position, Mogre::Real radius, Mogre::LightList^ destList, Mogre::uint32 lightMask );
		void _populateLightList( Mogre::Vector3 position, Mogre::Real radius, Mogre::LightList^ destList );
	
		void _populateLightList( Mogre::SceneNode^ sn, Mogre::Real radius, Mogre::LightList^ destList, Mogre::uint32 lightMask );
		void _populateLightList( Mogre::SceneNode^ sn, Mogre::Real radius, Mogre::LightList^ destList );
	
		Mogre::SceneNode^ CreateSceneNode( );
	
		Mogre::SceneNode^ CreateSceneNode( String^ name );
	
		void DestroySceneNode( String^ name );
	
		void DestroySceneNode( Mogre::SceneNode^ sn );
	
		Mogre::SceneNode^ GetSceneNode( String^ name );
	
		bool HasSceneNode( String^ name );
	
		Mogre::Entity^ CreateEntity( String^ entityName, String^ meshName, String^ groupName );
		Mogre::Entity^ CreateEntity( String^ entityName, String^ meshName );
	
		Mogre::Entity^ CreateEntity( String^ meshName );
	
		Mogre::Entity^ CreateEntity( String^ entityName, Mogre::SceneManager::PrefabType ptype );
	
		Mogre::Entity^ CreateEntity( Mogre::SceneManager::PrefabType ptype );
	
		Mogre::Entity^ GetEntity( String^ name );
	
		bool HasEntity( String^ name );
	
		void DestroyEntity( Mogre::Entity^ ent );
	
		void DestroyEntity( String^ name );
	
		void DestroyAllEntities( );
	
		Mogre::ManualObject^ CreateManualObject( String^ name );
	
		Mogre::ManualObject^ CreateManualObject( );
	
		Mogre::ManualObject^ GetManualObject( String^ name );
	
		bool HasManualObject( String^ name );
	
		void DestroyManualObject( Mogre::ManualObject^ obj );
	
		void DestroyManualObject( String^ name );
	
		void DestroyAllManualObjects( );
	
		Mogre::BillboardChain^ CreateBillboardChain( String^ name );
	
		Mogre::BillboardChain^ CreateBillboardChain( );
	
		Mogre::BillboardChain^ GetBillboardChain( String^ name );
	
		bool HasBillboardChain( String^ name );
	
		void DestroyBillboardChain( Mogre::BillboardChain^ obj );
	
		void DestroyBillboardChain( String^ name );
	
		void DestroyAllBillboardChains( );
	
		Mogre::RibbonTrail^ CreateRibbonTrail( String^ name );
	
		Mogre::RibbonTrail^ CreateRibbonTrail( );
	
		Mogre::RibbonTrail^ GetRibbonTrail( String^ name );
	
		bool HasRibbonTrail( String^ name );
	
		void DestroyRibbonTrail( Mogre::RibbonTrail^ obj );
	
		void DestroyRibbonTrail( String^ name );
	
		void DestroyAllRibbonTrails( );
	
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, String^ templateName );
	
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, size_t quota, String^ resourceGroup );
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, size_t quota );
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name );
	
		Mogre::ParticleSystem^ CreateParticleSystem( size_t quota, String^ resourceGroup );
		Mogre::ParticleSystem^ CreateParticleSystem( size_t quota );
		Mogre::ParticleSystem^ CreateParticleSystem( );
	
		Mogre::ParticleSystem^ GetParticleSystem( String^ name );
	
		bool HasParticleSystem( String^ name );
	
		void DestroyParticleSystem( Mogre::ParticleSystem^ obj );
	
		void DestroyParticleSystem( String^ name );
	
		void DestroyAllParticleSystems( );
	
		void ClearScene( );
	
		void PrepareWorldGeometry( String^ filename );
	
		void PrepareWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName );
		void PrepareWorldGeometry( Mogre::DataStreamPtr^ stream );
	
		void SetWorldGeometry( String^ filename );
	
		void SetWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName );
		void SetWorldGeometry( Mogre::DataStreamPtr^ stream );
	
		size_t EstimateWorldGeometry( String^ filename );
	
		size_t EstimateWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName );
		size_t EstimateWorldGeometry( Mogre::DataStreamPtr^ stream );
	
		Mogre::ViewPoint^ GetSuggestedViewpoint( bool random );
		Mogre::ViewPoint^ GetSuggestedViewpoint( );
	
		bool SetOption( String^ strKey, const void* pValue );
	
		bool GetOption( String^ strKey, void* pDestValue );
	
		bool HasOption( String^ strKey );
	
		bool GetOptionValues( String^ strKey, Mogre::StringVector^ refValueList );
	
		bool GetOptionKeys( Mogre::StringVector^ refKeys );
	
		void _updateSceneGraph( Mogre::Camera^ cam );
	
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool onlyShadowCasters );
	
		void _applySceneAnimations( );
	
		void _renderVisibleObjects( );
	
		void _renderScene( Mogre::Camera^ camera, Mogre::Viewport^ vp, bool includeOverlays );
	
		void _queueSkiesForRendering( Mogre::Camera^ cam );
	
		void _setDestinationRenderSystem( Mogre::RenderSystem^ sys );
	
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments, String^ groupName );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName );
	
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, Mogre::uint8 renderQueue, Mogre::Real bow, int xsegments, int ysegments, String^ groupName );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, Mogre::uint8 renderQueue, Mogre::Real bow, int xsegments, int ysegments );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, Mogre::uint8 renderQueue, Mogre::Real bow, int xsegments );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, Mogre::uint8 renderQueue, Mogre::Real bow );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, Mogre::uint8 renderQueue );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale );
		void _setSkyPlane( bool enable, Mogre::Plane plane, String^ materialName );
	
		void SetSkyPlaneEnabled( bool enable );
	
		Mogre::SceneManager::SkyPlaneGenParameters^ GetSkyPlaneGenParameters( );
	
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, String^ groupName );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance );
		void SetSkyBox( bool enable, String^ materialName );
	
		void _setSkyBox( bool enable, String^ materialName, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation, String^ groupName );
		void _setSkyBox( bool enable, String^ materialName, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation );
		void _setSkyBox( bool enable, String^ materialName, Mogre::Real distance, Mogre::uint8 renderQueue );
		void _setSkyBox( bool enable, String^ materialName, Mogre::Real distance );
		void _setSkyBox( bool enable, String^ materialName );
	
		void SetSkyBoxEnabled( bool enable );
	
		Mogre::SceneManager::SkyBoxGenParameters^ GetSkyBoxGenParameters( );
	
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String^ groupName );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature );
		void SetSkyDome( bool enable, String^ materialName );
	
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String^ groupName );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation, int xsegments, int ysegments );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation, int xsegments );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue, Mogre::Quaternion orientation );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, Mogre::uint8 renderQueue );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling );
		void _setSkyDome( bool enable, String^ materialName, Mogre::Real curvature );
		void _setSkyDome( bool enable, String^ materialName );
	
		void SetSkyDomeEnabled( bool enable );
	
		Mogre::SceneManager::SkyDomeGenParameters^ GetSkyDomeGenParameters( );
	
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour );
		void SetFog( Mogre::FogMode mode );
		void SetFog( );
	
		Mogre::BillboardSet^ CreateBillboardSet( String^ name, unsigned int poolSize );
		Mogre::BillboardSet^ CreateBillboardSet( String^ name );
	
		Mogre::BillboardSet^ CreateBillboardSet( unsigned int poolSize );
		Mogre::BillboardSet^ CreateBillboardSet( );
	
		Mogre::BillboardSet^ GetBillboardSet( String^ name );
	
		bool HasBillboardSet( String^ name );
	
		void DestroyBillboardSet( Mogre::BillboardSet^ set );
	
		void DestroyBillboardSet( String^ name );
	
		void DestroyAllBillboardSets( );
	
		Mogre::Animation^ CreateAnimation( String^ name, Mogre::Real length );
	
		Mogre::Animation^ GetAnimation( String^ name );
	
		bool HasAnimation( String^ name );
	
		void DestroyAnimation( String^ name );
	
		void DestroyAllAnimations( );
	
		Mogre::AnimationState^ CreateAnimationState( String^ animName );
	
		Mogre::AnimationState^ GetAnimationState( String^ animName );
	
		bool HasAnimationState( String^ name );
	
		void DestroyAnimationState( String^ name );
	
		void DestroyAllAnimationStates( );
	
		void ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame );
		void ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix );
	
		void ManualRender( Mogre::IRenderable^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame, bool lightScissoringClipping, bool doLightIteration, Mogre::Const_LightList^ manualLightList );
		void ManualRender( Mogre::IRenderable^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame, bool lightScissoringClipping, bool doLightIteration );
		void ManualRender( Mogre::IRenderable^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame, bool lightScissoringClipping );
		void ManualRender( Mogre::IRenderable^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame );
		void ManualRender( Mogre::IRenderable^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix );
	
		void AddRenderObjectListener( Mogre::RenderObjectListener^ newListener );
	
		void RemoveRenderObjectListener( Mogre::RenderObjectListener^ delListener );
	
		void AddSpecialCaseRenderQueue( Mogre::uint8 qid );
	
		void RemoveSpecialCaseRenderQueue( Mogre::uint8 qid );
	
		void ClearSpecialCaseRenderQueues( );
	
		void SetSpecialCaseRenderQueueMode( Mogre::SceneManager::SpecialCaseRenderQueueMode mode );
	
		Mogre::SceneManager::SpecialCaseRenderQueueMode GetSpecialCaseRenderQueueMode( );
	
		bool IsRenderQueueToBeProcessed( Mogre::uint8 qid );
	
		void _notifyAutotrackingSceneNode( Mogre::SceneNode^ node, bool autoTrack );
	
		Mogre::AxisAlignedBoxSceneQuery^ CreateAABBQuery( Mogre::AxisAlignedBox^ box, unsigned long mask );
		Mogre::AxisAlignedBoxSceneQuery^ CreateAABBQuery( Mogre::AxisAlignedBox^ box );
	
		Mogre::SphereSceneQuery^ CreateSphereQuery( Mogre::Sphere sphere, unsigned long mask );
		Mogre::SphereSceneQuery^ CreateSphereQuery( Mogre::Sphere sphere );
	
		Mogre::PlaneBoundedVolumeListSceneQuery^ CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes, unsigned long mask );
		Mogre::PlaneBoundedVolumeListSceneQuery^ CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes );
	
		Mogre::RaySceneQuery^ CreateRayQuery( Mogre::Ray ray, unsigned long mask );
		Mogre::RaySceneQuery^ CreateRayQuery( Mogre::Ray ray );
	
		Mogre::IntersectionSceneQuery^ CreateIntersectionQuery( unsigned long mask );
		Mogre::IntersectionSceneQuery^ CreateIntersectionQuery( );
	
		void DestroyQuery( Mogre::SceneQuery^ query );
	
		Mogre::SceneManager::CameraIterator^ GetCameraIterator( );
	
		Mogre::SceneManager::AnimationIterator^ GetAnimationIterator( );
	
		Mogre::AnimationStateIterator^ GetAnimationStateIterator( );
	
		void SetShadowTextureSize( unsigned short size );
	
		void SetShadowTextureConfig( size_t shadowIndex, unsigned short width, unsigned short height, Mogre::PixelFormat format );
	
		void SetShadowTextureConfig( size_t shadowIndex, Mogre::ShadowTextureConfig config );
	
		Mogre::ConstShadowTextureConfigIterator^ GetShadowTextureConfigIterator( );
	
		void SetShadowTexturePixelFormat( Mogre::PixelFormat fmt );
	
		void SetShadowTextureCountPerLightType( Mogre::Light::LightTypes type, size_t count );
	
		size_t GetShadowTextureCountPerLightType( Mogre::Light::LightTypes type );
	
		void SetShadowTextureSettings( unsigned short size, unsigned short count, Mogre::PixelFormat fmt );
		void SetShadowTextureSettings( unsigned short size, unsigned short count );
	
		Mogre::TexturePtr^ GetShadowTexture( size_t shadowIndex );
	
		void SetShadowTextureFadeStart( Mogre::Real fadeStart );
	
		void SetShadowTextureFadeEnd( Mogre::Real fadeEnd );
	
		void SetShadowTextureCasterMaterial( String^ name );
	
		void SetShadowTextureReceiverMaterial( String^ name );
	
		void SetShadowCameraSetup( Mogre::ShadowCameraSetupPtr^ shadowSetup );
	
		Mogre::ShadowCameraSetupPtr^ GetShadowCameraSetup( );
	
		void SetShadowUseInfiniteFarPlane( bool enable );
	
		void _setActiveCompositorChain( Mogre::CompositorChain^ chain );
	
		void SetLateMaterialResolving( bool isLate );
	
		Mogre::CompositorChain^ _getActiveCompositorChain( );
	
		void AddListener( Mogre::SceneManager::IListener^ s );
	
		void RemoveListener( Mogre::SceneManager::IListener^ s );
	
		Mogre::StaticGeometry^ CreateStaticGeometry( String^ name );
	
		Mogre::StaticGeometry^ GetStaticGeometry( String^ name );
	
		bool HasStaticGeometry( String^ name );
	
		void DestroyStaticGeometry( Mogre::StaticGeometry^ geom );
	
		void DestroyStaticGeometry( String^ name );
	
		void DestroyAllStaticGeometry( );
	
		Mogre::InstancedGeometry^ CreateInstancedGeometry( String^ name );
	
		Mogre::InstancedGeometry^ GetInstancedGeometry( String^ name );
	
		void DestroyInstancedGeometry( Mogre::InstancedGeometry^ geom );
	
		void DestroyInstancedGeometry( String^ name );
	
		void DestroyAllInstancedGeometry( );
	
		Mogre::MovableObject^ CreateMovableObject( String^ name, String^ typeName, Mogre::Const_NameValuePairList^ params );
		Mogre::MovableObject^ CreateMovableObject( String^ name, String^ typeName );
	
		Mogre::MovableObject^ CreateMovableObject( String^ typeName, Mogre::Const_NameValuePairList^ params );
		Mogre::MovableObject^ CreateMovableObject( String^ typeName );
	
		void DestroyMovableObject( String^ name, String^ typeName );
	
		void DestroyMovableObject( Mogre::MovableObject^ m );
	
		void DestroyAllMovableObjectsByType( String^ typeName );
	
		void DestroyAllMovableObjects( );
	
		Mogre::MovableObject^ GetMovableObject( String^ name, String^ typeName );
	
		bool HasMovableObject( String^ name, String^ typeName );
	
		Mogre::SceneManager::MovableObjectIterator^ GetMovableObjectIterator( String^ typeName );
	
		void InjectMovableObject( Mogre::MovableObject^ m );
	
		void ExtractMovableObject( String^ name, String^ typeName );
	
		void ExtractMovableObject( Mogre::MovableObject^ m );
	
		void ExtractAllMovableObjectsByType( String^ typeName );
	
		Mogre::uint32 _getCombinedVisibilityMask( );
	
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend, bool shadowDerivation, bool doLightIteration, Mogre::Const_LightList^ manualLightList );
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend, bool shadowDerivation, bool doLightIteration );
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend, bool shadowDerivation );
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend );
	
		void _suppressRenderStateChanges( bool suppress );
	
		bool _areRenderStateChangesSuppressed( );
	
		Mogre::Pass^ _setPass( Mogre::Pass^ pass, bool evenIfSuppressed, bool shadowDerivation );
		Mogre::Pass^ _setPass( Mogre::Pass^ pass, bool evenIfSuppressed );
		Mogre::Pass^ _setPass( Mogre::Pass^ pass );
	
		void _markGpuParamsDirty( Mogre::uint16 mask );
	
		void _suppressShadows( bool suppress );
	
		bool _areShadowsSuppressed( );
	
		void _renderQueueGroupObjects( Mogre::RenderQueueGroup^ group, Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		Mogre::VisibleObjectsBoundsInfo_NativePtr GetVisibleObjectsBoundsInfo( Mogre::Camera^ cam );
	
		Mogre::VisibleObjectsBoundsInfo_NativePtr GetShadowCasterBoundsInfo( Mogre::Light^ light, size_t iteration );
		Mogre::VisibleObjectsBoundsInfo_NativePtr GetShadowCasterBoundsInfo( Mogre::Light^ light );
	
		void AddLodListener( Mogre::LodListener^ listener );
	
		void RemoveLodListener( Mogre::LodListener^ listener );
	
		void _notifyMovableObjectLodChanged( Mogre::MovableObjectLodChangedEvent_NativePtr evt );
	
		void _notifyEntityMeshLodChanged( Mogre::EntityMeshLodChangedEvent_NativePtr evt );
	
		void _notifyEntityMaterialLodChanged( Mogre::EntityMaterialLodChangedEvent_NativePtr evt );
	
		void _handleLodEvents( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneManager )
	
		//Protected Declarations
	protected public:
		virtual void OnPreRenderQueues( ) = IRenderQueueListener_Receiver::PreRenderQueues
		{
			PreRenderQueues( );
		}
	
		virtual void OnPostRenderQueues( ) = IRenderQueueListener_Receiver::PostRenderQueues
		{
			PostRenderQueues( );
		}
	
		virtual void OnRenderQueueStarted( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation ) = IRenderQueueListener_Receiver::RenderQueueStarted
		{
			RenderQueueStarted( queueGroupId, invocation, skipThisInvocation );
		}
	
		virtual void OnRenderQueueEnded( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation ) = IRenderQueueListener_Receiver::RenderQueueEnded
		{
			RenderQueueEnded( queueGroupId, invocation, repeatThisInvocation );
		}
	
	
	
	};
	
	//################################################################
	//DefaultIntersectionSceneQuery
	//################################################################
	
	public ref class DefaultIntersectionSceneQuery : public IntersectionSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultIntersectionSceneQuery( CLRObject* obj ) : IntersectionSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultIntersectionSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::IIntersectionSceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultIntersectionSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultRaySceneQuery
	//################################################################
	
	public ref class DefaultRaySceneQuery : public RaySceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultRaySceneQuery( CLRObject* obj ) : RaySceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultRaySceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::IRaySceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultRaySceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultSphereSceneQuery
	//################################################################
	
	public ref class DefaultSphereSceneQuery : public SphereSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultSphereSceneQuery( CLRObject* obj ) : SphereSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultSphereSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultSphereSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultPlaneBoundedVolumeListSceneQuery
	//################################################################
	
	public ref class DefaultPlaneBoundedVolumeListSceneQuery : public PlaneBoundedVolumeListSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultPlaneBoundedVolumeListSceneQuery( CLRObject* obj ) : PlaneBoundedVolumeListSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultPlaneBoundedVolumeListSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultPlaneBoundedVolumeListSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultAxisAlignedBoxSceneQuery
	//################################################################
	
	public ref class DefaultAxisAlignedBoxSceneQuery : public AxisAlignedBoxSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultAxisAlignedBoxSceneQuery( CLRObject* obj ) : AxisAlignedBoxSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultAxisAlignedBoxSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultAxisAlignedBoxSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SceneManagerFactory
	//################################################################
	
	public ref class SceneManagerFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SceneManagerFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::SceneManagerMetaData_NativePtr MetaData
		{
		public:
			Mogre::SceneManagerMetaData_NativePtr get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::SceneManager^ CreateInstance( String^ instanceName );
	
		void DestroyInstance( Mogre::SceneManager^ instance );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneManagerFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SceneManager_Listener_Proxy
	//################################################################
	
	class SceneManager_Listener_Proxy : public Ogre::SceneManager::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::SceneManager::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::SceneManager::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		SceneManager_Listener_Proxy( Mogre::SceneManager::Listener^ managedObj ) :
			Ogre::SceneManager::Listener( ),
			_managed(managedObj)
		{
		}
	
		virtual void preFindVisibleObjects( Ogre::SceneManager* source, Ogre::SceneManager::IlluminationRenderStage irs, Ogre::Viewport* v ) override;
	
		virtual void postFindVisibleObjects( Ogre::SceneManager* source, Ogre::SceneManager::IlluminationRenderStage irs, Ogre::Viewport* v ) override;
	
		virtual void shadowTexturesUpdated( size_t numberOfShadowTextures ) override;
	
		virtual void shadowTextureCasterPreViewProj( Ogre::Light* light, Ogre::Camera* camera, size_t iteration ) override;
	
		virtual void shadowTextureReceiverPreViewProj( Ogre::Light* light, Ogre::Frustum* frustum ) override;
	
		virtual bool sortLightsAffectingFrustum( Ogre::LightList& lightList ) override;
	
		virtual void sceneManagerDestroyed( Ogre::SceneManager* source ) override;
	};
	

}
