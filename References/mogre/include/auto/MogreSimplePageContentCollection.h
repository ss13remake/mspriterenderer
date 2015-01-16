/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreSimplePageContentCollection.h"
#pragma managed(pop)
#include "MogrePageContentCollection.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogrePageContentCollectionFactory.h"

namespace Mogre
{
	//################################################################
	//SimplePageContentCollection
	//################################################################
	
	public ref class SimplePageContentCollection : public PageContentCollection
	{
		//Nested Types
		public: ref class ContentList;
	
		#define STLDECL_MANAGEDTYPE Mogre::PageContent^
		#define STLDECL_NATIVETYPE Ogre::PageContent*
		public: INC_DECLARE_STLVECTOR( ContentList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SimplePageContentCollection( CLRObject* obj ) : PageContentCollection(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SimplePageContentCollection( Mogre::PageContentCollectionFactory^ creator );
	
	
		static property Mogre::uint32 SUBCLASS_CHUNK_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 SUBCLASS_CHUNK_VERSION
		{
		public:
			Mogre::uint16 get();
		}
	
		Mogre::PageContent^ CreateContent( String^ typeName );
	
		void DestroyContent( Mogre::PageContent^ coll );
	
		Mogre::SimplePageContentCollection::Const_ContentList^ GetContentList( );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		bool Prepare( Mogre::StreamSerialiser^ stream );
	
		void Load( );
	
		void Unload( );
	
		void Unprepare( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SimplePageContentCollection )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SimplePageContentCollectionFactory
	//################################################################
	
	public ref class SimplePageContentCollectionFactory : public PageContentCollectionFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SimplePageContentCollectionFactory( CLRObject* obj ) : PageContentCollectionFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SimplePageContentCollectionFactory( );
	
	
		static property String^ FACTORY_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::PageContentCollection^ CreateInstance( );
	
		void DestroyInstance( Mogre::PageContentCollection^ c );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SimplePageContentCollectionFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
