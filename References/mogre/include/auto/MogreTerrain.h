/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrain.h"
#pragma managed(pop)
#include "MogreSceneManager.h"
#include "MogreWorkQueue.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//Terrain
	//################################################################
	
	public ref class Terrain : public Wrapper, public Mogre::SceneManager::IListener, public Mogre::WorkQueue::IRequestHandler, public Mogre::WorkQueue::IResponseHandler
	{
		//Nested Types
		public: ref class RealVector;
		public: ref class LayerInstanceList;
		public: ref class GpuBufferAllocator;
		public: ref class ImportData;
		public: ref class LayerInstance;
	
		public: enum class Alignment
		{
			ALIGN_X_Z = Ogre::Terrain::ALIGN_X_Z,
			ALIGN_X_Y = Ogre::Terrain::ALIGN_X_Y,
			ALIGN_Y_Z = Ogre::Terrain::ALIGN_Y_Z
		};
	
		public: enum class NeighbourIndex
		{
			NEIGHBOUR_EAST = Ogre::Terrain::NEIGHBOUR_EAST,
			NEIGHBOUR_NORTHEAST = Ogre::Terrain::NEIGHBOUR_NORTHEAST,
			NEIGHBOUR_NORTH = Ogre::Terrain::NEIGHBOUR_NORTH,
			NEIGHBOUR_NORTHWEST = Ogre::Terrain::NEIGHBOUR_NORTHWEST,
			NEIGHBOUR_WEST = Ogre::Terrain::NEIGHBOUR_WEST,
			NEIGHBOUR_SOUTHWEST = Ogre::Terrain::NEIGHBOUR_SOUTHWEST,
			NEIGHBOUR_SOUTH = Ogre::Terrain::NEIGHBOUR_SOUTH,
			NEIGHBOUR_SOUTHEAST = Ogre::Terrain::NEIGHBOUR_SOUTHEAST,
			NEIGHBOUR_COUNT = Ogre::Terrain::NEIGHBOUR_COUNT
		};
	
		public: enum class Space
		{
			WORLD_SPACE = Ogre::Terrain::WORLD_SPACE,
			LOCAL_SPACE = Ogre::Terrain::LOCAL_SPACE,
			TERRAIN_SPACE = Ogre::Terrain::TERRAIN_SPACE,
			POINT_SPACE = Ogre::Terrain::POINT_SPACE
		};
	
		//################################################################
		//GpuBufferAllocator
		//################################################################
	
		public: ref class GpuBufferAllocator : public Wrapper
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			GpuBufferAllocator( CLRObject* obj ) : Wrapper(obj)
			{
			}
	
	
			//Public Declarations
		public:
	
	
			void AllocateVertexBuffers( Mogre::Terrain^ forTerrain, size_t numVertices, Mogre::HardwareVertexBufferSharedPtr^ destPos, Mogre::HardwareVertexBufferSharedPtr^ destDelta );
	
			void FreeVertexBuffers( Mogre::HardwareVertexBufferSharedPtr^ posbuf, Mogre::HardwareVertexBufferSharedPtr^ deltabuf );
	
			Mogre::HardwareIndexBufferSharedPtr^ GetSharedIndexBuffer( Mogre::uint16 batchSize, Mogre::uint16 vdatasize, size_t vertexIncrement, Mogre::uint16 xoffset, Mogre::uint16 yoffset, Mogre::uint16 numSkirtRowsCols, Mogre::uint16 skirtRowColSkip );
	
			void FreeAllBuffers( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( Terrain::GpuBufferAllocator )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//ImportData
		//################################################################
	
		public: ref class ImportData
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			//Cached fields
			Mogre::Terrain::LayerInstanceList^ _layerList;
	
			//Internal Declarations
		public protected:
			ImportData( Ogre::Terrain::ImportData* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~ImportData()
			{
				this->!ImportData();
			}
			!ImportData()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::Terrain::ImportData* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			ImportData( );
			ImportData( Mogre::Terrain::ImportData^ rhs );
	
	
			property Mogre::Terrain::Alignment terrainAlign
			{
			public:
				Mogre::Terrain::Alignment get();
			public:
				void set(Mogre::Terrain::Alignment value);
			}
	
			property Mogre::uint16 terrainSize
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			property Mogre::uint16 maxBatchSize
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			property Mogre::uint16 minBatchSize
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			property Mogre::Vector3 pos
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			property Mogre::Real worldSize
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Image^ inputImage
			{
			public:
				Mogre::Image^ get();
			public:
				void set(Mogre::Image^ value);
			}
	
			property float constantHeight
			{
			public:
				float get();
			public:
				void set(float value);
			}
	
			property bool deleteInputData
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property Mogre::Real inputScale
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real inputBias
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::TerrainLayerDeclaration^ layerDeclaration
			{
			public:
				Mogre::TerrainLayerDeclaration^ get();
			public:
				void set(Mogre::TerrainLayerDeclaration^ value);
			}
	
			property Mogre::Terrain::LayerInstanceList^ layerList
			{
			public:
				Mogre::Terrain::LayerInstanceList^ get();
			}
	
			void CopyTo(ImportData^ dest)
			{
				if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
				if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
				*(dest->_native) = *_native;
			}
	
			void Destroy( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( Terrain::ImportData )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//LayerInstance
		//################################################################
	
		public: ref class LayerInstance
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			//Cached fields
			Mogre::StringVector^ _textureNames;
	
			//Internal Declarations
		public protected:
			LayerInstance( Ogre::Terrain::LayerInstance* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~LayerInstance()
			{
				this->!LayerInstance();
			}
			!LayerInstance()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::Terrain::LayerInstance* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			LayerInstance( );
	
	
			property Mogre::Real worldSize
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::StringVector^ textureNames
			{
			public:
				Mogre::StringVector^ get();
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( Terrain::LayerInstance )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Real
		#define STLDECL_NATIVETYPE Ogre::Real
		public: INC_DECLARE_STLVECTOR( RealVector, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::Terrain::LayerInstance^
		#define STLDECL_NATIVETYPE Ogre::Terrain::LayerInstance
		public: INC_DECLARE_STLVECTOR( LayerInstanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Terrain( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::SceneManager::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
	
		virtual Ogre::WorkQueue::RequestHandler* _IRequestHandler_GetNativePtr() = IRequestHandler::_GetNativePtr;
	
		virtual Ogre::WorkQueue::ResponseHandler* _IResponseHandler_GetNativePtr() = IResponseHandler::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Terrain( Mogre::SceneManager^ sm );
	
	
		static property Mogre::uint32 TERRAIN_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAIN_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint16 TERRAIN_MAX_BATCH_SIZE
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint32 TERRAINLAYERDECLARATION_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAINLAYERDECLARATION_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint32 TERRAINLAYERSAMPLER_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAINLAYERSAMPLER_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint32 TERRAINLAYERSAMPLERELEMENT_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAINLAYERSAMPLERELEMENT_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint32 TERRAINLAYERINSTANCE_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAINLAYERINSTANCE_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint32 TERRAINDERIVEDDATA_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 TERRAINDERIVEDDATA_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		static property size_t LOD_MORPH_CUSTOM_PARAM
		{
		public:
			size_t get();
		}
	
		static property Mogre::uint8 DERIVED_DATA_DELTAS
		{
		public:
			Mogre::uint8 get();
		}
	
		static property Mogre::uint8 DERIVED_DATA_NORMALS
		{
		public:
			Mogre::uint8 get();
		}
	
		static property Mogre::uint8 DERIVED_DATA_LIGHTMAP
		{
		public:
			Mogre::uint8 get();
		}
	
		static property Mogre::uint8 DERIVED_DATA_ALL
		{
		public:
			Mogre::uint8 get();
		}
	
		static property Mogre::uint16 WORKQUEUE_DERIVED_DATA_REQUEST
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::AxisAlignedBox^ AABB
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::uint8 BlendTextureCount
		{
		public:
			Mogre::uint8 get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint16 CompositeMapSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property const float* DeltaData
		{
		public:
			const float* get();
		}
	
		property bool GlobalColourMapEnabled
		{
		public:
			bool get();
		}
	
		property Mogre::uint16 GlobalColourMapSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property float* HeightData
		{
		public:
			float* get();
		}
	
		property bool IsDerivedDataUpdateInProgress
		{
		public:
			bool get();
		}
	
		property bool IsHeightDataModified
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsModified
		{
		public:
			bool get();
		}
	
		property Mogre::uint16 LayerBlendMapSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::uint8 LayerCount
		{
		public:
			Mogre::uint8 get();
		}
	
		property Mogre::TerrainLayerDeclaration^ LayerDeclaration
		{
		public:
			Mogre::TerrainLayerDeclaration^ get();
		}
	
		property Mogre::uint16 LightmapSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		}
	
		property Mogre::uint16 MaxBatchSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::Real MaxHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint8 MaxLayers
		{
		public:
			Mogre::uint8 get();
		}
	
		property Mogre::uint16 MinBatchSize
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::Real MinHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint16 NumLodLevels
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::uint16 NumLodLevelsPerLeaf
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::TerrainQuadTreeNode^ QuadTree
		{
		public:
			Mogre::TerrainQuadTreeNode^ get();
		}
	
		property Mogre::uint32 QueryFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 grp);
		}
	
		property String^ ResourceGroup
		{
		public:
			String^ get();
		public:
			void set(String^ resGroup);
		}
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		property Mogre::uint16 Size
		{
		public:
			Mogre::uint16 get();
		}
	
		property Mogre::Real SkirtSize
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint32 VisibilityFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		property Mogre::AxisAlignedBox^ WorldAABB
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real WorldSize
		{
		public:
			Mogre::Real get();
		}
	
		void SetGpuBufferAllocator( Mogre::Terrain::GpuBufferAllocator^ alloc );
	
		Mogre::Terrain::GpuBufferAllocator^ GetGpuBufferAllocator( );
	
		void ConvertPosition( Mogre::Terrain::Space inSpace, Mogre::Vector3 inPos, Mogre::Terrain::Space outSpace, Mogre::Vector3 outPos );
	
		Mogre::Vector3 ConvertPosition( Mogre::Terrain::Space inSpace, Mogre::Vector3 inPos, Mogre::Terrain::Space outSpace );
	
		void ConvertDirection( Mogre::Terrain::Space inSpace, Mogre::Vector3 inDir, Mogre::Terrain::Space outSpace, Mogre::Vector3 outDir );
	
		Mogre::Vector3 ConvertDirection( Mogre::Terrain::Space inSpace, Mogre::Vector3 inDir, Mogre::Terrain::Space outSpace );
	
		String^ _getDerivedResourceGroup( );
	
		void Save( String^ filename );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		bool Prepare( String^ filename );
	
		bool Prepare( Mogre::StreamSerialiser^ stream );
	
		bool Prepare( Mogre::Terrain::ImportData^ importData );
	
		void Load( String^ filename );
	
		void Load( Mogre::StreamSerialiser^ stream );
	
		void Load( );
	
		void Unload( );
	
		void Unprepare( );
	
		float* GetHeightData( long x, long y );
	
		float GetHeightAtPoint( long x, long y );
	
		void SetHeightAtPoint( long x, long y, float h );
	
		float GetHeightAtTerrainPosition( Mogre::Real x, Mogre::Real y );
	
		float GetHeightAtWorldPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		float GetHeightAtWorldPosition( Mogre::Vector3 pos );
	
		const float* GetDeltaData( long x, long y );
	
		void GetPoint( long x, long y, Mogre::Vector3* outpos );
	
		void GetPointFromSelfOrNeighbour( long x, long y, Mogre::Vector3* outpos );
	
		void GetPoint( long x, long y, float height, Mogre::Vector3* outpos );
	
		void GetTerrainVector( Mogre::Vector3 inVec, Mogre::Vector3* outVec );
	
		void GetTerrainVectorAlign( Mogre::Vector3 inVec, Mogre::Terrain::Alignment align, Mogre::Vector3* outVec );
	
		void GetTerrainVector( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Vector3* outVec );
	
		void GetTerrainVectorAlign( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Terrain::Alignment align, Mogre::Vector3* outVec );
	
		void GetVector( Mogre::Vector3 inVec, Mogre::Vector3* outVec );
	
		void GetVectorAlign( Mogre::Vector3 inVec, Mogre::Terrain::Alignment align, Mogre::Vector3* outVec );
	
		void GetVector( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Vector3* outVec );
	
		void GetVectorAlign( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Terrain::Alignment align, Mogre::Vector3* outVec );
	
		void GetPosition( Mogre::Vector3 TSpos, Mogre::Vector3* outWSpos );
	
		void GetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Vector3* outWSpos );
	
		void GetTerrainPosition( Mogre::Vector3 WSpos, Mogre::Vector3* outTSpos );
	
		void GetTerrainPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Vector3* outTSpos );
	
		void GetPositionAlign( Mogre::Vector3 TSpos, Mogre::Terrain::Alignment align, Mogre::Vector3* outWSpos );
	
		void GetPositionAlign( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Terrain::Alignment align, Mogre::Vector3* outWSpos );
	
		void GetTerrainPositionAlign( Mogre::Vector3 WSpos, Mogre::Terrain::Alignment align, Mogre::Vector3* outTSpos );
	
		void GetTerrainPositionAlign( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Terrain::Alignment align, Mogre::Vector3* outTSpos );
	
		Mogre::Terrain::Alignment GetAlignment( );
	
		void AddLayer( Mogre::Real worldSize, Mogre::Const_StringVector^ textureNames );
		void AddLayer( Mogre::Real worldSize );
		void AddLayer( );
	
		void AddLayer( Mogre::uint8 index, Mogre::Real worldSize, Mogre::Const_StringVector^ textureNames );
		void AddLayer( Mogre::uint8 index, Mogre::Real worldSize );
		void AddLayer( Mogre::uint8 index );
	
		void RemoveLayer( Mogre::uint8 index );
	
		void ReplaceLayer( Mogre::uint8 index, bool keepBlends, Mogre::Real worldSize, Mogre::Const_StringVector^ textureNames );
		void ReplaceLayer( Mogre::uint8 index, bool keepBlends, Mogre::Real worldSize );
		void ReplaceLayer( Mogre::uint8 index, bool keepBlends );
	
		Mogre::Real GetLayerWorldSize( Mogre::uint8 index );
	
		void SetLayerWorldSize( Mogre::uint8 index, Mogre::Real size );
	
		Mogre::Real GetLayerUVMultiplier( Mogre::uint8 index );
	
		String^ GetLayerTextureName( Mogre::uint8 layerIndex, Mogre::uint8 samplerIndex );
	
		void SetLayerTextureName( Mogre::uint8 layerIndex, Mogre::uint8 samplerIndex, String^ textureName );
	
		Mogre::TexturePtr^ GetLightmap( );
	
		Mogre::TexturePtr^ GetCompositeMap( );
	
		void SetPosition( Mogre::Vector3 pos );
	
		Mogre::SceneNode^ _getRootSceneNode( );
	
		void Dirty( );
	
		void DirtyRect( Mogre::Rect rect );
	
		void _dirtyCompositeMapRect( Mogre::Rect rect );
	
		void DirtyLightmapRect( Mogre::Rect rect );
	
		void DirtyLightmap( );
	
		void Update( bool synchronous );
		void Update( );
	
		void UpdateGeometry( );
	
		void UpdateDerivedData( bool synchronous, Mogre::uint8 typeMask );
		void UpdateDerivedData( bool synchronous );
		void UpdateDerivedData( );
	
		void UpdateCompositeMap( );
	
		void UpdateCompositeMapWithDelay( Mogre::Real delay );
		void UpdateCompositeMapWithDelay( );
	
		Mogre::Rect CalculateHeightDeltas( Mogre::Rect rect );
	
		void FinaliseHeightDeltas( Mogre::Rect rect, bool cpuData );
	
		void FinaliseNormals( Mogre::Rect rect, Mogre::PixelBox* normalsBox );
	
		void FinaliseLightmap( Mogre::Rect rect, Mogre::PixelBox* lightmapBox );
	
		Mogre::uint16 GetResolutionAtLod( Mogre::uint16 lodLevel );
	
		Pair<bool, Mogre::Vector3> RayIntersects( Mogre::Ray ray, bool cascadeToNeighbours, Mogre::Real distanceLimit );
		Pair<bool, Mogre::Vector3> RayIntersects( Mogre::Ray ray, bool cascadeToNeighbours );
		Pair<bool, Mogre::Vector3> RayIntersects( Mogre::Ray ray );
	
		Mogre::MaterialPtr^ GetMaterial( );
	
		Mogre::MaterialPtr^ _getMaterial( );
	
		Mogre::MaterialPtr^ GetCompositeMapMaterial( );
	
		Mogre::MaterialPtr^ _getCompositeMapMaterial( );
	
		virtual void SceneManagerDestroyed( Mogre::SceneManager^ source );
	
		void AddQueryFlags( Mogre::uint32 flags );
	
		void RemoveQueryFlags( Mogre::uint32 flags );
	
		Mogre::TerrainLayerBlendMap^ GetLayerBlendMap( Mogre::uint8 layerIndex );
	
		Mogre::uint8 GetBlendTextureIndex( Mogre::uint8 layerIndex );
	
		Mogre::uint8 GetBlendTextureCount( Mogre::uint8 numLayers );
	
		String^ GetBlendTextureName( Mogre::uint8 textureIndex );
	
		void SetGlobalColourMapEnabled( bool enabled, Mogre::uint16 size );
		void SetGlobalColourMapEnabled( bool enabled );
	
		Mogre::TexturePtr^ GetGlobalColourMap( );
	
		void FreeTemporaryResources( );
	
		Mogre::TexturePtr^ GetLayerBlendTexture( Mogre::uint8 index );
	
		Pair<Mogre::uint8, Mogre::uint8> GetLayerBlendTextureIndex( Mogre::uint8 layerIndex );
	
		void _setMorphRequired( bool morph );
	
		bool _getMorphRequired( );
	
		void _setNormalMapRequired( bool normalMap );
	
		void _setLightMapRequired( bool lightMap, bool shadowsOnly );
		void _setLightMapRequired( bool lightMap );
	
		void _setCompositeMapRequired( bool compositeMap );
	
		Mogre::uint16 GetLODLevelWhenVertexEliminated( long x, long y );
	
		Mogre::uint16 GetLODLevelWhenVertexEliminated( long rowOrColulmn );
	
		Mogre::TexturePtr^ GetTerrainNormalMap( );
	
		Mogre::Terrain^ GetNeighbour( Mogre::Terrain::NeighbourIndex index );
	
		void SetNeighbour( Mogre::Terrain::NeighbourIndex index, Mogre::Terrain^ neighbour, bool recalculate, bool notifyOther );
		void SetNeighbour( Mogre::Terrain::NeighbourIndex index, Mogre::Terrain^ neighbour, bool recalculate );
		void SetNeighbour( Mogre::Terrain::NeighbourIndex index, Mogre::Terrain^ neighbour );
	
		void NotifyNeighbours( );
	
		void NeighbourModified( Mogre::Terrain::NeighbourIndex index, Mogre::Rect edgerect, Mogre::Rect shadowrect );
	
		Mogre::Terrain^ RaySelectNeighbour( Mogre::Ray ray, Mogre::Real distanceLimit );
		Mogre::Terrain^ RaySelectNeighbour( Mogre::Ray ray );
	
		void _dumpTextures( String^ prefix, String^ suffix );
	
		static size_t _getNumIndexesForBatchSize( Mogre::uint16 batchSize );
	
		static void _populateIndexBuffer( [Out] Mogre::uint16% pIndexes, Mogre::uint16 batchSize, Mogre::uint16 vdatasize, size_t vertexIncrement, Mogre::uint16 xoffset, Mogre::uint16 yoffset, Mogre::uint16 numSkirtRowsCols, Mogre::uint16 skirtRowColSkip );
	
		static Mogre::uint16 _calcSkirtVertexIndex( Mogre::uint16 mainIndex, Mogre::uint16 vdatasize, bool isCol, Mogre::uint16 numSkirtRowsCols, Mogre::uint16 skirtRowColSkip );
	
		static Mogre::Terrain::NeighbourIndex GetOppositeNeighbour( Mogre::Terrain::NeighbourIndex index );
	
		static Mogre::Terrain::NeighbourIndex GetNeighbourIndex( long offsetx, long offsety );
	
		static void ConvertWorldToTerrainAxes( Mogre::Terrain::Alignment align, Mogre::Vector3 worldVec, Mogre::Vector3* terrainVec );
	
		static void ConvertTerrainToWorldAxes( Mogre::Terrain::Alignment align, Mogre::Vector3 terrainVec, Mogre::Vector3* worldVec );
	
		static void WriteLayerDeclaration( Mogre::TerrainLayerDeclaration^ decl, Mogre::StreamSerialiser^ ser );
	
		static bool ReadLayerDeclaration( Mogre::StreamSerialiser^ ser, Mogre::TerrainLayerDeclaration^ targetdecl );
	
		static void WriteLayerInstanceList( Mogre::Terrain::Const_LayerInstanceList^ lst, Mogre::StreamSerialiser^ ser );
	
		static bool ReadLayerInstanceList( Mogre::StreamSerialiser^ ser, size_t numSamplers, Mogre::Terrain::LayerInstanceList^ targetlst );
	
		//------------------------------------------------------------
		// Implementation for IListener
		//------------------------------------------------------------
	
	public:
		virtual void PreFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
	
	public:
		virtual void PostFindVisibleObjects( Mogre::SceneManager^ source, Mogre::SceneManager::IlluminationRenderStage irs, Mogre::Viewport^ v );
	
	public:
		virtual void ShadowTexturesUpdated( size_t numberOfShadowTextures );
	
	public:
		virtual void ShadowTextureCasterPreViewProj( Mogre::Light^ light, Mogre::Camera^ camera, size_t iteration );
	
	public:
		virtual void ShadowTextureReceiverPreViewProj( Mogre::Light^ light, Mogre::Frustum^ frustum );
	
	public:
		virtual bool SortLightsAffectingFrustum( Mogre::LightList^ lightList );
	
		//------------------------------------------------------------
		// Implementation for IRequestHandler
		//------------------------------------------------------------
	
	public:
		virtual bool CanHandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ );
	
	public:
		virtual Mogre::WorkQueue::Response^ HandleRequest( Mogre::WorkQueue::Request^ req, Mogre::WorkQueue^ srcQ );
	
		//------------------------------------------------------------
		// Implementation for IResponseHandler
		//------------------------------------------------------------
	
	public:
		virtual bool CanHandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ );
	
	public:
		virtual void HandleResponse( Mogre::WorkQueue::Response^ res, Mogre::WorkQueue^ srcQ );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Terrain )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TerrainGlobalOptions
	//################################################################
	
	public ref class TerrainGlobalOptions : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainGlobalOptions( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TerrainGlobalOptions( );
	
	
		property bool CastsDynamicShadows
		{
		public:
			bool get();
		public:
			void set(bool s);
		}
	
		property Mogre::ColourValue CompositeMapAmbient
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue c);
		}
	
		property Mogre::ColourValue CompositeMapDiffuse
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue c);
		}
	
		property Mogre::Real CompositeMapDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real c);
		}
	
		property Mogre::uint16 CompositeMapSize
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 sz);
		}
	
		property Mogre::uint16 DefaultGlobalColourMapSize
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 sz);
		}
	
		property Mogre::Real DefaultLayerTextureWorldSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real sz);
		}
	
		property String^ DefaultResourceGroup
		{
		public:
			String^ get();
		public:
			void set(String^ grp);
		}
	
		property Mogre::uint16 LayerBlendMapSize
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 sz);
		}
	
		property Mogre::Vector3 LightMapDirection
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 v);
		}
	
		property Mogre::uint16 LightMapSize
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 sz);
		}
	
		property Mogre::Real MaxPixelError
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real pixerr);
		}
	
		property Mogre::uint32 QueryFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 grp);
		}
	
		property Mogre::Real SkirtSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real skirtSz);
		}
	
		property bool UseRayBoxDistanceCalculation
		{
		public:
			bool get();
		public:
			void set(bool rb);
		}
	
		property Mogre::uint32 VisibilityFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		void AddQueryFlags( Mogre::uint32 flags );
	
		void RemoveQueryFlags( Mogre::uint32 flags );
	
		Mogre::TerrainMaterialGeneratorPtr^ GetDefaultMaterialGenerator( );
	
		void SetDefaultMaterialGenerator( Mogre::TerrainMaterialGeneratorPtr^ gen );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainGlobalOptions )
	
		//Protected Declarations
	protected public:
	
	};
	

}
