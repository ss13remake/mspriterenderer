/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreSimpleRenderable.h"
#pragma managed(pop)
#include "MogreRenderable.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogreGpuProgramParams.h"

namespace Mogre
{
	//################################################################
	//SimpleRenderable
	//################################################################
	
	public ref class SimpleRenderable : public MovableObject, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SimpleRenderable( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ box);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		void _Init_CLRObject( );
	
		void SetMaterial( String^ matName );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		void SetRenderOperation( Mogre::RenderOperation^ rend );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		void SetWorldTransform( Mogre::Matrix4^ xform );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		//------------------------------------------------------------
		// Implementation for IRenderable
		//------------------------------------------------------------
	
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
	
	public:
		virtual bool PreRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
	public:
		virtual void PostRender( Mogre::SceneManager^ sm, Mogre::RenderSystem^ rsys );
	
	public:
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
	public:
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SimpleRenderable )
	
		//Protected Declarations
	protected public:
	
	};
	

}
