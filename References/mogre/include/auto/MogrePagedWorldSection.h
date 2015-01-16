/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePagedWorldSection.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PagedWorldSection
	//################################################################
	
	public ref class PagedWorldSection : public Wrapper
	{
		//Nested Types
		public: ref class PageMap;
	
		#define STLDECL_MANAGEDKEY Mogre::PageID
		#define STLDECL_MANAGEDVALUE Mogre::Page^
		#define STLDECL_NATIVEKEY Ogre::PageID
		#define STLDECL_NATIVEVALUE Ogre::Page*
		public: INC_DECLARE_STLMAP( PageMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PagedWorldSection( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PagedWorldSection( String^ name, Mogre::PagedWorld^ parent, Mogre::SceneManager^ sm );
	
	
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
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ box);
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
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		public:
			void set(Mogre::SceneManager^ sm);
		}
	
		property Mogre::PageStrategy^ Strategy
		{
		public:
			Mogre::PageStrategy^ get();
		public:
			void set(Mogre::PageStrategy^ strat);
		}
	
		property Mogre::PageStrategyData^ StrategyData
		{
		public:
			Mogre::PageStrategyData^ get();
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		property Mogre::PagedWorld^ World
		{
		public:
			Mogre::PagedWorld^ get();
		}
	
		void SetStrategy( String^ stratName );
	
		void SetSceneManager( String^ smName );
	
		bool Load( Mogre::StreamSerialiser^ stream );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		Mogre::Page^ LoadOrCreatePage( Mogre::Vector3 worldPos );
	
		Mogre::PageID GetPageID( Mogre::Vector3 worldPos );
	
		void LoadPage( Mogre::PageID pageID, bool forceSynchronous );
		void LoadPage( Mogre::PageID pageID );
	
		void UnloadPage( Mogre::PageID pageID, bool forceSynchronous );
		void UnloadPage( Mogre::PageID pageID );
	
		void UnloadPage( Mogre::Page^ p, bool forceSynchronous );
		void UnloadPage( Mogre::Page^ p );
	
		bool _prepareProceduralPage( Mogre::Page^ page );
	
		bool _loadProceduralPage( Mogre::Page^ page );
	
		bool _unloadProceduralPage( Mogre::Page^ page );
	
		bool _unprepareProceduralPage( Mogre::Page^ page );
	
		void HoldPage( Mogre::PageID pageID );
	
		Mogre::Page^ GetPage( Mogre::PageID pageID );
	
		void RemoveAllPages( );
	
		Mogre::StreamSerialiser^ _readPageStream( Mogre::PageID pageID );
	
		Mogre::StreamSerialiser^ _writePageStream( Mogre::PageID pageID );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PagedWorldSection )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//PagedWorldSectionFactory
	//################################################################
	
	public ref class PagedWorldSectionFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PagedWorldSectionFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::PagedWorldSection^ CreateInstance( String^ name, Mogre::PagedWorld^ parent, Mogre::SceneManager^ sm );
	
		void DestroyInstance( Mogre::PagedWorldSection^ param1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PagedWorldSectionFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
