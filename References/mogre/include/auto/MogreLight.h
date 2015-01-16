/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreLight.h"
#pragma managed(pop)
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogrePlaneBoundedVolume.h"
#include "MogreGpuProgramParams.h"

namespace Mogre
{
	//################################################################
	//Light
	//################################################################
	
	public ref class Light : public MovableObject
	{
		//Nested Types
	
		public: enum class LightTypes
		{
			LT_POINT = Ogre::Light::LT_POINT,
			LT_DIRECTIONAL = Ogre::Light::LT_DIRECTIONAL,
			LT_SPOTLIGHT = Ogre::Light::LT_SPOTLIGHT
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Light( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Light( );
		Light( String^ name );
	
	
		property Mogre::Real tempSquareDist
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real AttenuationConstant
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real AttenuationLinear
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real AttenuationQuadric
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real AttenuationRange
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Vector3 DerivedDirection
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::ColourValue DiffuseColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Vector3 Direction
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property Mogre::Real PowerScale
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real power);
		}
	
		property Mogre::Real ShadowFarClipDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real farClip);
		}
	
		property Mogre::Real ShadowFarDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real distance);
		}
	
		property Mogre::Real ShadowFarDistanceSquared
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real ShadowNearClipDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real nearClip);
		}
	
		property Mogre::ColourValue SpecularColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Real SpotlightFalloff
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real val);
		}
	
		property Mogre::Radian SpotlightInnerAngle
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian val);
		}
	
		property Mogre::Radian SpotlightOuterAngle
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian val);
		}
	
		property Mogre::Light::LightTypes Type
		{
		public:
			Mogre::Light::LightTypes get();
		public:
			void set(Mogre::Light::LightTypes type);
		}
	
		property Mogre::uint32 TypeFlags
		{
		public:
			Mogre::uint32 get();
		}
	
		property bool Visible
		{
		public:
			bool get();
		public:
			void set(bool visible);
		}
	
		void _Init_CLRObject( );
	
		void _calcTempSquareDist( Mogre::Vector3 worldPos );
	
		void SetDiffuseColour( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetSpecularColour( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetAttenuation( Mogre::Real range, Mogre::Real constant, Mogre::Real linear, Mogre::Real quadratic );
	
		void SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetSpotlightRange( Mogre::Radian innerAngle, Mogre::Radian outerAngle, Mogre::Real falloff );
		void SetSpotlightRange( Mogre::Radian innerAngle, Mogre::Radian outerAngle );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void _notifyMoved( );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		Mogre::Vector3 GetDerivedPosition( bool cameraRelativeIfSet );
		Mogre::Vector3 GetDerivedPosition( );
	
		Mogre::Vector4 GetAs4DVector( bool cameraRelativeIfSet );
		Mogre::Vector4 GetAs4DVector( );
	
		Mogre::PlaneBoundedVolume^ _getNearClipVolume( Mogre::Camera^ cam );
	
		Mogre::Const_PlaneBoundedVolumeList^ _getFrustumClipVolumes( Mogre::Camera^ cam );
	
		virtual Mogre::AnimableValuePtr^ CreateAnimableValue( String^ valueName ) override;
	
		void SetCustomShadowCameraSetup( Mogre::ShadowCameraSetupPtr^ customShadowSetup );
	
		void ResetCustomShadowCameraSetup( );
	
		Mogre::ShadowCameraSetupPtr^ GetCustomShadowCameraSetup( );
	
		size_t _getIndexInFrame( );
	
		void _notifyIndexInFrame( size_t i );
	
		void ResetShadowFarDistance( );
	
		Mogre::Real _deriveShadowNearClipDistance( Mogre::Camera^ maincam );
	
		Mogre::Real _deriveShadowFarClipDistance( Mogre::Camera^ maincam );
	
		void _setCameraRelative( Mogre::Camera^ cam );
	
		void SetCustomParameter( Mogre::uint16 index, Mogre::Vector4 value );
	
		Mogre::Vector4 GetCustomParameter( Mogre::uint16 index );
	
		void _updateCustomGpuParameter( Mogre::uint16 paramIndex, Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Light )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//LightFactory
	//################################################################
	
	public ref class LightFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		LightFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		LightFactory( );
	
	
		static property String^ FACTORY_TYPE_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void _Init_CLRObject( );
	
		void DestroyInstance( Mogre::MovableObject^ obj );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( LightFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
