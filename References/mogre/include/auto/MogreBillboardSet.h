/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreBillboardSet.h"
#pragma managed(pop)
#include "MogreRenderable.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"
#include "MogreGpuProgramParams.h"

namespace Mogre
{
	public enum class BillboardType
	{
		BBT_POINT = Ogre::BBT_POINT,
		BBT_ORIENTED_COMMON = Ogre::BBT_ORIENTED_COMMON,
		BBT_ORIENTED_SELF = Ogre::BBT_ORIENTED_SELF,
		BBT_PERPENDICULAR_COMMON = Ogre::BBT_PERPENDICULAR_COMMON,
		BBT_PERPENDICULAR_SELF = Ogre::BBT_PERPENDICULAR_SELF
	};
	
	public enum class BillboardRotationType
	{
		BBR_VERTEX = Ogre::BBR_VERTEX,
		BBR_TEXCOORD = Ogre::BBR_TEXCOORD
	};
	
	public enum class BillboardOrigin
	{
		BBO_TOP_LEFT = Ogre::BBO_TOP_LEFT,
		BBO_TOP_CENTER = Ogre::BBO_TOP_CENTER,
		BBO_TOP_RIGHT = Ogre::BBO_TOP_RIGHT,
		BBO_CENTER_LEFT = Ogre::BBO_CENTER_LEFT,
		BBO_CENTER = Ogre::BBO_CENTER,
		BBO_CENTER_RIGHT = Ogre::BBO_CENTER_RIGHT,
		BBO_BOTTOM_LEFT = Ogre::BBO_BOTTOM_LEFT,
		BBO_BOTTOM_CENTER = Ogre::BBO_BOTTOM_CENTER,
		BBO_BOTTOM_RIGHT = Ogre::BBO_BOTTOM_RIGHT
	};
	
	//################################################################
	//BillboardSet
	//################################################################
	
	public ref class BillboardSet : public MovableObject, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BillboardSet( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		BillboardSet( String^ name, unsigned int poolSize, bool externalDataSource );
		BillboardSet( String^ name, unsigned int poolSize );
		BillboardSet( String^ name );
	
	
		property bool Autoextend
		{
		public:
			bool get();
		public:
			void set(bool autoextend);
		}
	
		property bool AutoUpdate
		{
		public:
			bool get();
		public:
			void set(bool autoUpdate);
		}
	
		property Mogre::BillboardOrigin BillboardOrigin
		{
		public:
			Mogre::BillboardOrigin get();
		public:
			void set(Mogre::BillboardOrigin origin);
		}
	
		property Mogre::BillboardRotationType BillboardRotationType
		{
		public:
			Mogre::BillboardRotationType get();
		public:
			void set(Mogre::BillboardRotationType rotationType);
		}
	
		property Mogre::BillboardType BillboardType
		{
		public:
			Mogre::BillboardType get();
		public:
			void set(Mogre::BillboardType bbt);
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
	
		property Mogre::Vector3 CommonDirection
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property Mogre::Vector3 CommonUpVector
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property bool CullIndividually
		{
		public:
			bool get();
		public:
			void set(bool cullIndividual);
		}
	
		property Mogre::Real DefaultHeight
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real height);
		}
	
		property Mogre::Real DefaultWidth
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real width);
		}
	
		property bool IsPointRenderingEnabled
		{
		public:
			bool get();
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property int NumBillboards
		{
		public:
			int get();
		}
	
		property unsigned int PoolSize
		{
		public:
			unsigned int get();
		}
	
		property bool SortingEnabled
		{
		public:
			bool get();
		public:
			void set(bool sortenable);
		}
	
		property Mogre::uint32 TypeFlags
		{
		public:
			Mogre::uint32 get();
		}
	
		property bool UseAccurateFacing
		{
		public:
			bool get();
		public:
			void set(bool acc);
		}
	
		void _Init_CLRObject( );
	
		Mogre::Billboard^ CreateBillboard( Mogre::Vector3 position, Mogre::ColourValue colour );
		Mogre::Billboard^ CreateBillboard( Mogre::Vector3 position );
	
		Mogre::Billboard^ CreateBillboard( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::ColourValue colour );
		Mogre::Billboard^ CreateBillboard( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetPoolSize( size_t size );
	
		void Clear( );
	
		Mogre::Billboard^ GetBillboard( unsigned int index );
	
		void RemoveBillboard( unsigned int index );
	
		void RemoveBillboard( Mogre::Billboard^ pBill );
	
		void SetDefaultDimensions( Mogre::Real width, Mogre::Real height );
	
		void SetMaterialName( String^ name, String^ groupName );
		void SetMaterialName( String^ name );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void BeginBillboards( size_t numBillboards );
		void BeginBillboards( );
	
		void InjectBillboard( Mogre::Billboard^ bb );
	
		void EndBillboards( );
	
		void SetBounds( Mogre::AxisAlignedBox^ box, Mogre::Real radius );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		void SetMaterial( Mogre::MaterialPtr^ material );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		void _notifyBillboardResized( );
	
		void _notifyBillboardRotated( );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		void _updateBounds( );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		void _sortBillboards( Mogre::Camera^ cam );
	
		Mogre::SortMode _getSortMode( );
	
		void SetBillboardsInWorldSpace( bool ws );
	
		void SetTextureCoords( Mogre::FloatRect* coords, Mogre::uint16 numCoords );
	
		void SetTextureStacksAndSlices( Mogre::uchar stacks, Mogre::uchar slices );
	
		Mogre::FloatRect* GetTextureCoords( [Out] Mogre::uint16% oNumCoords );
	
		void SetPointRenderingEnabled( bool enabled );
	
		void NotifyBillboardDataChanged( );
	
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
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BillboardSet )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//BillboardSetFactory
	//################################################################
	
	public ref class BillboardSetFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BillboardSetFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		BillboardSetFactory( );
	
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BillboardSetFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
