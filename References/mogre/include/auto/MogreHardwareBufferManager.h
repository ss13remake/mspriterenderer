/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreHardwareBufferManager.h"
#pragma managed(pop)
#include "MogreHardwareBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareBufferManagerBase
	//################################################################
	
	public ref class HardwareBufferManagerBase : public Wrapper
	{
		//Nested Types
	
		public: enum class BufferLicenseType
		{
			BLT_MANUAL_RELEASE = Ogre::HardwareBufferManagerBase::BLT_MANUAL_RELEASE,
			BLT_AUTOMATIC_RELEASE = Ogre::HardwareBufferManagerBase::BLT_AUTOMATIC_RELEASE
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareBufferManagerBase( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void _Init_CLRObject( );
	
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::RenderToVertexBufferSharedPtr^ CreateRenderToVertexBuffer( );
	
		Mogre::VertexDeclaration^ CreateVertexDeclaration( );
	
		void DestroyVertexDeclaration( Mogre::VertexDeclaration^ decl );
	
		Mogre::VertexBufferBinding^ CreateVertexBufferBinding( );
	
		void DestroyVertexBufferBinding( Mogre::VertexBufferBinding^ binding );
	
		void RegisterVertexBufferSourceAndCopy( Mogre::HardwareVertexBufferSharedPtr^ sourceBuffer, Mogre::HardwareVertexBufferSharedPtr^ copy );
	
		void ReleaseVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void TouchVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void _freeUnusedBufferCopies( );
	
		void _releaseBufferCopies( bool forceFreeUnused );
		void _releaseBufferCopies( );
	
		void _forceReleaseBufferCopies( Mogre::HardwareVertexBufferSharedPtr^ sourceBuffer );
	
		void _forceReleaseBufferCopies( Mogre::HardwareVertexBuffer^ sourceBuffer );
	
		void _notifyVertexBufferDestroyed( Mogre::HardwareVertexBuffer^ buf );
	
		void _notifyIndexBufferDestroyed( Mogre::HardwareIndexBuffer^ buf );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareBufferManagerBase )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//HardwareBufferManager
	//################################################################
	
	public ref class HardwareBufferManager : public HardwareBufferManagerBase
	{
		//Nested Types
	
		
		        private protected:
		            static HardwareBufferManager^ _singleton;
		        public:
				static property HardwareBufferManager^ Singleton
				{
					HardwareBufferManager^ get()
					{
						Ogre::HardwareBufferManager* ptr = Ogre::HardwareBufferManager::getSingletonPtr();
						if (_singleton == CLR_NULL || _singleton->_native != ptr)
						{
							if (_singleton != CLR_NULL)
							{
								_singleton->_native = 0;
								_singleton = nullptr;
							}
							if ( ptr ) _singleton = gcnew HardwareBufferManager( ptr );
						}
						return _singleton;
					}
				}            
		      
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareBufferManager( CLRObject* obj ) : HardwareBufferManagerBase(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void _Init_CLRObject( );
	
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::RenderToVertexBufferSharedPtr^ CreateRenderToVertexBuffer( );
	
		Mogre::VertexDeclaration^ CreateVertexDeclaration( );
	
		void DestroyVertexDeclaration( Mogre::VertexDeclaration^ decl );
	
		Mogre::VertexBufferBinding^ CreateVertexBufferBinding( );
	
		void DestroyVertexBufferBinding( Mogre::VertexBufferBinding^ binding );
	
		void RegisterVertexBufferSourceAndCopy( Mogre::HardwareVertexBufferSharedPtr^ sourceBuffer, Mogre::HardwareVertexBufferSharedPtr^ copy );
	
		void ReleaseVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void TouchVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void _freeUnusedBufferCopies( );
	
		void _releaseBufferCopies( bool forceFreeUnused );
		void _releaseBufferCopies( );
	
		void _notifyVertexBufferDestroyed( Mogre::HardwareVertexBuffer^ buf );
	
		void _notifyIndexBufferDestroyed( Mogre::HardwareIndexBuffer^ buf );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareBufferManager )
	
		//Protected Declarations
	protected public:
	
	};
	

}
