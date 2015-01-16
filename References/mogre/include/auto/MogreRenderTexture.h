/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderTexture.h"
#pragma managed(pop)
#include "MogreRenderTarget.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	//################################################################
	//RenderTexture
	//################################################################
	
	public ref class RenderTexture : public RenderTarget
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderTexture( CLRObject* obj ) : RenderTarget(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void _Init_CLRObject( );
	
		void CopyContentsToMemory( Mogre::PixelBox dst, Mogre::RenderTarget::FrameBuffer buffer );
	
		Mogre::PixelFormat SuggestPixelFormat( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderTexture )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MultiRenderTarget
	//################################################################
	
	public ref class MultiRenderTarget : public RenderTarget
	{
		//Nested Types
		public: ref class BoundSufaceList;
	
		#define STLDECL_MANAGEDTYPE Mogre::RenderTexture^
		#define STLDECL_NATIVETYPE Ogre::RenderTexture*
		public: INC_DECLARE_STLVECTOR( BoundSufaceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MultiRenderTarget( CLRObject* obj ) : RenderTarget(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void _Init_CLRObject( );
	
		void BindSurface( size_t attachment, Mogre::RenderTexture^ target );
	
		void UnbindSurface( size_t attachment );
	
		void CopyContentsToMemory( Mogre::PixelBox dst, Mogre::RenderTarget::FrameBuffer buffer );
	
		Mogre::PixelFormat SuggestPixelFormat( );
	
		Mogre::MultiRenderTarget::Const_BoundSufaceList^ GetBoundSurfaceList( );
	
		Mogre::RenderTexture^ GetBoundSurface( size_t index );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MultiRenderTarget )
	
		//Protected Declarations
	protected public:
	
	};
	

}
