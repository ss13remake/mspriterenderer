/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainPagedWorldSection.h"
#pragma managed(pop)
#include "MogrePagedWorldSection.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//TerrainPagedWorldSection
	//################################################################
	
	public ref class TerrainPagedWorldSection : public PagedWorldSection
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainPagedWorldSection( CLRObject* obj ) : PagedWorldSection(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TerrainPagedWorldSection( String^ name, Mogre::PagedWorld^ parent, Mogre::SceneManager^ sm );
	
	
		property Mogre::Grid2DPageStrategy^ GridStrategy
		{
		public:
			Mogre::Grid2DPageStrategy^ get();
		}
	
		property Mogre::Grid2DPageStrategyData^ GridStrategyData
		{
		public:
			Mogre::Grid2DPageStrategyData^ get();
		}
	
		property Mogre::Real HoldRadius
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property Mogre::Real LoadRadius
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property Mogre::int32 PageRangeMaxX
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 maxX);
		}
	
		property Mogre::int32 PageRangeMaxY
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 maxY);
		}
	
		property Mogre::int32 PageRangeMinX
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 minX);
		}
	
		property Mogre::int32 PageRangeMinY
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 minY);
		}
	
		property Mogre::TerrainGroup^ TerrainGroup
		{
		public:
			Mogre::TerrainGroup^ get();
		}
	
		void Init( Mogre::TerrainGroup^ grp );
	
		void SetPageRange( Mogre::int32 minX, Mogre::int32 minY, Mogre::int32 maxX, Mogre::int32 maxY );
	
		void LoadPage( Mogre::PageID pageID, bool forceSynchronous );
		void LoadPage( Mogre::PageID pageID );
	
		void UnloadPage( Mogre::PageID pageID, bool forceSynchronous );
		void UnloadPage( Mogre::PageID pageID );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainPagedWorldSection )
	
		//Protected Declarations
	protected public:
	
	};
	

}
