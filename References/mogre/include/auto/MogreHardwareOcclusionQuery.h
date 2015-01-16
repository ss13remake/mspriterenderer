/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreHardwareOcclusionQuery.h"
#pragma managed(pop)

namespace Mogre
{
	//################################################################
	//HardwareOcclusionQuery
	//################################################################
	
	public ref class HardwareOcclusionQuery : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareOcclusionQuery( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsStillOutstanding
		{
		public:
			bool get();
		}
	
		property unsigned int LastQuerysPixelcount
		{
		public:
			unsigned int get();
		}
	
		void _Init_CLRObject( );
	
		void BeginOcclusionQuery( );
	
		void EndOcclusionQuery( );
	
		bool PullOcclusionQuery( [Out] unsigned int% NumOfFragments );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareOcclusionQuery )
	
		//Protected Declarations
	protected public:
	
	};
	

}
