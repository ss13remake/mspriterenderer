/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreArchiveManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ArchiveManager
	//################################################################
	
	public ref class ArchiveManager
	{
		//Nested Types
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( ArchiveMapIterator, Ogre::ArchiveManager::ArchiveMapIterator, Mogre::ArchiveManager::ArchiveMap, Mogre::Archive^, Ogre::Archive*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		static ArchiveManager^ _singleton;
		Ogre::ArchiveManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ArchiveManager( Ogre::ArchiveManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ArchiveManager( );
	
		static property ArchiveManager^ Singleton
		{
			ArchiveManager^ get()
			{
				Ogre::ArchiveManager* ptr = Ogre::ArchiveManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew ArchiveManager( ptr );
				}
				return _singleton;
			}
		}
	
		Mogre::Archive^ Load( String^ filename, String^ archiveType );
	
		void Unload( Mogre::Archive^ arch );
	
		void Unload( String^ filename );
	
		Mogre::ArchiveManager::ArchiveMapIterator^ GetArchiveIterator( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
