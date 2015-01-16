/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageContentCollection.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PageContentCollection
	//################################################################
	
	public ref class PageContentCollection : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageContentCollection( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		static property Mogre::uint32 CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::PageManager^ Manager
		{
		public:
			Mogre::PageManager^ get();
		}
	
		property Mogre::Page^ ParentPage
		{
		public:
			Mogre::Page^ get();
		}
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void _notifyAttached( Mogre::Page^ parent );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		bool Prepare( Mogre::StreamSerialiser^ ser );
	
		void Load( );
	
		void Unload( );
	
		void Unprepare( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageContentCollection )
	
		//Protected Declarations
	protected public:
	
	};
	

}
