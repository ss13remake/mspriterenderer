/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageStrategy.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//PageStrategyData
	//################################################################
	
	public ref class PageStrategyData : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageStrategyData( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		bool Load( Mogre::StreamSerialiser^ stream );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageStrategyData )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//PageStrategy
	//################################################################
	
	public ref class PageStrategy : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageStrategy( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::PageManager^ Manager
		{
		public:
			Mogre::PageManager^ get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		void FrameStart( Mogre::Real timeSinceLastFrame, Mogre::PagedWorldSection^ section );
	
		void FrameEnd( Mogre::Real timeElapsed, Mogre::PagedWorldSection^ section );
	
		void NotifyCamera( Mogre::Camera^ cam, Mogre::PagedWorldSection^ section );
	
		Mogre::PageStrategyData^ CreateData( );
	
		void DestroyData( Mogre::PageStrategyData^ d );
	
		void UpdateDebugDisplay( Mogre::Page^ p, Mogre::SceneNode^ sn );
	
		Mogre::PageID GetPageID( Mogre::Vector3 worldPos, Mogre::PagedWorldSection^ section );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageStrategy )
	
		//Protected Declarations
	protected public:
	
	};
	

}
