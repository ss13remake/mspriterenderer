/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageContent.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PageContent
	//################################################################
	
	public ref class PageContent : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageContent( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::PageManager^ Manager
		{
		public:
			Mogre::PageManager^ get();
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
	
		void _notifyAttached( Mogre::PageContentCollection^ parent );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		bool Prepare( Mogre::StreamSerialiser^ ser );
	
		void Load( );
	
		void Unload( );
	
		void Unprepare( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageContent )
	
		//Protected Declarations
	protected public:
	
	};
	

}
