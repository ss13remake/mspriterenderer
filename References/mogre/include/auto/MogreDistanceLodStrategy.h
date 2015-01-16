/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreDistanceLodStrategy.h"
#pragma managed(pop)
#include "MogreLodStrategy.h"
#include "MogrePrerequisites.h"
#include "MogreMesh.h"
#include "MogreMaterial.h"

namespace Mogre
{
	//################################################################
	//DistanceLodStrategy
	//################################################################
	
	public ref class DistanceLodStrategy : public LodStrategy
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DistanceLodStrategy( CLRObject* obj ) : LodStrategy(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DistanceLodStrategy( );
	
	
		property Mogre::Real BaseValue
		{
		public:
			Mogre::Real get();
		}
	
		property bool ReferenceViewEnabled
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		void _Init_CLRObject( );
	
		Mogre::Real TransformBias( Mogre::Real factor );
	
		Mogre::Real TransformUserValue( Mogre::Real userValue );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Mesh::Const_MeshLodUsageList^ meshLodUsageList );
	
		Mogre::ushort GetIndex( Mogre::Real value, Mogre::Material::Const_LodValueList^ materialLodValueList );
	
		void Sort( Mogre::Mesh::MeshLodUsageList^ meshLodUsageList );
	
		bool IsSorted( Mogre::Mesh::Const_LodValueList^ values );
	
		void SetReferenceView( Mogre::Real viewportWidth, Mogre::Real viewportHeight, Mogre::Radian fovY );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DistanceLodStrategy )
	
		//Protected Declarations
	protected public:
	
	};
	

}
