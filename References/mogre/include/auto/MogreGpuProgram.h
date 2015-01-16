/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreGpuProgram.h"
#pragma managed(pop)
#include "MogreResource.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class GpuProgramType
	{
		GPT_VERTEX_PROGRAM = Ogre::GPT_VERTEX_PROGRAM,
		GPT_FRAGMENT_PROGRAM = Ogre::GPT_FRAGMENT_PROGRAM,
		GPT_GEOMETRY_PROGRAM = Ogre::GPT_GEOMETRY_PROGRAM
	};
	
	//################################################################
	//GpuProgram
	//################################################################
	
	public ref class GpuProgram : public Resource
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		GpuProgram( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::GpuNamedConstants^ ConstantDefinitions
		{
		public:
			Mogre::GpuNamedConstants^ get();
		}
	
		property bool HasCompileError
		{
		public:
			bool get();
		}
	
		property bool HasDefaultParameters
		{
		public:
			bool get();
		}
	
		property bool IsAdjacencyInfoRequired
		{
		public:
			bool get();
		}
	
		property bool IsMorphAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsPoseAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsSkeletalAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsSupported
		{
		public:
			bool get();
		}
	
		property bool IsVertexTextureFetchRequired
		{
		public:
			bool get();
		}
	
		property String^ Language
		{
		public:
			String^ get();
		}
	
		property String^ ManualNamedConstantsFile
		{
		public:
			String^ get();
		public:
			void set(String^ paramDefFile);
		}
	
		property Mogre::GpuNamedConstants^ NamedConstants
		{
		public:
			Mogre::GpuNamedConstants^ get();
		}
	
		property Mogre::ushort NumberOfPosesIncluded
		{
		public:
			Mogre::ushort get();
		}
	
		property bool PassFogStates
		{
		public:
			bool get();
		}
	
		property bool PassSurfaceAndLightStates
		{
		public:
			bool get();
		}
	
		property bool PassTransformStates
		{
		public:
			bool get();
		}
	
		property String^ Source
		{
		public:
			String^ get();
		public:
			void set(String^ source);
		}
	
		property String^ SourceFile
		{
		public:
			String^ get();
		public:
			void set(String^ filename);
		}
	
		property String^ SyntaxCode
		{
		public:
			String^ get();
		public:
			void set(String^ syntax);
		}
	
		property Mogre::GpuProgramType Type
		{
		public:
			Mogre::GpuProgramType get();
		public:
			void set(Mogre::GpuProgramType t);
		}
	
		void _Init_CLRObject( );
	
		Mogre::GpuProgram^ _getBindingDelegate( );
	
		Mogre::GpuProgramParametersSharedPtr^ CreateParameters( );
	
		void SetSkeletalAnimationIncluded( bool included );
	
		void SetMorphAnimationIncluded( bool included );
	
		void SetPoseAnimationIncluded( Mogre::ushort poseCount );
	
		void SetVertexTextureFetchRequired( bool r );
	
		void SetAdjacencyInfoRequired( bool r );
	
		Mogre::GpuProgramParametersSharedPtr^ GetDefaultParameters( );
	
		void ResetCompileError( );
	
		void SetManualNamedConstants( Mogre::GpuNamedConstants^ namedConstants );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( GpuProgram )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class GpuProgramPtr : public GpuProgram
	{
	public protected:
			Ogre::GpuProgramPtr* _sharedPtr;
	
		GpuProgramPtr(Ogre::GpuProgramPtr& sharedPtr) : GpuProgram( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::GpuProgramPtr(sharedPtr);
		}
	
		!GpuProgramPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~GpuProgramPtr()
		{
			this->!GpuProgramPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( GpuProgramPtr )
	
		static GpuProgramPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (GpuProgramPtr^) ptr;
		}
	
		static operator GpuProgramPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::GpuProgram*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type GpuProgram.");
			return gcnew GpuProgramPtr( (Ogre::GpuProgramPtr) *(ptr->_sharedPtr) );
		}
	
		GpuProgramPtr(GpuProgram^ obj) : GpuProgram( obj->_native )
		{
			_sharedPtr = new Ogre::GpuProgramPtr( static_cast<Ogre::GpuProgram*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			GpuProgramPtr^ clr = dynamic_cast<GpuProgramPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(GpuProgramPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (GpuProgramPtr^ val1, GpuProgramPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (GpuProgramPtr^ val1, GpuProgramPtr^ val2)
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
	
		property GpuProgram^ Target
		{
			GpuProgram^ get()
			{
				return static_cast<Ogre::GpuProgram*>(_native);
			}
		}
	};
	
	

}
