/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTechnique.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreRenderSystemCapabilities.h"
#include "MogrePass.h"
#include "MogreCommon.h"
#include "MogreBlendMode.h"

namespace Mogre
{
	//################################################################
	//Technique
	//################################################################
	
	public ref class Technique : public INativePointer
	{
		//Nested Types
		public: ref class GPUVendorRuleList;
		public: ref class GPUDeviceNameRuleList;
		public: ref class GPUDeviceNameRule;
		public: ref class GPUVendorRule;
	
		public: enum class IncludeOrExclude
		{
			INCLUDE = Ogre::Technique::INCLUDE,
			EXCLUDE = Ogre::Technique::EXCLUDE
		};
	
		//################################################################
		//GPUDeviceNameRule
		//################################################################
	
		public: ref class GPUDeviceNameRule : public INativePointer
		{
			//Nested Types
	
			
			          public:
			          property String^ DevicePattern {
			          public:
			            String^ get() {
			              return TO_CLR_STRING(_native->devicePattern);
			            }
			          public:
			            void set(String^ dp) {
			              DECLARE_NATIVE_STRING(odp, dp);
			              _native->devicePattern = odp;
			            }
			          }
			        
	
			//Private Declarations
		private protected:
	
			virtual void ClearNativePtr() = INativePointer::ClearNativePtr
			{
				_native = 0;
			}
	
			//Internal Declarations
		public protected:
			GPUDeviceNameRule( Ogre::Technique::GPUDeviceNameRule* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~GPUDeviceNameRule()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::Technique::GPUDeviceNameRule* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			GPUDeviceNameRule( );
			GPUDeviceNameRule( String^ pattern, Mogre::Technique::IncludeOrExclude ie, bool caseSen );
	
	
			property CLRHandle _CLRHandle
			{
			public:
				CLRHandle get();
			public:
				void set(CLRHandle value);
			}
	
			property Mogre::Technique::IncludeOrExclude IncludeOrExclude
			{
			public:
				Mogre::Technique::IncludeOrExclude get();
			public:
				void set(Mogre::Technique::IncludeOrExclude value);
			}
	
			property bool CaseSensitive
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Technique::GPUDeviceNameRule )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//GPUVendorRule
		//################################################################
	
		public: ref class GPUVendorRule : public INativePointer
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
			GPUVendorRule( Ogre::Technique::GPUVendorRule* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~GPUVendorRule()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::Technique::GPUVendorRule* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			GPUVendorRule( );
			GPUVendorRule( Mogre::GPUVendor v, Mogre::Technique::IncludeOrExclude ie );
	
	
			property CLRHandle _CLRHandle
			{
			public:
				CLRHandle get();
			public:
				void set(CLRHandle value);
			}
	
			property Mogre::GPUVendor Vendor
			{
			public:
				Mogre::GPUVendor get();
			public:
				void set(Mogre::GPUVendor value);
			}
	
			property Mogre::Technique::IncludeOrExclude IncludeOrExclude
			{
			public:
				Mogre::Technique::IncludeOrExclude get();
			public:
				void set(Mogre::Technique::IncludeOrExclude value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Technique::GPUVendorRule )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Technique::GPUVendorRule^
		#define STLDECL_NATIVETYPE Ogre::Technique::GPUVendorRule
		public: INC_DECLARE_STLVECTOR( GPUVendorRuleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::Technique::GPUDeviceNameRule^
		#define STLDECL_NATIVETYPE Ogre::Technique::GPUDeviceNameRule
		public: INC_DECLARE_STLVECTOR( GPUDeviceNameRuleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR_NOCONSTRUCTOR( PassIterator, Ogre::Technique::PassIterator, Mogre::Technique::Passes, Mogre::Pass^, Ogre::Pass* )
	
		public: INC_DECLARE_ITERATOR( IlluminationPassIterator, Ogre::Technique::IlluminationPassIterator, Mogre::IlluminationPassList, Mogre::IlluminationPass_NativePtr, Ogre::IlluminationPass* )
	
		public: INC_DECLARE_ITERATOR( GPUVendorRuleIterator, Ogre::Technique::GPUVendorRuleIterator, Mogre::Technique::GPUVendorRuleList, Mogre::Technique::GPUVendorRule^, Ogre::Technique::GPUVendorRule )
	
		public: INC_DECLARE_ITERATOR( GPUDeviceNameRuleIterator, Ogre::Technique::GPUDeviceNameRuleIterator, Mogre::Technique::GPUDeviceNameRuleList, Mogre::Technique::GPUDeviceNameRule^, Ogre::Technique::GPUDeviceNameRule )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Technique( Ogre::Technique* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Technique()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Technique* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Technique( Mogre::Material^ parent );
		Technique( Mogre::Material^ parent, Mogre::Technique^ oth );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property bool HasColourWriteDisabled
		{
		public:
			bool get();
		}
	
		property bool IsDepthCheckEnabled
		{
		public:
			bool get();
		}
	
		property bool IsDepthWriteEnabled
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsSupported
		{
		public:
			bool get();
		}
	
		property bool IsTransparent
		{
		public:
			bool get();
		}
	
		property bool IsTransparentSortingEnabled
		{
		public:
			bool get();
		}
	
		property bool IsTransparentSortingForced
		{
		public:
			bool get();
		}
	
		property unsigned short LodIndex
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short index);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property unsigned short NumPasses
		{
		public:
			unsigned short get();
		}
	
		property Mogre::Material^ Parent
		{
		public:
			Mogre::Material^ get();
		}
	
		property String^ ResourceGroup
		{
		public:
			String^ get();
		}
	
		property String^ SchemeName
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		property Mogre::UserObjectBindings^ UserObjectBindings
		{
		public:
			Mogre::UserObjectBindings^ get();
		}
	
		String^ _compile( bool autoManageTextureUnits );
	
		void _compileIlluminationPasses( );
	
		Mogre::Pass^ CreatePass( );
	
		Mogre::Pass^ GetPass( unsigned short index );
	
		Mogre::Pass^ GetPass( String^ name );
	
		void RemovePass( unsigned short index );
	
		void RemoveAllPasses( );
	
		bool MovePass( unsigned short sourceIndex, unsigned short destinationIndex );
	
		Mogre::Technique::PassIterator^ GetPassIterator( );
	
		Mogre::Technique::IlluminationPassIterator^ GetIlluminationPassIterator( );
	
		void CopyTo(Technique^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void _prepare( );
	
		void _unprepare( );
	
		void _load( );
	
		void _unload( );
	
		void _notifyNeedsRecompile( );
	
		Mogre::MaterialPtr^ GetShadowCasterMaterial( );
	
		void SetShadowCasterMaterial( Mogre::MaterialPtr^ val );
	
		void SetShadowCasterMaterial( String^ name );
	
		Mogre::MaterialPtr^ GetShadowReceiverMaterial( );
	
		void SetShadowReceiverMaterial( Mogre::MaterialPtr^ val );
	
		void SetShadowReceiverMaterial( String^ name );
	
		void SetPointSize( Mogre::Real ps );
	
		void SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetAmbient( Mogre::ColourValue ambient );
	
		void SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetDiffuse( Mogre::ColourValue diffuse );
	
		void SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetSpecular( Mogre::ColourValue specular );
	
		void SetShininess( Mogre::Real val );
	
		void SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetSelfIllumination( Mogre::ColourValue selfIllum );
	
		void SetDepthCheckEnabled( bool enabled );
	
		void SetDepthWriteEnabled( bool enabled );
	
		void SetDepthFunction( Mogre::CompareFunction func );
	
		void SetColourWriteEnabled( bool enabled );
	
		void SetCullingMode( Mogre::CullingMode mode );
	
		void SetManualCullingMode( Mogre::ManualCullingMode mode );
	
		void SetLightingEnabled( bool enabled );
	
		void SetShadingMode( Mogre::ShadeOptions mode );
	
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour );
		void SetFog( bool overrideScene, Mogre::FogMode mode );
		void SetFog( bool overrideScene );
	
		void SetDepthBias( float constantBias, float slopeScaleBias );
	
		void SetTextureFiltering( Mogre::TextureFilterOptions filterType );
	
		void SetTextureAnisotropy( unsigned int maxAniso );
	
		void SetSceneBlending( Mogre::SceneBlendType sbt );
	
		void SetSeparateSceneBlending( Mogre::SceneBlendType sbt, Mogre::SceneBlendType sbta );
	
		void SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		void SetSeparateSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor, Mogre::SceneBlendFactor sourceFactorAlpha, Mogre::SceneBlendFactor destFactorAlpha );
	
		unsigned short _getSchemeIndex( );
	
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply );
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList );
	
		void AddGPUVendorRule( Mogre::GPUVendor vendor, Mogre::Technique::IncludeOrExclude includeOrExclude );
	
		void AddGPUVendorRule( Mogre::Technique::GPUVendorRule^ rule );
	
		void RemoveGPUVendorRule( Mogre::GPUVendor vendor );
	
		Mogre::Technique::GPUVendorRuleIterator^ GetGPUVendorRuleIterator( );
	
		void AddGPUDeviceNameRule( String^ devicePattern, Mogre::Technique::IncludeOrExclude includeOrExclude, bool caseSensitive );
		void AddGPUDeviceNameRule( String^ devicePattern, Mogre::Technique::IncludeOrExclude includeOrExclude );
	
		void AddGPUDeviceNameRule( Mogre::Technique::GPUDeviceNameRule^ rule );
	
		void RemoveGPUDeviceNameRule( String^ devicePattern );
	
		Mogre::Technique::GPUDeviceNameRuleIterator^ GetGPUDeviceNameRuleIterator( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Technique )
	
		//Protected Declarations
	protected public:
	
	};
	

}
