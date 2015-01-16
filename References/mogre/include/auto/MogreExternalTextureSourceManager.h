/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreExternalTextureSourceManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ExternalTextureSourceManager
	//################################################################
	
	public ref class ExternalTextureSourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static ExternalTextureSourceManager^ _singleton;
		Ogre::ExternalTextureSourceManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ExternalTextureSourceManager( Ogre::ExternalTextureSourceManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ExternalTextureSourceManager( );
	
		static property ExternalTextureSourceManager^ Singleton
		{
			ExternalTextureSourceManager^ get()
			{
				Ogre::ExternalTextureSourceManager* ptr = Ogre::ExternalTextureSourceManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew ExternalTextureSourceManager( ptr );
				}
				return _singleton;
			}
		}
	
		property Mogre::ExternalTextureSource^ CurrentPlugIn
		{
		public:
			Mogre::ExternalTextureSource^ get();
		}
	
		void SetCurrentPlugIn( String^ sTexturePlugInType );
	
		void DestroyAdvancedTexture( String^ sTextureName, String^ groupName );
		void DestroyAdvancedTexture( String^ sTextureName );
	
		Mogre::ExternalTextureSource^ GetExternalTextureSource( String^ sTexturePlugInType );
	
		void SetExternalTextureSource( String^ sTexturePlugInType, Mogre::ExternalTextureSource^ pTextureSystem );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
