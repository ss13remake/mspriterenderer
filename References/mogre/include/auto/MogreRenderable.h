/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRenderable.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreGpuProgramParams.h"

namespace Mogre
{
	class Renderable_ProtectedTypesProxy : public Ogre::Renderable
	{
	public:
		friend ref class Mogre::Renderable;
		typedef Ogre::Renderable::CustomParameterMap CustomParameterMap;
	};
	
	//################################################################
	//IRenderable
	//################################################################
	
	public interface class IRenderable
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IRenderable, Ogre::Renderable )
	
		virtual Ogre::Renderable* _GetNativePtr();
	
	public:
	
	
		property bool CastsShadows
		{
		public:
			virtual bool get();
		}
	
		property unsigned short NumWorldTransforms
		{
		public:
			virtual unsigned short get();
		}
	
		property bool PolygonModeOverrideable
		{
		public:
			virtual bool get();
		public:
			virtual void set(bool override);
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			virtual Mogre::Technique^ get();
		}
	
	
	
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual bool PreRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
		virtual void PostRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
	
	
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IRenderable
	//################################################################
	
	public ref class Renderable abstract : public Wrapper, public IRenderable
	{
		//Nested Types
		protected public: ref class CustomParameterMap;
	
		#define STLDECL_MANAGEDKEY size_t
		#define STLDECL_MANAGEDVALUE Mogre::Vector4
		#define STLDECL_NATIVEKEY size_t
		#define STLDECL_NATIVEVALUE Ogre::Vector4
		protected public: INC_DECLARE_STLMAP( CustomParameterMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, protected public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::Renderable::CustomParameterMap^ _mCustomParameters;
	
		//Internal Declarations
	public protected:
		Renderable( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Renderable( );
	
	
		property bool CastsShadows
		{
		public:
			[Implementation::MethodIndex( 4 )]
			virtual bool get();
		}
	
		property unsigned short NumWorldTransforms
		{
		public:
			[Implementation::MethodIndex( 3 )]
			virtual unsigned short get();
		}
	
		property bool PolygonModeOverrideable
		{
		public:
			[Implementation::MethodIndex( 7 )]
			virtual bool get();
		public:
			[Implementation::MethodIndex( 6 )]
			virtual void set(bool override);
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			[Implementation::MethodIndex( 0 )]
			virtual Mogre::Technique^ get();
		}
	
		property bool UseIdentityProjection
		{
		public:
			bool get();
		public:
			void set(bool useIdentityProjection);
		}
	
		property bool UseIdentityView
		{
		public:
			bool get();
		public:
			void set(bool useIdentityView);
		}
	
		property Mogre::UserObjectBindings^ UserObjectBindings
		{
		public:
			Mogre::UserObjectBindings^ get();
		}
	
		virtual Mogre::MaterialPtr^ GetMaterial( ) abstract;
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op ) abstract;
	
		[Implementation::MethodIndex( 1 )]
		virtual bool PreRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
		[Implementation::MethodIndex( 2 )]
		virtual void PostRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform ) abstract;
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) abstract;
	
		virtual Mogre::Const_LightList^ GetLights( ) abstract;
	
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
		Mogre::Vector4 GetCustomParameter( size_t index );
	
		[Implementation::MethodIndex( 5 )]
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
	
		//Protected Declarations
	protected public:
		property Mogre::Renderable::CustomParameterMap^ mCustomParameters
		{
		protected public:
			Mogre::Renderable::CustomParameterMap^ get();
		}
	
		property bool mPolygonModeOverrideable
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		property bool mUseIdentityProjection
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		property bool mUseIdentityView
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		property Mogre::UserObjectBindings^ mUserObjectBindings
		{
		protected public:
			Mogre::UserObjectBindings^ get();
		protected public:
			void set(Mogre::UserObjectBindings^ value);
		}
	
	
	};
	
	
	class Renderable_ProtectedStaticsProxy : public Ogre::Renderable
	{
	public:
		friend ref class Mogre::Renderable;
		friend ref class Mogre::Renderable::mCustomParameters;
		friend ref class Mogre::Renderable::mPolygonModeOverrideable;
		friend ref class Mogre::Renderable::mUseIdentityProjection;
		friend ref class Mogre::Renderable::mUseIdentityView;
		friend ref class Mogre::Renderable::mUserObjectBindings;
	};
	
	//################################################################
	//Renderable_Proxy
	//################################################################
	
	class Renderable_Proxy : public Ogre::Renderable, public CLRObject
	{
	public:
		friend ref class Mogre::Renderable;
		friend ref class Mogre::Renderable::mCustomParameters;
		friend ref class Mogre::Renderable::mPolygonModeOverrideable;
		friend ref class Mogre::Renderable::mUseIdentityProjection;
		friend ref class Mogre::Renderable::mUseIdentityView;
		friend ref class Mogre::Renderable::mUserObjectBindings;
	
		bool* _overriden;
	
		gcroot<Mogre::Renderable^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		Renderable_Proxy( Mogre::Renderable^ managedObj ) :
			Ogre::Renderable( ),
			_managed(managedObj)
		{
		}
	
		virtual const Ogre::MaterialPtr& getMaterial( ) const override;
	
		virtual Ogre::Technique* getTechnique( ) const override;
	
		virtual void getRenderOperation( Ogre::RenderOperation& op ) override;
	
		virtual bool preRender( Ogre::SceneManager* sm, Ogre::RenderSystem* rsys ) override;
	
		virtual void postRender( Ogre::SceneManager* sm, Ogre::RenderSystem* rsys ) override;
	
		virtual void getWorldTransforms( Ogre::Matrix4* xform ) const override;
	
		virtual unsigned short getNumWorldTransforms( ) const override;
	
		virtual Ogre::Real getSquaredViewDepth( const Ogre::Camera* cam ) const override;
	
		virtual const Ogre::LightList& getLights( ) const override;
	
		virtual bool getCastsShadows( ) const override;
	
		virtual void _updateCustomGpuParameter( const Ogre::GpuProgramParameters::AutoConstantEntry& constantEntry, Ogre::GpuProgramParameters* params ) const override;
	
		virtual void setPolygonModeOverrideable( bool override ) override;
	
		virtual bool getPolygonModeOverrideable( ) const override;
	};
	

}
