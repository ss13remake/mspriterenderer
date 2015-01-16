/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderObjectListener.h"
#pragma managed(pop)

namespace Mogre
{
	//################################################################
	//RenderObjectListener
	//################################################################
	
	public ref class RenderObjectListener : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderObjectListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void _Init_CLRObject( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderObjectListener )
	
		//Protected Declarations
	protected public:
	
	};
	

}
