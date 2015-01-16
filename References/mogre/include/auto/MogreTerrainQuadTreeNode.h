/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainQuadTreeNode.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//TerrainQuadTreeNode
	//################################################################
	
	public ref class TerrainQuadTreeNode : public Wrapper
	{
		//Nested Types
		public: ref class LodLevelList;
		public: ref class LodLevel;
	
		//################################################################
		//LodLevel
		//################################################################
	
		public: ref class LodLevel
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			LodLevel( Ogre::TerrainQuadTreeNode::LodLevel* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~LodLevel()
			{
				this->!LodLevel();
			}
			!LodLevel()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::TerrainQuadTreeNode::LodLevel* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			LodLevel( );
	
	
			property Mogre::uint16 batchSize
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			property Mogre::IndexData^ gpuIndexData
			{
			public:
				Mogre::IndexData^ get();
			public:
				void set(Mogre::IndexData^ value);
			}
	
			property Mogre::Real maxHeightDelta
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real calcMaxHeightDelta
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real lastTransitionDist
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real lastCFactor
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainQuadTreeNode::LodLevel )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::TerrainQuadTreeNode::LodLevel^
		#define STLDECL_NATIVETYPE Ogre::TerrainQuadTreeNode::LodLevel*
		public: INC_DECLARE_STLVECTOR( LodLevelList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainQuadTreeNode( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TerrainQuadTreeNode( Mogre::Terrain^ terrain, Mogre::TerrainQuadTreeNode^ parent, Mogre::uint16 xoff, Mogre::uint16 yoff, Mogre::uint16 size, Mogre::uint16 lod, Mogre::uint16 depth, Mogre::uint16 quadrant );
	
	
		static property unsigned short POSITION_BUFFER
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short value);
		}
	
		static property unsigned short DELTA_BUFFER
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short value);
		}
	
		property Mogre::AxisAlignedBox^ AABB
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::uint16 BaseLod
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property int CurrentLod
		{
		public:
			int get();
		public:
			void set(int lod);
		}
	
		property bool IsLeaf
		{
		public:
			bool get();
		}
	
		property bool IsRenderedAtCurrentLod
		{
		public:
			bool get();
		}
	
		property bool IsSelfOrChildRenderedAtCurrentLod
		{
		public:
			bool get();
		}
	
		property Mogre::Vector3 LocalCentre
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::uint16 LodCount
		{
		public:
			Mogre::uint16 get();
		}
	
		property float LodTransition
		{
		public:
			float get();
		public:
			void set(float t);
		}
	
		property Mogre::Real MaxHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real MinHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::TerrainQuadTreeNode^ Parent
		{
		public:
			Mogre::TerrainQuadTreeNode^ get();
		}
	
		property Mogre::Terrain^ Terrain
		{
		public:
			Mogre::Terrain^ get();
		}
	
		property Mogre::uint16 XOffset
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::uint16 YOffset
		{
		public:
			Mogre::uint16 get();
		}
	
		Mogre::TerrainQuadTreeNode^ GetChild( unsigned short child );
	
		void Prepare( );
	
		void Prepare( Mogre::StreamSerialiser^ stream );
	
		void Load( );
	
		void Unload( );
	
		void Unprepare( );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		Mogre::TerrainQuadTreeNode::LodLevel^ GetLodLevel( Mogre::uint16 lod );
	
		void PreDeltaCalculation( Mogre::Rect rect );
	
		void NotifyDelta( Mogre::uint16 x, Mogre::uint16 y, Mogre::uint16 lod, Mogre::Real delta );
	
		void PostDeltaCalculation( Mogre::Rect rect );
	
		void FinaliseDeltaValues( Mogre::Rect rect );
	
		void AssignVertexData( Mogre::uint16 treeDepthStart, Mogre::uint16 treeDepthEnd, Mogre::uint16 resolution, Mogre::uint sz );
	
		void UseAncestorVertexData( Mogre::TerrainQuadTreeNode^ owner, Mogre::uint16 treeDepthEnd, Mogre::uint16 resolution );
	
		void UpdateVertexData( bool positions, bool deltas, Mogre::Rect rect, bool cpuData );
	
		void MergeIntoBounds( long x, long y, Mogre::Vector3 pos );
	
		void ResetBounds( Mogre::Rect rect );
	
		bool RectIntersectsNode( Mogre::Rect rect );
	
		bool RectContainsNode( Mogre::Rect rect );
	
		bool PointIntersectsNode( long x, long y );
	
		bool CalculateCurrentLod( Mogre::Camera^ cam, Mogre::Real cFactor );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainQuadTreeNode )
	
		//Protected Declarations
	protected public:
	
	};
	

}
