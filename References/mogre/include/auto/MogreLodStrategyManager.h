/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreLodStrategyManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//LodStrategyManager
	//################################################################
	
	public ref class LodStrategyManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static LodStrategyManager^ _singleton;
		Ogre::LodStrategyManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		LodStrategyManager( Ogre::LodStrategyManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		LodStrategyManager( );
	
		static property LodStrategyManager^ Singleton
		{
			LodStrategyManager^ get()
			{
				Ogre::LodStrategyManager* ptr = Ogre::LodStrategyManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew LodStrategyManager( ptr );
				}
				return _singleton;
			}
		}
	
		property Mogre::LodStrategy^ DefaultStrategy
		{
		public:
			Mogre::LodStrategy^ get();
		public:
			void set(Mogre::LodStrategy^ strategy);
		}
	
		void AddStrategy( Mogre::LodStrategy^ strategy );
	
		Mogre::LodStrategy^ RemoveStrategy( String^ name );
	
		void RemoveAllStrategies( );
	
		Mogre::LodStrategy^ GetStrategy( String^ name );
	
		void SetDefaultStrategy( String^ name );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
