/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreLodStrategy.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreMesh.h"
#include "MogreMaterial.h"

namespace Mogre
{
	//################################################################
	//LodStrategy
	//################################################################
	
	public ref class LodStrategy : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		LodStrategy( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::Real BaseValue
		{
		public:
			Mogre::Real get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::Real TransformBias( Mogre::Real factor );
	
		Mogre::Real TransformUserValue( Mogre::Real userValue );
	
		Mogre::Real GetValue( Mogre::MovableObject^ movableObject, Mogre::Camera^ camera );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Mesh::Const_MeshLodUsageList^ meshLodUsageList );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Material::Const_LodValueList^ materialLodValueList );
	
		void Sort( Mogre::Mesh::MeshLodUsageList^ meshLodUsageList );
	
		bool IsSorted( Mogre::Mesh::Const_LodValueList^ values );
	
		void AssertSorted( Mogre::Mesh::Const_LodValueList^ values );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( LodStrategy )
	
		//Protected Declarations
	protected public:
	
	};
	

}
