/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreGpuProgramParams.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogreSerializer.h"

namespace Mogre
{
	public enum class GpuParamVariability
	{
		GPV_GLOBAL = Ogre::GPV_GLOBAL,
		GPV_PER_OBJECT = Ogre::GPV_PER_OBJECT,
		GPV_LIGHTS = Ogre::GPV_LIGHTS,
		GPV_PASS_ITERATION_NUMBER = Ogre::GPV_PASS_ITERATION_NUMBER,
		GPV_ALL = Ogre::GPV_ALL
	};
	
	public enum class GpuConstantType
	{
		GCT_FLOAT1 = Ogre::GCT_FLOAT1,
		GCT_FLOAT2 = Ogre::GCT_FLOAT2,
		GCT_FLOAT3 = Ogre::GCT_FLOAT3,
		GCT_FLOAT4 = Ogre::GCT_FLOAT4,
		GCT_SAMPLER1D = Ogre::GCT_SAMPLER1D,
		GCT_SAMPLER2D = Ogre::GCT_SAMPLER2D,
		GCT_SAMPLER3D = Ogre::GCT_SAMPLER3D,
		GCT_SAMPLERCUBE = Ogre::GCT_SAMPLERCUBE,
		GCT_SAMPLER1DSHADOW = Ogre::GCT_SAMPLER1DSHADOW,
		GCT_SAMPLER2DSHADOW = Ogre::GCT_SAMPLER2DSHADOW,
		GCT_MATRIX_2X2 = Ogre::GCT_MATRIX_2X2,
		GCT_MATRIX_2X3 = Ogre::GCT_MATRIX_2X3,
		GCT_MATRIX_2X4 = Ogre::GCT_MATRIX_2X4,
		GCT_MATRIX_3X2 = Ogre::GCT_MATRIX_3X2,
		GCT_MATRIX_3X3 = Ogre::GCT_MATRIX_3X3,
		GCT_MATRIX_3X4 = Ogre::GCT_MATRIX_3X4,
		GCT_MATRIX_4X2 = Ogre::GCT_MATRIX_4X2,
		GCT_MATRIX_4X3 = Ogre::GCT_MATRIX_4X3,
		GCT_MATRIX_4X4 = Ogre::GCT_MATRIX_4X4,
		GCT_INT1 = Ogre::GCT_INT1,
		GCT_INT2 = Ogre::GCT_INT2,
		GCT_INT3 = Ogre::GCT_INT3,
		GCT_INT4 = Ogre::GCT_INT4,
		GCT_UNKNOWN = Ogre::GCT_UNKNOWN
	};
	
	//################################################################
	//GpuConstantDefinition_NativePtr
	//################################################################
	
	public value class GpuConstantDefinition_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::GpuConstantDefinition* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::GpuConstantType constType
		{
		public:
			Mogre::GpuConstantType get();
		public:
			void set(Mogre::GpuConstantType value);
		}
	
