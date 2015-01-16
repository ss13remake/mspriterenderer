/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreLodListener.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//EntityMaterialLodChangedEvent_NativePtr
	//################################################################
	
	public value class EntityMaterialLodChangedEvent_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::EntityMaterialLodChangedEvent* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::SubEntity^ subEntity
		{
		public:
			Mogre::SubEntity^ get();
		}
	
		property Mogre::Camera^ camera
		{
		public:
			Mogre::Camera^ get();
		}
	
		property Mogre::Real lodValue
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::ushort previousLodIndex
		{
		public:
			Mogre::ushort get();
		}
	
		property Mogre::ushort newLodIndex
		{
		public:
			Mogre::ushort get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( EntityMaterialLodChangedEvent_NativePtr, Ogre::EntityMaterialLodChangedEvent )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//EntityMeshLodChangedEvent_NativePtr
	//################################################################
	
	public value class EntityMeshLodChangedEvent_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::EntityMeshLodChangedEvent* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::Entity^ entity
		{
		public:
			Mogre::Entity^ get();
		}
	
		property Mogre::Camera^ camera
		{
		public:
			Mogre::Camera^ get();
		}
	
		property Mogre::Real lodValue
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::ushort previousLodIndex
		{
		public:
			Mogre::ushort get();
		}
	
		property Mogre::ushort newLodIndex
		{
		public:
			Mogre::ushort get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( EntityMeshLodChangedEvent_NativePtr, Ogre::EntityMeshLodChangedEvent )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MovableObjectLodChangedEvent_NativePtr
	//################################################################
	
	public value class MovableObjectLodChangedEvent_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::MovableObjectLodChangedEvent* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::MovableObject^ movableObject
		{
		public:
			Mogre::MovableObject^ get();
		}
	
		property Mogre::Camera^ camera
		{
		public:
			Mogre::Camera^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( MovableObjectLodChangedEvent_NativePtr, Ogre::MovableObjectLodChangedEvent )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//LodListener
	//################################################################
	
	public ref class LodListener : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		LodListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		LodListener();
	
	
		void _Init_CLRObject( );
	
		bool PrequeueMovableObjectLodChanged( Mogre::MovableObjectLodChangedEvent_NativePtr evt );
	
		void PostqueueMovableObjectLodChanged( Mogre::MovableObjectLodChangedEvent_NativePtr evt );
	
		bool PrequeueEntityMeshLodChanged( Mogre::EntityMeshLodChangedEvent_NativePtr evt );
	
		void PostqueueEntityMeshLodChanged( Mogre::EntityMeshLodChangedEvent_NativePtr evt );
	
		bool PrequeueEntityMaterialLodChanged( Mogre::EntityMaterialLodChangedEvent_NativePtr evt );
	
		void PostqueueEntityMaterialLodChanged( Mogre::EntityMaterialLodChangedEvent_NativePtr evt );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( LodListener )
	
		//Protected Declarations
	protected public:
	
	};
	

}
