/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePageManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//PageProvider
	//################################################################
	
	public ref class PageProvider : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageProvider( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PageProvider( );
	
	
		bool PrepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool LoadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool UnloadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool UnprepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ ReadWorldStream( String^ filename );
	
		Mogre::StreamSerialiser^ WriteWorldStream( String^ filename );
	
		Mogre::StreamSerialiser^ ReadPageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ WritePageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageProvider )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//PageManager
	//################################################################
	
	public ref class PageManager : public Wrapper
	{
		//Nested Types
		public: ref class WorldMap;
		public: ref class StrategyMap;
		public: ref class ContentCollectionFactoryMap;
		public: ref class ContentFactoryMap;
		public: ref class WorldSectionFactoryMap;
		public: ref class CameraList;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PagedWorld^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PagedWorld*
		public: INC_DECLARE_STLMAP( WorldMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PageStrategy^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PageStrategy*
		public: INC_DECLARE_STLMAP( StrategyMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PageContentCollectionFactory^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PageContentCollectionFactory*
		public: INC_DECLARE_STLMAP( ContentCollectionFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PageContentFactory^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PageContentFactory*
		public: INC_DECLARE_STLMAP( ContentFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PagedWorldSectionFactory^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PagedWorldSectionFactory*
		public: INC_DECLARE_STLMAP( WorldSectionFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::Camera^
		#define STLDECL_NATIVETYPE Ogre::Camera*
		public: INC_DECLARE_STLVECTOR( CameraList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PageManager( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PageManager( );
	
	
		property Mogre::uint8 DebugDisplayLevel
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 lvl);
		}
	
		property Mogre::PageProvider^ PageProvider
		{
		public:
			Mogre::PageProvider^ get();
		public:
			void set(Mogre::PageProvider^ provider);
		}
	
		property String^ PageResourceGroup
		{
		public:
			String^ get();
		public:
			void set(String^ g);
		}
	
		property bool PagingOperationsEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		Mogre::PagedWorld^ CreateWorld( String^ name );
		Mogre::PagedWorld^ CreateWorld( );
	
		void DestroyWorld( String^ name );
	
		void DestroyWorld( Mogre::PagedWorld^ world );
	
		Mogre::PagedWorld^ LoadWorld( String^ filename, String^ name );
		Mogre::PagedWorld^ LoadWorld( String^ filename );
	
		Mogre::PagedWorld^ LoadWorld( Mogre::DataStreamPtr^ stream, String^ name );
		Mogre::PagedWorld^ LoadWorld( Mogre::DataStreamPtr^ stream );
	
		void SaveWorld( Mogre::PagedWorld^ world, String^ filename );
	
		void SaveWorld( Mogre::PagedWorld^ world, Mogre::DataStreamPtr^ stream );
	
		Mogre::PagedWorld^ GetWorld( String^ name );
	
		Mogre::PageManager::Const_WorldMap^ GetWorlds( );
	
		void AddStrategy( Mogre::PageStrategy^ strategy );
	
		void RemoveStrategy( Mogre::PageStrategy^ strategy );
	
		Mogre::PageStrategy^ GetStrategy( String^ name );
	
		Mogre::PageManager::Const_StrategyMap^ GetStrategies( );
	
		void AddContentCollectionFactory( Mogre::PageContentCollectionFactory^ f );
	
		void RemoveContentCollectionFactory( Mogre::PageContentCollectionFactory^ f );
	
		Mogre::PageContentCollectionFactory^ GetContentCollectionFactory( String^ name );
	
		Mogre::PageContentCollection^ CreateContentCollection( String^ typeName );
	
		void DestroyContentCollection( Mogre::PageContentCollection^ coll );
	
		Mogre::PageManager::Const_ContentCollectionFactoryMap^ GetContentCollectionFactories( );
	
		void AddContentFactory( Mogre::PageContentFactory^ f );
	
		void RemoveContentFactory( Mogre::PageContentFactory^ f );
	
		Mogre::PageContentFactory^ GetContentFactory( String^ name );
	
		Mogre::PageManager::Const_ContentFactoryMap^ GetContentFactories( );
	
		Mogre::PageContent^ CreateContent( String^ typeName );
	
		void DestroyContent( Mogre::PageContent^ c );
	
		void AddWorldSectionFactory( Mogre::PagedWorldSectionFactory^ f );
	
		void RemoveWorldSectionFactory( Mogre::PagedWorldSectionFactory^ f );
	
		Mogre::PagedWorldSectionFactory^ GetWorldSectionFactory( String^ name );
	
		Mogre::PagedWorldSection^ CreateWorldSection( String^ typeName, String^ name, Mogre::PagedWorld^ parent, Mogre::SceneManager^ sm );
	
		void DestroyWorldSection( Mogre::PagedWorldSection^ s );
	
		Mogre::PageManager::Const_WorldSectionFactoryMap^ GetWorldSectionFactories( );
	
		bool _prepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _loadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _unloadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _unprepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ _readPageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ _writePageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ _readWorldStream( String^ filename );
	
		Mogre::StreamSerialiser^ _writeWorldStream( String^ filename );
	
		void AddCamera( Mogre::Camera^ c );
	
		void RemoveCamera( Mogre::Camera^ c );
	
		bool HasCamera( Mogre::Camera^ c );
	
		Mogre::PageManager::Const_CameraList^ GetCameraList( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PageManager )
	
		//Protected Declarations
	protected public:
	
	};
	

}
