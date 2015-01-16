/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageContentFactory.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PageContentFactory
	//################################################################
	
	public ref class PageContentFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageContentFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::PageContent^ CreateInstance( );
	
		void DestroyInstance( Mogre::PageContent^ param1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageContentFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
