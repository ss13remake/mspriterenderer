/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreFontManager.h"
#pragma managed(pop)
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//FontManager
	//################################################################
	
	public ref class FontManager : public ResourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static FontManager^ _singleton;
	
		//Internal Declarations
	public protected:
		FontManager( Ogre::FontManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		FontManager( );
	
		static property FontManager^ Singleton
		{
			FontManager^ get()
			{
				Ogre::FontManager* ptr = Ogre::FontManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew FontManager( ptr );
				}
				return _singleton;
			}
		}
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
