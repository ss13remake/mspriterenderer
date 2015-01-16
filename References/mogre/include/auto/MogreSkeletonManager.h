/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreSkeletonManager.h"
#pragma managed(pop)
#include "MogreResourceManager.h"

namespace Mogre
{
	//################################################################
	//SkeletonManager
	//################################################################
	
	public ref class SkeletonManager : public ResourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static SkeletonManager^ _singleton;
	
		//Internal Declarations
	public protected:
		SkeletonManager( Ogre::SkeletonManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SkeletonManager( );
	
		static property SkeletonManager^ Singleton
		{
			SkeletonManager^ get()
			{
				Ogre::SkeletonManager* ptr = Ogre::SkeletonManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew SkeletonManager( ptr );
				}
				return _singleton;
			}
		}
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
