/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainPaging.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//TerrainPaging
	//################################################################
	
	public ref class TerrainPaging
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainPaging( Ogre::TerrainPaging* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TerrainPaging()
		{
			this->!TerrainPaging();
		}
		!TerrainPaging()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TerrainPaging* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TerrainPaging( Mogre::PageManager^ pageMgr );
	
	
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius, Mogre::int32 minX, Mogre::int32 minY, Mogre::int32 maxX, Mogre::int32 maxY, String^ sectionName );
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius, Mogre::int32 minX, Mogre::int32 minY, Mogre::int32 maxX, Mogre::int32 maxY );
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius, Mogre::int32 minX, Mogre::int32 minY, Mogre::int32 maxX );
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius, Mogre::int32 minX, Mogre::int32 minY );
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius, Mogre::int32 minX );
		Mogre::TerrainPagedWorldSection^ CreateWorldSection( Mogre::PagedWorld^ world, Mogre::TerrainGroup^ terrainGroup, Mogre::Real loadRadius, Mogre::Real holdRadius );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainPaging )
	
		//Protected Declarations
	protected public:
	
	};
	

}
