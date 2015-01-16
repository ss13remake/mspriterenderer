/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreSerializer.h"
#pragma managed(pop)

namespace Mogre
{
	//################################################################
	//Serializer
	//################################################################
	
	public ref class Serializer : public Wrapper
	{
		//Nested Types
	
		public: enum class Endian
		{
			ENDIAN_NATIVE = Ogre::Serializer::ENDIAN_NATIVE,
			ENDIAN_BIG = Ogre::Serializer::ENDIAN_BIG,
			ENDIAN_LITTLE = Ogre::Serializer::ENDIAN_LITTLE
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Serializer( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Serializer( );
	
	
		void _Init_CLRObject( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Serializer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
