/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreDefaultHardwareBufferManager.h"
#pragma managed(pop)
#include "MogreHardwareBufferManager.h"
#include "MogreHardwareBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//DefaultHardwareBufferManagerBase
	//################################################################
	
	public ref class DefaultHardwareBufferManagerBase : public HardwareBufferManagerBase
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultHardwareBufferManagerBase( CLRObject* obj ) : HardwareBufferManagerBase(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultHardwareBufferManagerBase( );
	
	
		void _Init_CLRObject( );
	
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::RenderToVertexBufferSharedPtr^ CreateRenderToVertexBuffer( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultHardwareBufferManagerBase )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultHardwareBufferManager
	//################################################################
	
	public ref class DefaultHardwareBufferManager : public HardwareBufferManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultHardwareBufferManager( CLRObject* obj ) : HardwareBufferManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultHardwareBufferManager( );
	
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultHardwareBufferManager )
	
		//Protected Declarations
	protected public:
	
	};
	

}
