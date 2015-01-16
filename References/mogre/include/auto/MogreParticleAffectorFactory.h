/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreParticleAffectorFactory.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ParticleAffectorFactory
	//################################################################
	
	public ref class ParticleAffectorFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleAffectorFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::ParticleAffector^ CreateAffector( Mogre::ParticleSystem^ psys );
	
		void DestroyAffector( Mogre::ParticleAffector^ e );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleAffectorFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
