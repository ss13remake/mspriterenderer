/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePagedWorld.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//PagedWorld
	//################################################################
	
	public ref class PagedWorld : public Wrapper
	{
		//Nested Types
		public: ref class SectionMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::PagedWorldSection^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::PagedWorldSection*
		public: INC_DECLARE_STLMAP( SectionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PagedWorld( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PagedWorld( String^ name, Mogre::PageManager^ manager );
	
	
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
	
		static property Mogre::uint32 CHUNK_SECTIONDECLARATION_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		property Mogre::PageManager^ Manager
		{
		public:
			Mogre::PageManager^ get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::PageProvider^ PageProvider
		{
		public:
			Mogre::PageProvider^ get();
		public:
			void set(Mogre::PageProvider^ provider);
		}
	
		property size_t SectionCount
		{
		public:
			size_t get();
		}
	
		void Load( String^ filename );
	
		void Load( Mogre::DataStreamPtr^ stream );
	
		bool Load( Mogre::StreamSerialiser^ stream );
	
		void Save( String^ filename );
	
		void Save( Mogre::DataStreamPtr^ stream );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		Mogre::PagedWorldSection^ CreateSection( Mogre::SceneManager^ sceneMgr, String^ typeName, String^ sectionName );
		Mogre::PagedWorldSection^ CreateSection( Mogre::SceneManager^ sceneMgr, String^ typeName );
	
		Mogre::PagedWorldSection^ CreateSection( String^ strategyName, Mogre::SceneManager^ sceneMgr, String^ sectionName );
		Mogre::PagedWorldSection^ CreateSection( String^ strategyName, Mogre::SceneManager^ sceneMgr );
	
		Mogre::PagedWorldSection^ CreateSection( Mogre::PageStrategy^ strategy, Mogre::SceneManager^ sceneMgr, String^ sectionName );
		Mogre::PagedWorldSection^ CreateSection( Mogre::PageStrategy^ strategy, Mogre::SceneManager^ sceneMgr );
	
		void DestroySection( String^ name );
	
		void DestroySection( Mogre::PagedWorldSection^ sec );
	
		void DestroyAllSections( );
	
		Mogre::PagedWorldSection^ GetSection( String^ name );
	
		Mogre::PagedWorld::Const_SectionMap^ GetSections( );
	
		bool _prepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _loadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _unloadProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		bool _unprepareProceduralPage( Mogre::Page^ page, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ _readPageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		Mogre::StreamSerialiser^ _writePageStream( Mogre::PageID pageID, Mogre::PagedWorldSection^ section );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PagedWorld )
	
		//Protected Declarations
	protected public:
	
	};
	

}
