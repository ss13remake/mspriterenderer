/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainGroup.h"
#pragma managed(pop)
#include "MogreWorkQueue.h"
#include "MogrePrerequisites.h"
#include "MogreTerrain.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//TerrainGroup
	//################################################################
	
	public ref class TerrainGroup : public Wrapper, public Mogre::WorkQueue::IRequestHandler, public Mogre::WorkQueue::IResponseHandler
	{
		//Nested Types
		public: ref class TerrainList;
		public: ref class TerrainSlotMap;
		public: ref class RayResult;
		public: ref class TerrainSlot;
		public: ref class TerrainSlotDefinition;
	
		//################################################################
		//RayResult
		//################################################################
	
		public: ref class RayResult
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			RayResult( Ogre::TerrainGroup::RayResult* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~RayResult()
			{
				this->!RayResult();
			}
			!RayResult()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::TerrainGroup::RayResult* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			RayResult( bool _hit, Mogre::Terrain^ _terrain, Mogre::Vector3 _pos );
	
	
			property bool hit
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property Mogre::Terrain^ terrain
			{
			public:
				Mogre::Terrain^ get();
			public:
				void set(Mogre::Terrain^ value);
			}
	
			property Mogre::Vector3 position
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainGroup::RayResult )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//TerrainSlot
		//################################################################
	
		public: ref class TerrainSlot
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			TerrainSlot( Ogre::TerrainGroup::TerrainSlot* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~TerrainSlot()
			{
				this->!TerrainSlot();
			}
			!TerrainSlot()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::TerrainGroup::TerrainSlot* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			TerrainSlot( long _x, long _y );
	
	
			property long x
			{
			public:
				long get();
			public:
				void set(long value);
			}
	
			property long y
			{
			public:
				long get();
			public:
				void set(long value);
			}
	
			property Mogre::TerrainGroup::TerrainSlotDefinition^ def
			{
			public:
				Mogre::TerrainGroup::TerrainSlotDefinition^ get();
			public:
				void set(Mogre::TerrainGroup::TerrainSlotDefinition^ value);
			}
	
			property Mogre::Terrain^ instance
			{
			public:
				Mogre::Terrain^ get();
			public:
				void set(Mogre::Terrain^ value);
			}
	
			void FreeInstance( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainGroup::TerrainSlot )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//TerrainSlotDefinition
		//################################################################
	
		public: ref class TerrainSlotDefinition
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			TerrainSlotDefinition( Ogre::TerrainGroup::TerrainSlotDefinition* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~TerrainSlotDefinition()
			{
				this->!TerrainSlotDefinition();
			}
			!TerrainSlotDefinition()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::TerrainGroup::TerrainSlotDefinition* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			TerrainSlotDefinition( );
	
	
			property String^ filename
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property Mogre::Terrain::ImportData^ importData
			{
			public:
				Mogre::Terrain::ImportData^ get();
			public:
				void set(Mogre::Terrain::ImportData^ value);
			}
	
			void UseImportData( );
	
			void UseFilename( );
	
			void FreeImportData( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainGroup::TerrainSlotDefinition )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Terrain^
		#define STLDECL_NATIVETYPE Ogre::Terrain*
		public: INC_DECLARE_STLVECTOR( TerrainList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY Mogre::uint32
		#define STLDECL_MANAGEDVALUE Mogre::TerrainGroup::TerrainSlot^
		#define STLDECL_NATIVEKEY Ogre::uint32
		#define STLDECL_NATIVEVALUE Ogre::TerrainGroup::TerrainSlot*
		public: INC_DECLARE_STLMAP( TerrainSlotMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( TerrainIterator, Ogre::TerrainGroup::TerrainIterator, Mogre::TerrainGroup::TerrainSlotMap, Mogre::TerrainGroup::TerrainSlot^, Ogre::TerrainGroup::TerrainSlot*, Mogre::uint32, Ogre::uint32 )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainGroup( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::WorkQueue::RequestHandler* _IRequestHandler_GetNativePtr() = IRequestHandler::_GetNativePtr;
	
		virtual Ogre::WorkQueue::ResponseHandler* _IResponseHandler_GetNativePtr() = IResponseHandler::_GetNativePtr;
	
	
		//Public Declarations
	public:
		TerrainGroup( Mogre::SceneManager^ sm, Mogre::Terrain::Alignment align, Mogre::uint16 terrainSize, Mogre::Real terrainWorldSize );
		TerrainGroup( Mogre::SceneManager^ sm );
	
	
		static property Mogre::uint16 WORKQUEUE_LOAD_REQUEST
		{
		public:
			Mogre::uint16 get();
		}
	
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
	
		property Mogre::Terrain::Alignment Alignment
		{
		public:
			Mogre::Terrain::Alignment get();
		}
	
		property Mogre::Terrain::ImportData^ DefaultImportSettings
		{
		public:
			Mogre::Terrain::ImportData^ get();
		}
	
		property String^ FilenameExtension
		{
		public:
			String^ get();
		public:
			void set(String^ extension);
		}
	
		property String^ FilenamePrefix
		{
		public:
			String^ get();
		public:
			void set(String^ prefix);
		}
	
		property bool IsDerivedDataUpdateInProgress
		{
		public:
			bool get();
		}
	
		property Mogre::Vector3 Origin
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 pos);
		}
	
		property String^ ResourceGroup
		{
		public:
			String^ get();
		public:
			void set(String^ grp);
		}
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		property Mogre::Real TerrainWorldSize
		{
		public:
			Mogre::Real get();
		}
	
		void SetFilenameConvention( String^ prefix, String^ extension );
	
		void DefineTerrain( long x, long y );
	
		void DefineTerrain( long x, long y, float constantHeight );
	
		void DefineTerrain( long x, long y, Mogre::Terrain::ImportData^ importData );
	
		void DefineTerrain( long x, long y, Mogre::Image^ img, Mogre::Terrain::Const_LayerInstanceList^ layers );
		void DefineTerrain( long x, long y, Mogre::Image^ img );
	
		void DefineTerrain( long x, long y, const float* pFloat, Mogre::Terrain::Const_LayerInstanceList^ layers );
		void DefineTerrain( long x, long y, const float* pFloat );
	
		void DefineTerrain( long x, long y, String^ filename );
	
		void LoadAllTerrains( bool synchronous );
		void LoadAllTerrains( );
	
		void LoadTerrain( long x, long y, bool synchronous );
		void LoadTerrain( long x, long y );
	
		void UnloadTerrain( long x, long y );
	
		void RemoveTerrain( long x, long y );
	
		void RemoveAllTerrains( );
	
		void SaveAllTerrains( bool onlyIfModified, bool replaceManualFilenames );
		void SaveAllTerrains( bool onlyIfModified );
	
		Mogre::TerrainGroup::TerrainSlotDefinition^ GetTerrainDefinition( long x, long y );
	
		Mogre::Terrain^ GetTerrain( long x, long y );
	
		void FreeTemporaryResources( );
	
		void Update( bool synchronous );
		void Update( );
	
		void UpdateGeometry( );
	
		void UpdateDerivedData( bool synchronous, Mogre::uint8 typeMask );
		void UpdateDerivedData( bool synchronous );
		void UpdateDerivedData( );
	
		float GetHeightAtWorldPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z, [Out] Mogre::Terrain^% ppTerrain );
		float GetHeightAtWorldPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		float GetHeightAtWorldPosition( Mogre::Vector3 pos, [Out] Mogre::Terrain^% ppTerrain );
		float GetHeightAtWorldPosition( Mogre::Vector3 pos );
	
		Mogre::TerrainGroup::RayResult^ RayIntersects( Mogre::Ray ray, Mogre::Real distanceLimit );
		Mogre::TerrainGroup::RayResult^ RayIntersects( Mogre::Ray ray );
	
		void BoxIntersects( Mogre::AxisAlignedBox^ box, Mogre::TerrainGroup::TerrainList^ resultList );
	
		void SphereIntersects( Mogre::Sphere sphere, Mogre::TerrainGroup::TerrainList^ resultList );
	
		void ConvertWorldPositionToTerrainSlot( Mogre::Vector3 pos, [Out] long% x, [Out] long% y );
	
		void ConvertTerrainSlotToWorldPosition( long x, long y, Mogre::Vector3* pos );
	
		Mogre::TerrainGroup::TerrainIterator^ GetTerrainIterator( );
	
		Mogre::uint32 PackIndex( long x, long y );
	
		void UnpackIndex( Mogre::uint32 key, [Out] long% x, [Out] long% y );
	
		String^ GenerateFilename( long x, long y );
	
		void SaveGroupDefinition( String^ filename );
	
		void SaveGroupDefinition( Mogre::StreamSerialiser^ stream );
	
		void LoadGroupDefinition( String^ filename );
	
		void LoadGroupDefinition( Mogre::StreamSerialiser^ stream );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainGroup )
	
		//Protected Declarations
	protected public:
	
	};
	

}
