/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreResourceBackgroundQueue.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//BackgroundProcessResult
	//################################################################
	
	public ref class BackgroundProcessResult : public INativePointer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		BackgroundProcessResult( Ogre::BackgroundProcessResult* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~BackgroundProcessResult()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::BackgroundProcessResult* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		BackgroundProcessResult( );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property bool Error
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property String^ Message
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( BackgroundProcessResult )
	
		//Protected Declarations
	protected public:
	
	};
	

}
