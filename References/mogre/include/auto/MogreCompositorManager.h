/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreCompositorManager.h"
#pragma managed(pop)
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"
#include "MogreCompositionTechnique.h"

namespace Mogre
{
	//################################################################
	//CompositorManager
	//################################################################
	
	public ref class CompositorManager : public ResourceManager
	{
		//Nested Types
		public: ref class UniqueTextureSet;
	
		#define STLDECL_MANAGEDTYPE Mogre::Texture^
		#define STLDECL_NATIVETYPE Ogre::Texture*
		public: INC_DECLARE_STLSET( UniqueTextureSet, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		static CompositorManager^ _singleton;
	
		//Internal Declarations
	public protected:
		CompositorManager( Ogre::CompositorManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
		static property CompositorManager^ Singleton
		{
			CompositorManager^ get()
			{
				Ogre::CompositorManager* ptr = Ogre::CompositorManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew CompositorManager( ptr );
				}
				return _singleton;
			}
		}
	
		void Initialise( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		Mogre::CompositorChain^ GetCompositorChain( Mogre::Viewport^ vp );
	
		bool HasCompositorChain( Mogre::Viewport^ vp );
	
		void RemoveCompositorChain( Mogre::Viewport^ vp );
	
		Mogre::CompositorInstance^ AddCompositor( Mogre::Viewport^ vp, String^ compositor, int addPosition );
		Mogre::CompositorInstance^ AddCompositor( Mogre::Viewport^ vp, String^ compositor );
	
		void RemoveCompositor( Mogre::Viewport^ vp, String^ compositor );
	
		void SetCompositorEnabled( Mogre::Viewport^ vp, String^ compositor, bool value );
	
		Mogre::IRenderable^ _getTexturedRectangle2D( );
	
		void RemoveAll( );
	
		void _reconstructAllCompositorResources( );
	
		Mogre::TexturePtr^ GetPooledTexture( String^ name, String^ localName, size_t w, size_t h, Mogre::PixelFormat f, Mogre::uint aa, String^ aaHint, bool srgb, Mogre::CompositorManager::UniqueTextureSet^ texturesAlreadyAssigned, Mogre::CompositorInstance^ inst, Mogre::CompositionTechnique::TextureScope scope );
	
		void FreePooledTextures( bool onlyIfUnreferenced );
		void FreePooledTextures( );
	
		void _relocateChain( Mogre::Viewport^ sourceVP, Mogre::Viewport^ destVP );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
