/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderSystemCapabilitiesManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RenderSystemCapabilitiesManager
	//################################################################
	
	public ref class RenderSystemCapabilitiesManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static RenderSystemCapabilitiesManager^ _singleton;
		Ogre::RenderSystemCapabilitiesManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		RenderSystemCapabilitiesManager( Ogre::RenderSystemCapabilitiesManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		RenderSystemCapabilitiesManager( );
	
		static property RenderSystemCapabilitiesManager^ Singleton
		{
			RenderSystemCapabilitiesManager^ get()
			{
				Ogre::RenderSystemCapabilitiesManager* ptr = Ogre::RenderSystemCapabilitiesManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew RenderSystemCapabilitiesManager( ptr );
				}
				return _singleton;
			}
		}
	
		void ParseCapabilitiesFromArchive( String^ filename, String^ archiveType, bool recursive );
		void ParseCapabilitiesFromArchive( String^ filename, String^ archiveType );
	
		Mogre::RenderSystemCapabilities^ LoadParsedCapabilities( String^ name );
	
		void _addRenderSystemCapabilities( String^ name, Mogre::RenderSystemCapabilities^ caps );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
