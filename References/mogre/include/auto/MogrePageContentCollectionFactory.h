/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageContentCollectionFactory.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PageContentCollectionFactory
	//################################################################
	
	public ref class PageContentCollectionFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageContentCollectionFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::PageContentCollection^ CreateInstance( );
	
		void DestroyInstance( Mogre::PageContentCollection^ param1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageContentCollectionFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
