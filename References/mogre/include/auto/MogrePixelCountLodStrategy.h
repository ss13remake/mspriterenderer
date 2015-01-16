/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePixelCountLodStrategy.h"
#pragma managed(pop)
#include "MogreLodStrategy.h"
#include "MogrePrerequisites.h"
#include "MogreMesh.h"
#include "MogreMaterial.h"

namespace Mogre
{
	//################################################################
	//PixelCountLodStrategy
	//################################################################
	
	public ref class PixelCountLodStrategy : public LodStrategy
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PixelCountLodStrategy( CLRObject* obj ) : LodStrategy(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PixelCountLodStrategy( );
	
	
		property Mogre::Real BaseValue
		{
		public:
			Mogre::Real get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::Real TransformBias( Mogre::Real factor );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Mesh::Const_MeshLodUsageList^ meshLodUsageList );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Material::Const_LodValueList^ materialLodValueList );
	
		void Sort( Mogre::Mesh::MeshLodUsageList^ meshLodUsageList );
	
		bool IsSorted( Mogre::Mesh::Const_LodValueList^ values );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PixelCountLodStrategy )
	
		//Protected Declarations
	protected public:
	
	};
	

}
