/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreGrid2DPageStrategy.h"
#pragma managed(pop)
#include "MogrePageStrategy.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class Grid2DMode
	{
		G2D_X_Z = Ogre::G2D_X_Z,
		G2D_X_Y = Ogre::G2D_X_Y,
		G2D_Y_Z = Ogre::G2D_Y_Z
	};
	
	//################################################################
	//Grid2DPageStrategyData
	//################################################################
	
	public ref class Grid2DPageStrategyData : public PageStrategyData
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Grid2DPageStrategyData( CLRObject* obj ) : PageStrategyData(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Grid2DPageStrategyData( );
	
	
		static property Mogre::uint32 CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::int32 CellRangeMaxX
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 maxX);
		}
	
		property Mogre::int32 CellRangeMaxY
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 maxY);
		}
	
		property Mogre::int32 CellRangeMinX
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 minX);
		}
	
		property Mogre::int32 CellRangeMinY
		{
		public:
			Mogre::int32 get();
		public:
			void set(Mogre::int32 minY);
		}
	
		property Mogre::Real CellSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property Mogre::Real HoldRadius
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property Mogre::Real HoldRadiusInCells
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real LoadRadius
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property Mogre::Real LoadRadiusInCells
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Grid2DMode Mode
		{
		public:
			Mogre::Grid2DMode get();
		public:
			void set(Mogre::Grid2DMode mode);
		}
	
		void SetOrigin( Mogre::Vector3 worldOrigin );
	
		Mogre::Vector3 GetOrigin( Mogre::Vector3 worldOrigin );
	
		void SetCellRange( Mogre::int32 minX, Mogre::int32 minY, Mogre::int32 maxX, Mogre::int32 maxY );
	
		bool Load( Mogre::StreamSerialiser^ stream );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void ConvertWorldToGridSpace( Mogre::Vector3 world, Mogre::Vector2 grid );
	
		void ConvertGridToWorldSpace( Mogre::Vector2 grid, Mogre::Vector3 world );
	
		void GetMidPointGridSpace( Mogre::int32 x, Mogre::int32 y, Mogre::Vector2 mid );
	
		void GetBottomLeftGridSpace( Mogre::int32 x, Mogre::int32 y, Mogre::Vector2 bl );
	
		void GetCornersGridSpace( Mogre::int32 x, Mogre::int32 y, Mogre::Vector2* pFourPoints );
	
		void DetermineGridLocation( Mogre::Vector2 gridpos, [Out] Mogre::int32% x, [Out] Mogre::int32% y );
	
		Mogre::PageID CalculatePageID( Mogre::int32 x, Mogre::int32 y );
	
		void CalculateCell( Mogre::PageID inPageID, [Out] Mogre::int32% x, [Out] Mogre::int32% y );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Grid2DPageStrategyData )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//Grid2DPageStrategy
	//################################################################
	
	public ref class Grid2DPageStrategy : public PageStrategy
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Grid2DPageStrategy( CLRObject* obj ) : PageStrategy(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Grid2DPageStrategy( Mogre::PageManager^ manager );
	
	
		void NotifyCamera( Mogre::Camera^ cam, Mogre::PagedWorldSection^ section );
	
		Mogre::PageStrategyData^ CreateData( );
	
		void DestroyData( Mogre::PageStrategyData^ d );
	
		void UpdateDebugDisplay( Mogre::Page^ p, Mogre::SceneNode^ sn );
	
		Mogre::PageID GetPageID( Mogre::Vector3 worldPos, Mogre::PagedWorldSection^ section );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Grid2DPageStrategy )
	
		//Protected Declarations
	protected public:
	
	};
	

}