		property size_t physicalIndex
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t logicalIndex
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t elementSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t arraySize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property Mogre::uint16 variability
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 value);
		}
	
		property bool IsFloat
		{
		public:
			bool get();
		}
	
		property bool IsSampler
		{
		public:
			bool get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( GpuConstantDefinition_NativePtr, Ogre::GpuConstantDefinition )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static GpuConstantDefinition_NativePtr Create( );
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuNamedConstants
	//################################################################
	
	public ref class GpuNamedConstants
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::GpuConstantDefinitionMap^ _map;
	
		//Internal Declarations
	public protected:
		GpuNamedConstants( Ogre::GpuNamedConstants* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~GpuNamedConstants()
		{
			this->!GpuNamedConstants();
		}
		!GpuNamedConstants()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::GpuNamedConstants* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		GpuNamedConstants( );
	
	
		property size_t floatBufferSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t intBufferSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property Mogre::GpuConstantDefinitionMap^ map
		{
		public:
			Mogre::GpuConstantDefinitionMap^ get();
		}
	
		void GenerateConstantDefinitionArrayEntries( String^ paramName, Mogre::GpuConstantDefinition_NativePtr baseDef );
	
		void Save( String^ filename );
	
		void Load( Mogre::DataStreamPtr^ stream );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( GpuNamedConstants )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuNamedConstantsSerializer
	//################################################################
	
	public ref class GpuNamedConstantsSerializer : public Serializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		GpuNamedConstantsSerializer( CLRObject* obj ) : Serializer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		GpuNamedConstantsSerializer( );
	
	
		void ExportNamedConstants( Mogre::GpuNamedConstants^ pConsts, String^ filename, Mogre::Serializer::Endian endianMode );
		void ExportNamedConstants( Mogre::GpuNamedConstants^ pConsts, String^ filename );
	
		void ImportNamedConstants( Mogre::DataStreamPtr^ stream, Mogre::GpuNamedConstants^ pDest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( GpuNamedConstantsSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuLogicalBufferStruct
	//################################################################
	
	public ref class GpuLogicalBufferStruct
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		GpuLogicalBufferStruct( Ogre::GpuLogicalBufferStruct* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~GpuLogicalBufferStruct()
		{
			this->!GpuLogicalBufferStruct();
		}
		!GpuLogicalBufferStruct()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::GpuLogicalBufferStruct* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		GpuLogicalBufferStruct( );
	
	
		property size_t bufferSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( GpuLogicalBufferStruct )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuSharedParameters
	//################################################################
	
	public ref class GpuSharedParameters : public INativePointer
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
		GpuSharedParameters( Ogre::GpuSharedParameters* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~GpuSharedParameters()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::GpuSharedParameters* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		GpuSharedParameters( String^ name );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property Mogre::GpuNamedConstants^ ConstantDefinitions
		{
		public:
			Mogre::GpuNamedConstants^ get();
		}
	
		property size_t FrameLastUpdated
		{
		public:
			size_t get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property unsigned long Version
		{
		public:
			unsigned long get();
		}
	
		void AddConstantDefinition( String^ name, Mogre::GpuConstantType constType, size_t arraySize );
		void AddConstantDefinition( String^ name, Mogre::GpuConstantType constType );
	
		void RemoveConstantDefinition( String^ name );
	
		void RemoveAllConstantDefinitions( );
	
		void _markDirty( );
	
		Mogre::GpuConstantDefinitionIterator^ GetConstantDefinitionIterator( );
	
		Mogre::GpuConstantDefinition_NativePtr GetConstantDefinition( String^ name );
	
		void SetNamedConstant( String^ name, Mogre::Real val );
	
		void SetNamedConstant( String^ name, int val );
	
		void SetNamedConstant( String^ name, Mogre::Vector4 vec );
	
		void SetNamedConstant( String^ name, Mogre::Vector3 vec );
	
		void SetNamedConstant( String^ name, Mogre::Matrix4^ m );
	
		void SetNamedConstant( String^ name, const Mogre::Matrix4::NativeValue* m, size_t numEntries );
	
		void SetNamedConstant( String^ name, const float* val, size_t count );
	
		void SetNamedConstant( String^ name, const double* val, size_t count );
	
		void SetNamedConstant( String^ name, Mogre::ColourValue colour );
	
		void SetNamedConstant( String^ name, const int* val, size_t count );
	
		float* GetFloatPointer( size_t pos );
	
		int* GetIntPointer( size_t pos );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( GpuSharedParameters )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuSharedParametersUsage
	//################################################################
	
	public ref class GpuSharedParametersUsage : public INativePointer
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
		GpuSharedParametersUsage( Ogre::GpuSharedParametersUsage* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~GpuSharedParametersUsage()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::GpuSharedParametersUsage* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		GpuSharedParametersUsage( Mogre::GpuSharedParametersPtr^ sharedParams, Mogre::GpuProgramParameters^ params );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::GpuProgramParameters^ TargetParams
		{
		public:
			Mogre::GpuProgramParameters^ get();
		}
	
		void _copySharedParamsToTargetParams( );
	
		Mogre::GpuSharedParametersPtr^ GetSharedParams( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( GpuSharedParametersUsage )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//GpuProgramParameters
	//################################################################
	
	public ref class GpuProgramParameters : public INativePointer
	{
		//Nested Types
		public: ref class AutoConstantList;
		public: ref class GpuSharedParamUsageList;
	
		public: enum class AutoConstantType
		{
			ACT_WORLD_MATRIX = Ogre::GpuProgramParameters::ACT_WORLD_MATRIX,
			ACT_INVERSE_WORLD_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_WORLD_MATRIX,
			ACT_TRANSPOSE_WORLD_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_WORLD_MATRIX,
			ACT_INVERSE_TRANSPOSE_WORLD_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLD_MATRIX,
			ACT_WORLD_MATRIX_ARRAY_3x4 = Ogre::GpuProgramParameters::ACT_WORLD_MATRIX_ARRAY_3x4,
			ACT_WORLD_MATRIX_ARRAY = Ogre::GpuProgramParameters::ACT_WORLD_MATRIX_ARRAY,
			ACT_VIEW_MATRIX = Ogre::GpuProgramParameters::ACT_VIEW_MATRIX,
			ACT_INVERSE_VIEW_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_VIEW_MATRIX,
			ACT_TRANSPOSE_VIEW_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_VIEW_MATRIX,
			ACT_INVERSE_TRANSPOSE_VIEW_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_VIEW_MATRIX,
			ACT_PROJECTION_MATRIX = Ogre::GpuProgramParameters::ACT_PROJECTION_MATRIX,
			ACT_INVERSE_PROJECTION_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_PROJECTION_MATRIX,
			ACT_TRANSPOSE_PROJECTION_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_PROJECTION_MATRIX,
			ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_PROJECTION_MATRIX,
			ACT_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_VIEWPROJ_MATRIX,
			ACT_INVERSE_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_VIEWPROJ_MATRIX,
			ACT_TRANSPOSE_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_VIEWPROJ_MATRIX,
			ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_VIEWPROJ_MATRIX,
			ACT_WORLDVIEW_MATRIX = Ogre::GpuProgramParameters::ACT_WORLDVIEW_MATRIX,
			ACT_INVERSE_WORLDVIEW_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_WORLDVIEW_MATRIX,
			ACT_TRANSPOSE_WORLDVIEW_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_WORLDVIEW_MATRIX,
			ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLDVIEW_MATRIX,
			ACT_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_WORLDVIEWPROJ_MATRIX,
			ACT_INVERSE_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_WORLDVIEWPROJ_MATRIX,
			ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_TRANSPOSE_WORLDVIEWPROJ_MATRIX,
			ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_INVERSE_TRANSPOSE_WORLDVIEWPROJ_MATRIX,
			ACT_RENDER_TARGET_FLIPPING = Ogre::GpuProgramParameters::ACT_RENDER_TARGET_FLIPPING,
			ACT_VERTEX_WINDING = Ogre::GpuProgramParameters::ACT_VERTEX_WINDING,
			ACT_FOG_COLOUR = Ogre::GpuProgramParameters::ACT_FOG_COLOUR,
			ACT_FOG_PARAMS = Ogre::GpuProgramParameters::ACT_FOG_PARAMS,
			ACT_SURFACE_AMBIENT_COLOUR = Ogre::GpuProgramParameters::ACT_SURFACE_AMBIENT_COLOUR,
			ACT_SURFACE_DIFFUSE_COLOUR = Ogre::GpuProgramParameters::ACT_SURFACE_DIFFUSE_COLOUR,
			ACT_SURFACE_SPECULAR_COLOUR = Ogre::GpuProgramParameters::ACT_SURFACE_SPECULAR_COLOUR,
			ACT_SURFACE_EMISSIVE_COLOUR = Ogre::GpuProgramParameters::ACT_SURFACE_EMISSIVE_COLOUR,
			ACT_SURFACE_SHININESS = Ogre::GpuProgramParameters::ACT_SURFACE_SHININESS,
			ACT_LIGHT_COUNT = Ogre::GpuProgramParameters::ACT_LIGHT_COUNT,
			ACT_AMBIENT_LIGHT_COLOUR = Ogre::GpuProgramParameters::ACT_AMBIENT_LIGHT_COLOUR,
			ACT_LIGHT_DIFFUSE_COLOUR = Ogre::GpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR,
			ACT_LIGHT_SPECULAR_COLOUR = Ogre::GpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR,
			ACT_LIGHT_ATTENUATION = Ogre::GpuProgramParameters::ACT_LIGHT_ATTENUATION,
			ACT_SPOTLIGHT_PARAMS = Ogre::GpuProgramParameters::ACT_SPOTLIGHT_PARAMS,
			ACT_LIGHT_POSITION = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION,
			ACT_LIGHT_POSITION_OBJECT_SPACE = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE,
			ACT_LIGHT_POSITION_VIEW_SPACE = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION_VIEW_SPACE,
			ACT_LIGHT_DIRECTION = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION,
			ACT_LIGHT_DIRECTION_OBJECT_SPACE = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION_OBJECT_SPACE,
			ACT_LIGHT_DIRECTION_VIEW_SPACE = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION_VIEW_SPACE,
			ACT_LIGHT_DISTANCE_OBJECT_SPACE = Ogre::GpuProgramParameters::ACT_LIGHT_DISTANCE_OBJECT_SPACE,
			ACT_LIGHT_POWER_SCALE = Ogre::GpuProgramParameters::ACT_LIGHT_POWER_SCALE,
			ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED = Ogre::GpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED,
			ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED = Ogre::GpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED,
			ACT_LIGHT_DIFFUSE_COLOUR_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_ARRAY,
			ACT_LIGHT_SPECULAR_COLOUR_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_ARRAY,
			ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DIFFUSE_COLOUR_POWER_SCALED_ARRAY,
			ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_SPECULAR_COLOUR_POWER_SCALED_ARRAY,
			ACT_LIGHT_ATTENUATION_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_ATTENUATION_ARRAY,
			ACT_LIGHT_POSITION_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION_ARRAY,
			ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE_ARRAY,
			ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_POSITION_VIEW_SPACE_ARRAY,
			ACT_LIGHT_DIRECTION_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION_ARRAY,
			ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION_OBJECT_SPACE_ARRAY,
			ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DIRECTION_VIEW_SPACE_ARRAY,
			ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_DISTANCE_OBJECT_SPACE_ARRAY,
			ACT_LIGHT_POWER_SCALE_ARRAY = Ogre::GpuProgramParameters::ACT_LIGHT_POWER_SCALE_ARRAY,
			ACT_SPOTLIGHT_PARAMS_ARRAY = Ogre::GpuProgramParameters::ACT_SPOTLIGHT_PARAMS_ARRAY,
			ACT_DERIVED_AMBIENT_LIGHT_COLOUR = Ogre::GpuProgramParameters::ACT_DERIVED_AMBIENT_LIGHT_COLOUR,
			ACT_DERIVED_SCENE_COLOUR = Ogre::GpuProgramParameters::ACT_DERIVED_SCENE_COLOUR,
			ACT_DERIVED_LIGHT_DIFFUSE_COLOUR = Ogre::GpuProgramParameters::ACT_DERIVED_LIGHT_DIFFUSE_COLOUR,
			ACT_DERIVED_LIGHT_SPECULAR_COLOUR = Ogre::GpuProgramParameters::ACT_DERIVED_LIGHT_SPECULAR_COLOUR,
			ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY = Ogre::GpuProgramParameters::ACT_DERIVED_LIGHT_DIFFUSE_COLOUR_ARRAY,
			ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY = Ogre::GpuProgramParameters::ACT_DERIVED_LIGHT_SPECULAR_COLOUR_ARRAY,
			ACT_LIGHT_NUMBER = Ogre::GpuProgramParameters::ACT_LIGHT_NUMBER,
			ACT_LIGHT_CASTS_SHADOWS = Ogre::GpuProgramParameters::ACT_LIGHT_CASTS_SHADOWS,
			ACT_SHADOW_EXTRUSION_DISTANCE = Ogre::GpuProgramParameters::ACT_SHADOW_EXTRUSION_DISTANCE,
			ACT_CAMERA_POSITION = Ogre::GpuProgramParameters::ACT_CAMERA_POSITION,
			ACT_CAMERA_POSITION_OBJECT_SPACE = Ogre::GpuProgramParameters::ACT_CAMERA_POSITION_OBJECT_SPACE,
			ACT_TEXTURE_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_TEXTURE_VIEWPROJ_MATRIX,
			ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY = Ogre::GpuProgramParameters::ACT_TEXTURE_VIEWPROJ_MATRIX_ARRAY,
			ACT_TEXTURE_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_TEXTURE_WORLDVIEWPROJ_MATRIX,
			ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY = Ogre::GpuProgramParameters::ACT_TEXTURE_WORLDVIEWPROJ_MATRIX_ARRAY,
			ACT_SPOTLIGHT_VIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_SPOTLIGHT_VIEWPROJ_MATRIX,
			ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY = Ogre::GpuProgramParameters::ACT_SPOTLIGHT_VIEWPROJ_MATRIX_ARRAY,
			ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX = Ogre::GpuProgramParameters::ACT_SPOTLIGHT_WORLDVIEWPROJ_MATRIX,
			ACT_CUSTOM = Ogre::GpuProgramParameters::ACT_CUSTOM,
			ACT_TIME = Ogre::GpuProgramParameters::ACT_TIME,
			ACT_TIME_0_X = Ogre::GpuProgramParameters::ACT_TIME_0_X,
			ACT_COSTIME_0_X = Ogre::GpuProgramParameters::ACT_COSTIME_0_X,
			ACT_SINTIME_0_X = Ogre::GpuProgramParameters::ACT_SINTIME_0_X,
			ACT_TANTIME_0_X = Ogre::GpuProgramParameters::ACT_TANTIME_0_X,
			ACT_TIME_0_X_PACKED = Ogre::GpuProgramParameters::ACT_TIME_0_X_PACKED,
			ACT_TIME_0_1 = Ogre::GpuProgramParameters::ACT_TIME_0_1,
			ACT_COSTIME_0_1 = Ogre::GpuProgramParameters::ACT_COSTIME_0_1,
			ACT_SINTIME_0_1 = Ogre::GpuProgramParameters::ACT_SINTIME_0_1,
			ACT_TANTIME_0_1 = Ogre::GpuProgramParameters::ACT_TANTIME_0_1,
			ACT_TIME_0_1_PACKED = Ogre::GpuProgramParameters::ACT_TIME_0_1_PACKED,
			ACT_TIME_0_2PI = Ogre::GpuProgramParameters::ACT_TIME_0_2PI,
			ACT_COSTIME_0_2PI = Ogre::GpuProgramParameters::ACT_COSTIME_0_2PI,
			ACT_SINTIME_0_2PI = Ogre::GpuProgramParameters::ACT_SINTIME_0_2PI,
			ACT_TANTIME_0_2PI = Ogre::GpuProgramParameters::ACT_TANTIME_0_2PI,
			ACT_TIME_0_2PI_PACKED = Ogre::GpuProgramParameters::ACT_TIME_0_2PI_PACKED,
			ACT_FRAME_TIME = Ogre::GpuProgramParameters::ACT_FRAME_TIME,
			ACT_FPS = Ogre::GpuProgramParameters::ACT_FPS,
			ACT_VIEWPORT_WIDTH = Ogre::GpuProgramParameters::ACT_VIEWPORT_WIDTH,
			ACT_VIEWPORT_HEIGHT = Ogre::GpuProgramParameters::ACT_VIEWPORT_HEIGHT,
			ACT_INVERSE_VIEWPORT_WIDTH = Ogre::GpuProgramParameters::ACT_INVERSE_VIEWPORT_WIDTH,
			ACT_INVERSE_VIEWPORT_HEIGHT = Ogre::GpuProgramParameters::ACT_INVERSE_VIEWPORT_HEIGHT,
			ACT_VIEWPORT_SIZE = Ogre::GpuProgramParameters::ACT_VIEWPORT_SIZE,
			ACT_VIEW_DIRECTION = Ogre::GpuProgramParameters::ACT_VIEW_DIRECTION,
			ACT_VIEW_SIDE_VECTOR = Ogre::GpuProgramParameters::ACT_VIEW_SIDE_VECTOR,
			ACT_VIEW_UP_VECTOR = Ogre::GpuProgramParameters::ACT_VIEW_UP_VECTOR,
			ACT_FOV = Ogre::GpuProgramParameters::ACT_FOV,
			ACT_NEAR_CLIP_DISTANCE = Ogre::GpuProgramParameters::ACT_NEAR_CLIP_DISTANCE,
			ACT_FAR_CLIP_DISTANCE = Ogre::GpuProgramParameters::ACT_FAR_CLIP_DISTANCE,
			ACT_PASS_NUMBER = Ogre::GpuProgramParameters::ACT_PASS_NUMBER,
			ACT_PASS_ITERATION_NUMBER = Ogre::GpuProgramParameters::ACT_PASS_ITERATION_NUMBER,
			ACT_ANIMATION_PARAMETRIC = Ogre::GpuProgramParameters::ACT_ANIMATION_PARAMETRIC,
			ACT_TEXEL_OFFSETS = Ogre::GpuProgramParameters::ACT_TEXEL_OFFSETS,
			ACT_SCENE_DEPTH_RANGE = Ogre::GpuProgramParameters::ACT_SCENE_DEPTH_RANGE,
			ACT_SHADOW_SCENE_DEPTH_RANGE = Ogre::GpuProgramParameters::ACT_SHADOW_SCENE_DEPTH_RANGE,
			ACT_SHADOW_COLOUR = Ogre::GpuProgramParameters::ACT_SHADOW_COLOUR,
			ACT_TEXTURE_SIZE = Ogre::GpuProgramParameters::ACT_TEXTURE_SIZE,
			ACT_INVERSE_TEXTURE_SIZE = Ogre::GpuProgramParameters::ACT_INVERSE_TEXTURE_SIZE,
			ACT_PACKED_TEXTURE_SIZE = Ogre::GpuProgramParameters::ACT_PACKED_TEXTURE_SIZE,
			ACT_TEXTURE_MATRIX = Ogre::GpuProgramParameters::ACT_TEXTURE_MATRIX,
			ACT_LOD_CAMERA_POSITION = Ogre::GpuProgramParameters::ACT_LOD_CAMERA_POSITION,
			ACT_LOD_CAMERA_POSITION_OBJECT_SPACE = Ogre::GpuProgramParameters::ACT_LOD_CAMERA_POSITION_OBJECT_SPACE,
			ACT_LIGHT_CUSTOM = Ogre::GpuProgramParameters::ACT_LIGHT_CUSTOM
		};
	
		public: enum class ACDataType
		{
			ACDT_NONE = Ogre::GpuProgramParameters::ACDT_NONE,
			ACDT_INT = Ogre::GpuProgramParameters::ACDT_INT,
			ACDT_REAL = Ogre::GpuProgramParameters::ACDT_REAL
		};
	
		public: enum class ElementType
		{
			ET_INT = Ogre::GpuProgramParameters::ET_INT,
			ET_REAL = Ogre::GpuProgramParameters::ET_REAL
		};
	
		//################################################################
		//AutoConstantDefinition_NativePtr
		//################################################################
	
		public: value class AutoConstantDefinition_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::GpuProgramParameters::AutoConstantDefinition* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::GpuProgramParameters::AutoConstantType acType
			{
			public:
				Mogre::GpuProgramParameters::AutoConstantType get();
			public:
				void set(Mogre::GpuProgramParameters::AutoConstantType value);
			}
	
			property String^ name
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property size_t elementCount
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property Mogre::GpuProgramParameters::ElementType elementType
			{
			public:
				Mogre::GpuProgramParameters::ElementType get();
			public:
				void set(Mogre::GpuProgramParameters::ElementType value);
			}
	
			property Mogre::GpuProgramParameters::ACDataType dataType
			{
			public:
				Mogre::GpuProgramParameters::ACDataType get();
			public:
				void set(Mogre::GpuProgramParameters::ACDataType value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( GpuProgramParameters::AutoConstantDefinition_NativePtr, Ogre::GpuProgramParameters::AutoConstantDefinition )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static AutoConstantDefinition_NativePtr Create( Mogre::GpuProgramParameters::AutoConstantType _acType, String^ _name, size_t _elementCount, Mogre::GpuProgramParameters::ElementType _elementType, Mogre::GpuProgramParameters::ACDataType _dataType );
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//AutoConstantEntry_NativePtr
		//################################################################
	
		public: value class AutoConstantEntry_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::GpuProgramParameters::AutoConstantEntry* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::GpuProgramParameters::AutoConstantType paramType
			{
			public:
				Mogre::GpuProgramParameters::AutoConstantType get();
			public:
				void set(Mogre::GpuProgramParameters::AutoConstantType value);
			}
	
			property size_t physicalIndex
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t elementCount
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t data
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property Mogre::Real fData
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::uint16 variability
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( GpuProgramParameters::AutoConstantEntry_NativePtr, Ogre::GpuProgramParameters::AutoConstantEntry )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static AutoConstantEntry_NativePtr Create( Mogre::GpuProgramParameters::AutoConstantType theType, size_t theIndex, size_t theData, Mogre::uint16 theVariability, size_t theElemCount );
			static AutoConstantEntry_NativePtr Create( Mogre::GpuProgramParameters::AutoConstantType theType, size_t theIndex, size_t theData, Mogre::uint16 theVariability );
			static AutoConstantEntry_NativePtr Create( Mogre::GpuProgramParameters::AutoConstantType theType, size_t theIndex, Mogre::Real theData, Mogre::uint16 theVariability, size_t theElemCount );
			static AutoConstantEntry_NativePtr Create( Mogre::GpuProgramParameters::AutoConstantType theType, size_t theIndex, Mogre::Real theData, Mogre::uint16 theVariability );
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr
		#define STLDECL_NATIVETYPE Ogre::GpuProgramParameters::AutoConstantEntry
		public: INC_DECLARE_STLVECTOR( AutoConstantList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::GpuSharedParametersUsage^
		#define STLDECL_NATIVETYPE Ogre::GpuSharedParametersUsage
		public: INC_DECLARE_STLVECTOR( GpuSharedParamUsageList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( AutoConstantIterator, Ogre::GpuProgramParameters::AutoConstantIterator, Mogre::GpuProgramParameters::AutoConstantList, Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr, Ogre::GpuProgramParameters::AutoConstantEntry )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		GpuProgramParameters( Ogre::GpuProgramParameters* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~GpuProgramParameters()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::GpuProgramParameters* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		GpuProgramParameters( );
		GpuProgramParameters( Mogre::GpuProgramParameters^ oth );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property size_t AutoConstantCount
		{
		public:
			size_t get();
		}
	
		property Mogre::GpuNamedConstants^ ConstantDefinitions
		{
		public:
			Mogre::GpuNamedConstants^ get();
		}
	
		property bool HasAutoConstants
		{
		public:
			bool get();
		}
	
		property bool HasLogicalIndexedParameters
		{
		public:
			bool get();
		}
	
		property bool HasNamedParameters
		{
		public:
			bool get();
		}
	
		property bool HasPassIterationNumber
		{
		public:
			bool get();
		}
	
		property size_t NumAutoConstantDefinitions
		{
		public:
			static size_t get();
		}
	
		property size_t PassIterationNumberIndex
		{
		public:
			size_t get();
		}
	
		property bool TransposeMatrices
		{
		public:
			bool get();
		public:
			void set(bool val);
		}
	
		void CopyTo(GpuProgramParameters^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void _setNamedConstants( Mogre::GpuNamedConstantsPtr^ constantmap );
	
		void _setLogicalIndexes( Mogre::GpuLogicalBufferStructPtr^ floatIndexMap, Mogre::GpuLogicalBufferStructPtr^ intIndexMap );
	
		void SetConstant( size_t index, Mogre::Vector4 vec );
	
		void SetConstant( size_t index, Mogre::Real val );
	
		void SetConstant( size_t index, Mogre::Vector3 vec );
	
		void SetConstant( size_t index, Mogre::Matrix4^ m );
	
		void SetConstant( size_t index, const Mogre::Matrix4::NativeValue* m, size_t numEntries );
	
		void SetConstant( size_t index, const float* val, size_t count );
	
		void SetConstant( size_t index, const double* val, size_t count );
	
		void SetConstant( size_t index, Mogre::ColourValue colour );
	
		void SetConstant( size_t index, const int* val, size_t count );
	
		void _writeRawConstants( size_t physicalIndex, const float* val, size_t count );
	
		void _writeRawConstants( size_t physicalIndex, const double* val, size_t count );
	
		void _writeRawConstants( size_t physicalIndex, const int* val, size_t count );
	
		void _readRawConstants( size_t physicalIndex, size_t count, [Out] float% dest );
	
		void _readRawConstants( size_t physicalIndex, size_t count, [Out] int% dest );
	
		void _writeRawConstant( size_t physicalIndex, Mogre::Vector4 vec, size_t count );
		void _writeRawConstant( size_t physicalIndex, Mogre::Vector4 vec );
	
		void _writeRawConstant( size_t physicalIndex, Mogre::Real val );
	
		void _writeRawConstant( size_t physicalIndex, int val );
	
		void _writeRawConstant( size_t physicalIndex, Mogre::Vector3 vec );
	
		void _writeRawConstant( size_t physicalIndex, Mogre::Matrix4^ m, size_t elementCount );
	
		void _writeRawConstant( size_t physicalIndex, const Mogre::Matrix4::NativeValue* m, size_t numEntries );
	
		void _writeRawConstant( size_t physicalIndex, Mogre::ColourValue colour, size_t count );
		void _writeRawConstant( size_t physicalIndex, Mogre::ColourValue colour );
	
		Mogre::GpuConstantDefinitionIterator^ GetConstantDefinitionIterator( );
	
		Mogre::GpuConstantDefinition_NativePtr GetConstantDefinition( String^ name );
	
		Mogre::GpuLogicalBufferStructPtr^ GetFloatLogicalBufferStruct( );
	
		size_t GetFloatLogicalIndexForPhysicalIndex( size_t physicalIndex );
	
		size_t GetIntLogicalIndexForPhysicalIndex( size_t physicalIndex );
	
		Mogre::GpuLogicalBufferStructPtr^ GetIntLogicalBufferStruct( );
	
		Mogre::Const_FloatConstantList^ GetFloatConstantList( );
	
		float* GetFloatPointer( size_t pos );
	
		Mogre::Const_IntConstantList^ GetIntConstantList( );
	
		int* GetIntPointer( size_t pos );
	
		Mogre::GpuProgramParameters::Const_AutoConstantList^ GetAutoConstantList( );
	
		void SetAutoConstant( size_t index, Mogre::GpuProgramParameters::AutoConstantType acType, size_t extraInfo );
		void SetAutoConstant( size_t index, Mogre::GpuProgramParameters::AutoConstantType acType );
	
		void SetAutoConstantReal( size_t index, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::Real rData );
	
		void SetAutoConstant( size_t index, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::uint16 extraInfo1, Mogre::uint16 extraInfo2 );
	
		void _setRawAutoConstant( size_t physicalIndex, Mogre::GpuProgramParameters::AutoConstantType acType, size_t extraInfo, Mogre::uint16 variability, size_t elementSize );
		void _setRawAutoConstant( size_t physicalIndex, Mogre::GpuProgramParameters::AutoConstantType acType, size_t extraInfo, Mogre::uint16 variability );
	
		void _setRawAutoConstantReal( size_t physicalIndex, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::Real rData, Mogre::uint16 variability, size_t elementSize );
		void _setRawAutoConstantReal( size_t physicalIndex, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::Real rData, Mogre::uint16 variability );
	
		void ClearAutoConstant( size_t index );
	
		void SetConstantFromTime( size_t index, Mogre::Real factor );
	
		void ClearAutoConstants( );
	
		Mogre::GpuProgramParameters::AutoConstantIterator^ GetAutoConstantIterator( );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr GetAutoConstantEntry( size_t index );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr FindFloatAutoConstantEntry( size_t logicalIndex );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr FindIntAutoConstantEntry( size_t logicalIndex );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr FindAutoConstantEntry( String^ paramName );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr _findRawAutoConstantEntryFloat( size_t physicalIndex );
	
		Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr _findRawAutoConstantEntryInt( size_t physicalIndex );
	
		void SetIgnoreMissingParams( bool state );
	
		void SetNamedConstant( String^ name, Mogre::Real val );
	
		void SetNamedConstant( String^ name, int val );
	
		void SetNamedConstant( String^ name, Mogre::Vector4 vec );
	
		void SetNamedConstant( String^ name, Mogre::Vector3 vec );
	
		void SetNamedConstant( String^ name, Mogre::Matrix4^ m );
	
		void SetNamedConstant( String^ name, const Mogre::Matrix4::NativeValue* m, size_t numEntries );
	
		void SetNamedConstant( String^ name, const float* val, size_t count, size_t multiple );
		void SetNamedConstant( String^ name, const float* val, size_t count );
	
		void SetNamedConstant( String^ name, const double* val, size_t count, size_t multiple );
		void SetNamedConstant( String^ name, const double* val, size_t count );
	
		void SetNamedConstant( String^ name, Mogre::ColourValue colour );
	
		void SetNamedConstant( String^ name, const int* val, size_t count, size_t multiple );
		void SetNamedConstant( String^ name, const int* val, size_t count );
	
		void SetNamedAutoConstant( String^ name, Mogre::GpuProgramParameters::AutoConstantType acType, size_t extraInfo );
		void SetNamedAutoConstant( String^ name, Mogre::GpuProgramParameters::AutoConstantType acType );
	
		void SetNamedAutoConstantReal( String^ name, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::Real rData );
	
		void SetNamedAutoConstant( String^ name, Mogre::GpuProgramParameters::AutoConstantType acType, Mogre::uint16 extraInfo1, Mogre::uint16 extraInfo2 );
	
		void SetNamedConstantFromTime( String^ name, Mogre::Real factor );
	
		void ClearNamedAutoConstant( String^ name );
	
		Mogre::GpuConstantDefinition_NativePtr _findNamedConstantDefinition( String^ name, bool throwExceptionIfMissing );
		Mogre::GpuConstantDefinition_NativePtr _findNamedConstantDefinition( String^ name );
	
		size_t _getFloatConstantPhysicalIndex( size_t logicalIndex, size_t requestedSize, Mogre::uint16 variability );
	
		size_t _getIntConstantPhysicalIndex( size_t logicalIndex, size_t requestedSize, Mogre::uint16 variability );
	
		void CopyConstantsFrom( Mogre::GpuProgramParameters^ source );
	
		void CopyMatchingNamedConstantsFrom( Mogre::GpuProgramParameters^ source );
	
		void IncPassIterationNumber( );
	
		void AddSharedParameters( Mogre::GpuSharedParametersPtr^ sharedParams );
	
		void AddSharedParameters( String^ sharedParamsName );
	
		bool IsUsingSharedParameters( String^ sharedParamsName );
	
		void RemoveSharedParameters( String^ sharedParamsName );
	
		void RemoveAllSharedParameters( );
	
		Mogre::GpuProgramParameters::Const_GpuSharedParamUsageList^ GetSharedParameters( );
	
		void _copySharedParams( );
	
		static Mogre::GpuProgramParameters::AutoConstantDefinition_NativePtr GetAutoConstantDefinition( String^ name );
	
		static Mogre::GpuProgramParameters::AutoConstantDefinition_NativePtr GetAutoConstantDefinition( size_t idx );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( GpuProgramParameters )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::GpuConstantDefinition_NativePtr
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::GpuConstantDefinition
	INC_DECLARE_STLMAP( GpuConstantDefinitionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	public INC_DECLARE_MAP_ITERATOR( GpuConstantDefinitionIterator, Ogre::GpuConstantDefinitionIterator, Mogre::GpuConstantDefinitionMap, Mogre::GpuConstantDefinition_NativePtr, Ogre::GpuConstantDefinition, String^, Ogre::String )
	
	public ref class GpuNamedConstantsPtr : public GpuNamedConstants
	{
	public protected:
			Ogre::GpuNamedConstantsPtr* _sharedPtr;
	
		GpuNamedConstantsPtr(Ogre::GpuNamedConstantsPtr& sharedPtr) : GpuNamedConstants( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::GpuNamedConstantsPtr(sharedPtr);
		}
	
		!GpuNamedConstantsPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~GpuNamedConstantsPtr()
		{
			this->!GpuNamedConstantsPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( GpuNamedConstantsPtr )
	
		GpuNamedConstantsPtr(GpuNamedConstants^ obj) : GpuNamedConstants( obj->_native )
		{
			_sharedPtr = new Ogre::GpuNamedConstantsPtr( static_cast<Ogre::GpuNamedConstants*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			GpuNamedConstantsPtr^ clr = dynamic_cast<GpuNamedConstantsPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(GpuNamedConstantsPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (GpuNamedConstantsPtr^ val1, GpuNamedConstantsPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (GpuNamedConstantsPtr^ val1, GpuNamedConstantsPtr^ val2)
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
	
		property GpuNamedConstants^ Target
		{
			GpuNamedConstants^ get()
			{
				return static_cast<Ogre::GpuNamedConstants*>(_native);
			}
		}
	};
	
	
	public ref class GpuLogicalBufferStructPtr : public GpuLogicalBufferStruct
	{
	public protected:
			Ogre::GpuLogicalBufferStructPtr* _sharedPtr;
	
		GpuLogicalBufferStructPtr(Ogre::GpuLogicalBufferStructPtr& sharedPtr) : GpuLogicalBufferStruct( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::GpuLogicalBufferStructPtr(sharedPtr);
		}
	
		!GpuLogicalBufferStructPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~GpuLogicalBufferStructPtr()
		{
			this->!GpuLogicalBufferStructPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( GpuLogicalBufferStructPtr )
	
		GpuLogicalBufferStructPtr(GpuLogicalBufferStruct^ obj) : GpuLogicalBufferStruct( obj->_native )
		{
			_sharedPtr = new Ogre::GpuLogicalBufferStructPtr( static_cast<Ogre::GpuLogicalBufferStruct*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			GpuLogicalBufferStructPtr^ clr = dynamic_cast<GpuLogicalBufferStructPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(GpuLogicalBufferStructPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (GpuLogicalBufferStructPtr^ val1, GpuLogicalBufferStructPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (GpuLogicalBufferStructPtr^ val1, GpuLogicalBufferStructPtr^ val2)
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
	
		property GpuLogicalBufferStruct^ Target
		{
			GpuLogicalBufferStruct^ get()
			{
				return static_cast<Ogre::GpuLogicalBufferStruct*>(_native);
			}
		}
	};
	
	
	#define STLDECL_MANAGEDTYPE float
	#define STLDECL_NATIVETYPE float
	INC_DECLARE_STLVECTOR( FloatConstantList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE int
	#define STLDECL_NATIVETYPE int
	INC_DECLARE_STLVECTOR( IntConstantList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public ref class GpuSharedParametersPtr : public GpuSharedParameters
	{
	public protected:
			Ogre::GpuSharedParametersPtr* _sharedPtr;
	
		GpuSharedParametersPtr(Ogre::GpuSharedParametersPtr& sharedPtr) : GpuSharedParameters( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::GpuSharedParametersPtr(sharedPtr);
		}
	
		!GpuSharedParametersPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~GpuSharedParametersPtr()
		{
			this->!GpuSharedParametersPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( GpuSharedParametersPtr )
	
		GpuSharedParametersPtr(GpuSharedParameters^ obj) : GpuSharedParameters( obj->_native )
		{
			_sharedPtr = new Ogre::GpuSharedParametersPtr( static_cast<Ogre::GpuSharedParameters*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			GpuSharedParametersPtr^ clr = dynamic_cast<GpuSharedParametersPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(GpuSharedParametersPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (GpuSharedParametersPtr^ val1, GpuSharedParametersPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (GpuSharedParametersPtr^ val1, GpuSharedParametersPtr^ val2)
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
	
		property GpuSharedParameters^ Target
		{
			GpuSharedParameters^ get()
			{
				return static_cast<Ogre::GpuSharedParameters*>(_native);
			}
		}
	};
	
	
	public ref class GpuProgramParametersSharedPtr : public GpuProgramParameters
	{
	public protected:
			Ogre::GpuProgramParametersSharedPtr* _sharedPtr;
	
		GpuProgramParametersSharedPtr(Ogre::GpuProgramParametersSharedPtr& sharedPtr) : GpuProgramParameters( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::GpuProgramParametersSharedPtr(sharedPtr);
		}
	
		!GpuProgramParametersSharedPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~GpuProgramParametersSharedPtr()
		{
			this->!GpuProgramParametersSharedPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( GpuProgramParametersSharedPtr )
	
		GpuProgramParametersSharedPtr(GpuProgramParameters^ obj) : GpuProgramParameters( obj->_native )
		{
			_sharedPtr = new Ogre::GpuProgramParametersSharedPtr( static_cast<Ogre::GpuProgramParameters*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			GpuProgramParametersSharedPtr^ clr = dynamic_cast<GpuProgramParametersSharedPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(GpuProgramParametersSharedPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (GpuProgramParametersSharedPtr^ val1, GpuProgramParametersSharedPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (GpuProgramParametersSharedPtr^ val1, GpuProgramParametersSharedPtr^ val2)
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
	
		property GpuProgramParameters^ Target
		{
			GpuProgramParameters^ get()
			{
				return static_cast<Ogre::GpuProgramParameters*>(_native);
			}
		}
	};
	
	

}
