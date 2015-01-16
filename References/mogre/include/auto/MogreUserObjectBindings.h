/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreUserObjectBindings.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//UserObjectBindings
	//################################################################
	
	public ref class UserObjectBindings : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		UserObjectBindings( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		UserObjectBindings( );
	
	
		void _Init_CLRObject( );
	
		void EraseUserAny( String^ key );
	
		void Clear( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( UserObjectBindings )
	
		//Protected Declarations
	protected public:
	
	};
	

}
