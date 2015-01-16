/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreCompositorChain.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreRenderTargetListener.h"

namespace Mogre
{
	//################################################################
	//CompositorChain
	//################################################################
	
	public ref class CompositorChain : public Wrapper
	{
		//Nested Types
		public: ref class Instances;
	
		#define STLDECL_MANAGEDTYPE Mogre::CompositorInstance^
		#define STLDECL_NATIVETYPE Ogre::CompositorInstance*
		public: INC_DECLARE_STLVECTOR( Instances, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( InstanceIterator, Ogre::CompositorChain::InstanceIterator, Mogre::CompositorChain::Instances, Mogre::CompositorInstance^, Ogre::CompositorInstance* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		CompositorChain( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		CompositorChain( Mogre::Viewport^ vp );
	
	
		static property size_t LAST
		{
		public:
			size_t get();
		}
	
		static property size_t BEST
		{
		public:
			size_t get();
		}
	
		property size_t NumCompositors
		{
		public:
			size_t get();
		}
	
		property Mogre::Viewport^ Viewport
		{
		public:
			Mogre::Viewport^ get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::CompositorInstance^ AddCompositor( Mogre::CompositorPtr^ filter, size_t addPosition, String^ scheme );
		Mogre::CompositorInstance^ AddCompositor( Mogre::CompositorPtr^ filter, size_t addPosition );
		Mogre::CompositorInstance^ AddCompositor( Mogre::CompositorPtr^ filter );
	
		void RemoveCompositor( size_t position );
		void RemoveCompositor( );
	
		void RemoveAllCompositors( );
	
		Mogre::CompositorInstance^ GetCompositor( size_t index );
	
		Mogre::CompositorInstance^ GetCompositor( String^ name );
	
		Mogre::CompositorInstance^ _getOriginalSceneCompositor( );
	
		Mogre::CompositorChain::InstanceIterator^ GetCompositors( );
	
		void SetCompositorEnabled( size_t position, bool state );
	
		void PreRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt );
	
		void PostRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt );
	
		void PreViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void PostViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void ViewportRemoved( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void _markDirty( );
	
		void _notifyViewport( Mogre::Viewport^ vp );
	
		void _removeInstance( Mogre::CompositorInstance^ i );
	
		void _compile( );
	
		Mogre::CompositorInstance^ GetPreviousInstance( Mogre::CompositorInstance^ curr, bool activeOnly );
		Mogre::CompositorInstance^ GetPreviousInstance( Mogre::CompositorInstance^ curr );
	
		Mogre::CompositorInstance^ GetNextInstance( Mogre::CompositorInstance^ curr, bool activeOnly );
		Mogre::CompositorInstance^ GetNextInstance( Mogre::CompositorInstance^ curr );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( CompositorChain )
	
		//Protected Declarations
	protected public:
	
	};
	

}
