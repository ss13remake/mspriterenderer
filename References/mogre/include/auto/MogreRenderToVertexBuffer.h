/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderToVertexBuffer.h"
#pragma managed(pop)
#include "MogreRenderOperation.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RenderToVertexBuffer
	//################################################################
	
	public ref class RenderToVertexBuffer : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderToVertexBuffer( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property unsigned int MaxVertexCount
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int maxVertexCount);
		}
	
		property Mogre::RenderOperation::OperationTypes OperationType
		{
		public:
			Mogre::RenderOperation::OperationTypes get();
		public:
			void set(Mogre::RenderOperation::OperationTypes operationType);
		}
	
		property bool ResetsEveryUpdate
		{
		public:
			bool get();
		public:
			void set(bool resetsEveryUpdate);
		}
	
		property Mogre::IRenderable^ SourceRenderable
		{
		public:
			Mogre::IRenderable^ get();
		public:
			void set(Mogre::IRenderable^ source);
		}
	
		property Mogre::VertexDeclaration^ VertexDeclaration
		{
		public:
			Mogre::VertexDeclaration^ get();
		}
	
		void _Init_CLRObject( );
	
		void GetRenderOperation( Mogre::RenderOperation^ op );
	
		void Update( Mogre::SceneManager^ sceneMgr );
	
		void Reset( );
	
		Mogre::MaterialPtr^ GetRenderToBufferMaterial( );
	
		void SetRenderToBufferMaterialName( String^ materialName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderToVertexBuffer )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class RenderToVertexBufferSharedPtr : public RenderToVertexBuffer
	{
	public protected:
			Ogre::RenderToVertexBufferSharedPtr* _sharedPtr;
	
		RenderToVertexBufferSharedPtr(Ogre::RenderToVertexBufferSharedPtr& sharedPtr) : RenderToVertexBuffer( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::RenderToVertexBufferSharedPtr(sharedPtr);
		}
	
		!RenderToVertexBufferSharedPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~RenderToVertexBufferSharedPtr()
		{
			this->!RenderToVertexBufferSharedPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( RenderToVertexBufferSharedPtr )
	
		RenderToVertexBufferSharedPtr(RenderToVertexBuffer^ obj) : RenderToVertexBuffer( obj->_native )
		{
			_sharedPtr = new Ogre::RenderToVertexBufferSharedPtr( static_cast<Ogre::RenderToVertexBuffer*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			RenderToVertexBufferSharedPtr^ clr = dynamic_cast<RenderToVertexBufferSharedPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(RenderToVertexBufferSharedPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (RenderToVertexBufferSharedPtr^ val1, RenderToVertexBufferSharedPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (RenderToVertexBufferSharedPtr^ val1, RenderToVertexBufferSharedPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property RenderToVertexBuffer^ Target
		{
			RenderToVertexBuffer^ get()
			{
				return static_cast<Ogre::RenderToVertexBuffer*>(_native);
			}
		}
	};
	
	

}
