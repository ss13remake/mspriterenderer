/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderSystemCapabilities.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class GPUVendor
	{
		GPU_UNKNOWN = Ogre::GPU_UNKNOWN,
		GPU_NVIDIA = Ogre::GPU_NVIDIA,
		GPU_ATI = Ogre::GPU_ATI,
		GPU_INTEL = Ogre::GPU_INTEL,
		GPU_S3 = Ogre::GPU_S3,
		GPU_MATROX = Ogre::GPU_MATROX,
		GPU_3DLABS = Ogre::GPU_3DLABS,
		GPU_SIS = Ogre::GPU_SIS,
		GPU_IMAGINATION_TECHNOLOGIES = Ogre::GPU_IMAGINATION_TECHNOLOGIES,
		GPU_APPLE = Ogre::GPU_APPLE,
		GPU_NOKIA = Ogre::GPU_NOKIA,
		GPU_VENDOR_COUNT = Ogre::GPU_VENDOR_COUNT
	};
	
	public enum class Capabilities
	{
		RSC_AUTOMIPMAP = Ogre::RSC_AUTOMIPMAP,
		RSC_BLENDING = Ogre::RSC_BLENDING,
		RSC_ANISOTROPY = Ogre::RSC_ANISOTROPY,
		RSC_DOT3 = Ogre::RSC_DOT3,
		RSC_CUBEMAPPING = Ogre::RSC_CUBEMAPPING,
		RSC_HWSTENCIL = Ogre::RSC_HWSTENCIL,
		RSC_VBO = Ogre::RSC_VBO,
		RSC_VERTEX_PROGRAM = Ogre::RSC_VERTEX_PROGRAM,
		RSC_FRAGMENT_PROGRAM = Ogre::RSC_FRAGMENT_PROGRAM,
		RSC_SCISSOR_TEST = Ogre::RSC_SCISSOR_TEST,
		RSC_TWO_SIDED_STENCIL = Ogre::RSC_TWO_SIDED_STENCIL,
		RSC_STENCIL_WRAP = Ogre::RSC_STENCIL_WRAP,
		RSC_HWOCCLUSION = Ogre::RSC_HWOCCLUSION,
		RSC_USER_CLIP_PLANES = Ogre::RSC_USER_CLIP_PLANES,
		RSC_VERTEX_FORMAT_UBYTE4 = Ogre::RSC_VERTEX_FORMAT_UBYTE4,
		RSC_INFINITE_FAR_PLANE = Ogre::RSC_INFINITE_FAR_PLANE,
		RSC_HWRENDER_TO_TEXTURE = Ogre::RSC_HWRENDER_TO_TEXTURE,
		RSC_TEXTURE_FLOAT = Ogre::RSC_TEXTURE_FLOAT,
		RSC_NON_POWER_OF_2_TEXTURES = Ogre::RSC_NON_POWER_OF_2_TEXTURES,
		RSC_TEXTURE_3D = Ogre::RSC_TEXTURE_3D,
		RSC_POINT_SPRITES = Ogre::RSC_POINT_SPRITES,
		RSC_POINT_EXTENDED_PARAMETERS = Ogre::RSC_POINT_EXTENDED_PARAMETERS,
		RSC_VERTEX_TEXTURE_FETCH = Ogre::RSC_VERTEX_TEXTURE_FETCH,
		RSC_MIPMAP_LOD_BIAS = Ogre::RSC_MIPMAP_LOD_BIAS,
		RSC_GEOMETRY_PROGRAM = Ogre::RSC_GEOMETRY_PROGRAM,
		RSC_HWRENDER_TO_VERTEX_BUFFER = Ogre::RSC_HWRENDER_TO_VERTEX_BUFFER,
		RSC_TEXTURE_COMPRESSION = Ogre::RSC_TEXTURE_COMPRESSION,
		RSC_TEXTURE_COMPRESSION_DXT = Ogre::RSC_TEXTURE_COMPRESSION_DXT,
		RSC_TEXTURE_COMPRESSION_VTC = Ogre::RSC_TEXTURE_COMPRESSION_VTC,
		RSC_TEXTURE_COMPRESSION_PVRTC = Ogre::RSC_TEXTURE_COMPRESSION_PVRTC,
		RSC_FIXED_FUNCTION = Ogre::RSC_FIXED_FUNCTION,
		RSC_MRT_DIFFERENT_BIT_DEPTHS = Ogre::RSC_MRT_DIFFERENT_BIT_DEPTHS,
		RSC_ALPHA_TO_COVERAGE = Ogre::RSC_ALPHA_TO_COVERAGE,
		RSC_ADVANCED_BLEND_OPERATIONS = Ogre::RSC_ADVANCED_BLEND_OPERATIONS,
		RSC_PERSTAGECONSTANT = Ogre::RSC_PERSTAGECONSTANT,
		RSC_GL1_5_NOVBO = Ogre::RSC_GL1_5_NOVBO,
		RSC_FBO = Ogre::RSC_FBO,
		RSC_FBO_ARB = Ogre::RSC_FBO_ARB,
		RSC_FBO_ATI = Ogre::RSC_FBO_ATI,
		RSC_PBUFFER = Ogre::RSC_PBUFFER,
		RSC_GL1_5_NOHWOCCLUSION = Ogre::RSC_GL1_5_NOHWOCCLUSION,
		RSC_POINT_EXTENDED_PARAMETERS_ARB = Ogre::RSC_POINT_EXTENDED_PARAMETERS_ARB,
		RSC_POINT_EXTENDED_PARAMETERS_EXT = Ogre::RSC_POINT_EXTENDED_PARAMETERS_EXT
	};
	
	public enum class CapabilitiesCategory
	{
		CAPS_CATEGORY_COMMON = Ogre::CAPS_CATEGORY_COMMON,
		CAPS_CATEGORY_COMMON_2 = Ogre::CAPS_CATEGORY_COMMON_2,
		CAPS_CATEGORY_D3D9 = Ogre::CAPS_CATEGORY_D3D9,
		CAPS_CATEGORY_GL = Ogre::CAPS_CATEGORY_GL,
		CAPS_CATEGORY_COUNT = Ogre::CAPS_CATEGORY_COUNT
	};
	
	//################################################################
	//DriverVersion
	//################################################################
	
	[StructLayout(LayoutKind::Sequential)]
	public value class DriverVersion
	{
		//Nested Types
	
		
		        public:
		          virtual System::String^ ToString() override {
		            return System::String::Format("{0}.{1}.{2}.{3}", major, minor, release, build);
		          }
		      
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		int major;
	
		int minor;
	
		int release;
	
		int build;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( DriverVersion )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderSystemCapabilities
	//################################################################
	
	public ref class RenderSystemCapabilities : public INativePointer
	{
		//Nested Types
		public: ref class ShaderProfiles;
	
		#define STLDECL_MANAGEDTYPE String^
		#define STLDECL_NATIVETYPE Ogre::String
		public: INC_DECLARE_STLSET( ShaderProfiles, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		RenderSystemCapabilities( Ogre::RenderSystemCapabilities* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RenderSystemCapabilities()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RenderSystemCapabilities* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RenderSystemCapabilities( );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property String^ DeviceName
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property Mogre::DriverVersion DriverVersion
		{
		public:
			Mogre::DriverVersion get();
		public:
			void set(Mogre::DriverVersion version);
		}
	
		property Mogre::ushort FragmentProgramConstantBoolCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort FragmentProgramConstantFloatCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort FragmentProgramConstantIntCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort GeometryProgramConstantBoolCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort GeometryProgramConstantFloatCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort GeometryProgramConstantIntCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property int GeometryProgramNumOutputVertices
		{
		public:
			int get();
		public:
			void set(int numOutputVertices);
		}
	
		property Mogre::Real MaxPointSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real s);
		}
	
		property bool NonPOW2TexturesLimited
		{
		public:
			bool get();
		public:
			void set(bool l);
		}
	
		property Mogre::ushort NumMultiRenderTargets
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort NumTextureUnits
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort NumVertexBlendMatrices
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort NumVertexTextureUnits
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort n);
		}
	
		property Mogre::ushort NumWorldMatrices
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property String^ RenderSystemName
		{
		public:
			String^ get();
		public:
			void set(String^ rs);
		}
	
		property Mogre::ushort StencilBufferBitDepth
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::GPUVendor Vendor
		{
		public:
			Mogre::GPUVendor get();
		public:
			void set(Mogre::GPUVendor v);
		}
	
		property Mogre::ushort VertexProgramConstantBoolCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort VertexProgramConstantFloatCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort VertexProgramConstantIntCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property bool VertexTextureUnitsShared
		{
		public:
			bool get();
		public:
			void set(bool shared);
		}
	
		size_t CalculateSize( );
	
		void ParseDriverVersionFromString( String^ versionString );
	
		void ParseVendorFromString( String^ vendorString );
	
		bool IsDriverOlderThanVersion( Mogre::DriverVersion v );
	
		bool IsCapabilityRenderSystemSpecific( Mogre::Capabilities c );
	
		void SetCapability( Mogre::Capabilities c );
	
		void UnsetCapability( Mogre::Capabilities c );
	
		bool HasCapability( Mogre::Capabilities c );
	
		void AddShaderProfile( String^ profile );
	
		void RemoveShaderProfile( String^ profile );
	
		bool IsShaderProfileSupported( String^ profile );
	
		Mogre::RenderSystemCapabilities::Const_ShaderProfiles^ GetSupportedShaderProfiles( );
	
		void SetCategoryRelevant( Mogre::CapabilitiesCategory cat, bool relevant );
	
		bool IsCategoryRelevant( Mogre::CapabilitiesCategory cat );
	
		void Log( Mogre::Log^ pLog );
	
		static Mogre::GPUVendor VendorFromString( String^ vendorString );
	
		static String^ VendorToString( Mogre::GPUVendor v );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RenderSystemCapabilities )
	
		//Protected Declarations
	protected public:
	
	};
	

}
