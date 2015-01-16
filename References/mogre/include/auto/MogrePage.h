/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePage.h"
#pragma managed(pop)
#include "MogreWorkQueue.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Page
	//################################################################
	
	public ref class Page : public Wrapper, public Mogre::WorkQueue::IRequestHandler, public Mogre::WorkQueue::IResponseHandler
	{
		//Nested Types
		public: ref class ContentCollectionList;
	
		#define STLDECL_MANAGEDTYPE Mogre::PageContentCollection^
		#define STLDECL_NATIVETYPE Ogre::PageContentCollection*
		public: INC_DECLARE_STLVECTOR( ContentCollectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Page( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::WorkQueue::RequestHandler* _IRequestHandler_GetNativePtr() = IRequestHandler::_GetNativePtr;
	
		virtual Ogre::WorkQueue::ResponseHandler* _IResponseHandler_GetNativePtr() = IResponseHandler::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Page( Mogre::PageID pageID, Mogre::PagedWorldSection^ parent );
	
	
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
	
		static property Mogre::uint32 CHUNK_CONTENTCOLLECTION_DECLARATION_ID
		{
		public:
			Mogre::uint32 get();
		}
	
		static property Mogre::uint16 WORKQUEUE_PREPARE_REQUEST
		{
		public:
			Mogre::uint16 get();
		}
	
		static property Mogre::uint16 WORKQUEUE_CHANGECOLLECTION_REQUEST
		{
		public:
			Mogre::uint16 get();
		}
	
		property size_t ContentCollectionCount
		{
		public:
			size_t get();
		}
	
		property unsigned long FrameLastHeld
		{
		public:
			unsigned long get();
		}
	
		property Mogre::PageID ID
		{
		public:
			Mogre::PageID get();
		}
	
		property bool IsDeferredProcessInProgress
		{
		public:
			bool get();
		}
	
		property bool IsHeld
		{
		public:
			bool get();
		}
	
		property bool IsModified
		{
		public:
			bool get();
		}
	
		property Mogre::PageManager^ Manager
		{
		public:
			Mogre::PageManager^ get();
		}
	
		property Mogre::PagedWorldSection^ ParentSection
		{
		public:
			Mogre::PagedWorldSection^ get();
		}
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		void Touch( );
	
		void Load( bool synchronous );
	
		void Unload( );
	
		void Save( );
	
		void Save( String^ filename );
	
		void Save( Mogre::StreamSerialiser^ stream );
	
		void FrameStart( Mogre::Real timeSinceLastFrame );
	
		void FrameEnd( Mogre::Real timeElapsed );
	
		void NotifyCamera( Mogre::Camera^ cam );
	
		Mogre::PageContentCollection^ CreateContentCollection( String^ typeName );
	
		void DestroyContentCollection( Mogre::PageContentCollection^ coll );
	
		void DestroyAllContentCollections( );
	
		Mogre::PageContentCollection^ GetContentCollection( size_t index );
	
		Mogre::Page::Const_ContentCollectionList^ GetContentCollectionList( );
	
		void _notifyModified( );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Page )
	
		//Protected Declarations
	protected public:
	
	};
	

}
