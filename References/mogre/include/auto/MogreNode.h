/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreNode.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Node
	//################################################################
	
	public ref class Node : public Wrapper
	{
		//Nested Types
		public: ref class ChildNodeMap;
	
		public: enum class TransformSpace
		{
			TS_LOCAL = Ogre::Node::TS_LOCAL,
			TS_PARENT = Ogre::Node::TS_PARENT,
			TS_WORLD = Ogre::Node::TS_WORLD
		};
	
		//################################################################
		//IListener
		//################################################################
	
		public: interface class IListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::Node::Listener )
	
			virtual Ogre::Node::Listener* _GetNativePtr();
	
		public:
	
	
			virtual void NodeUpdated( Mogre::Node^ param1 );
	
			virtual void NodeDestroyed( Mogre::Node^ param1 );
	
			virtual void NodeAttached( Mogre::Node^ param1 );
	
			virtual void NodeDetached( Mogre::Node^ param1 );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener : public Wrapper, public Mogre::Node::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::Node::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener( );
		
		
			[Implementation::MethodIndex( 0 )]
			virtual void NodeUpdated( Mogre::Node^ param1 );
		
			[Implementation::MethodIndex( 1 )]
			virtual void NodeDestroyed( Mogre::Node^ param1 );
		
			[Implementation::MethodIndex( 2 )]
			virtual void NodeAttached( Mogre::Node^ param1 );
		
			[Implementation::MethodIndex( 3 )]
			virtual void NodeDetached( Mogre::Node^ param1 );
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::Node^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::Node*
		public: INC_DECLARE_STLHASHMAP( ChildNodeMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ChildNodeIterator, Ogre::Node::ChildNodeIterator, Mogre::Node::ChildNodeMap, Mogre::Node^, Ogre::Node*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Node( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool InheritOrientation
		{
		public:
			bool get();
		public:
			void set(bool inherit);
		}
	
		property bool InheritScale
		{
		public:
			bool get();
		public:
			void set(bool inherit);
		}
	
		property Mogre::Quaternion InitialOrientation
		{
		public:
			Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 InitialPosition
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 InitialScale
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Matrix3^ LocalAxes
		{
		public:
			Mogre::Matrix3^ get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::Quaternion Orientation
		{
		public:
			Mogre::Quaternion get();
		public:
			void set(Mogre::Quaternion q);
		}
	
		property Mogre::Node^ Parent
		{
		public:
			Mogre::Node^ get();
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 pos);
		}
	
		property Mogre::UserObjectBindings^ UserObjectBindings
		{
		public:
			Mogre::UserObjectBindings^ get();
		}
	
		void _Init_CLRObject( );
	
		void SetOrientation( Mogre::Real w, Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void ResetOrientation( );
	
		void SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetScale( Mogre::Vector3 scale );
	
		void SetScale( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		Mogre::Vector3 GetScale( );
	
		void Scale( Mogre::Vector3 scale );
	
		void Scale( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Translate( Mogre::Vector3 d, Mogre::Node::TransformSpace relativeTo );
		void Translate( Mogre::Vector3 d );
	
		void Translate( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo );
		void Translate( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Translate( Mogre::Matrix3^ axes, Mogre::Vector3 move, Mogre::Node::TransformSpace relativeTo );
		void Translate( Mogre::Matrix3^ axes, Mogre::Vector3 move );
	
		void Translate( Mogre::Matrix3^ axes, Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo );
		void Translate( Mogre::Matrix3^ axes, Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Roll( Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo );
		void Roll( Mogre::Radian angle );
	
		void Pitch( Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo );
		void Pitch( Mogre::Radian angle );
	
		void Yaw( Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo );
		void Yaw( Mogre::Radian angle );
	
		void Rotate( Mogre::Vector3 axis, Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo );
		void Rotate( Mogre::Vector3 axis, Mogre::Radian angle );
	
		void Rotate( Mogre::Quaternion q, Mogre::Node::TransformSpace relativeTo );
		void Rotate( Mogre::Quaternion q );
	
		Mogre::Node^ CreateChild( Mogre::Vector3 translate, Mogre::Quaternion rotate );
		Mogre::Node^ CreateChild( Mogre::Vector3 translate );
		Mogre::Node^ CreateChild( );
	
		Mogre::Node^ CreateChild( String^ name, Mogre::Vector3 translate, Mogre::Quaternion rotate );
		Mogre::Node^ CreateChild( String^ name, Mogre::Vector3 translate );
		Mogre::Node^ CreateChild( String^ name );
	
		void AddChild( Mogre::Node^ child );
	
		unsigned short NumChildren( );
	
		Mogre::Node^ GetChild( unsigned short index );
	
		Mogre::Node^ GetChild( String^ name );
	
		Mogre::Node::ChildNodeIterator^ GetChildIterator( );
	
		Mogre::Node^ RemoveChild( unsigned short index );
	
		Mogre::Node^ RemoveChild( Mogre::Node^ child );
	
		Mogre::Node^ RemoveChild( String^ name );
	
		void RemoveAllChildren( );
	
		void _setDerivedPosition( Mogre::Vector3 pos );
	
		void _setDerivedOrientation( Mogre::Quaternion q );
	
		Mogre::Quaternion _getDerivedOrientation( );
	
		Mogre::Vector3 _getDerivedPosition( );
	
		Mogre::Vector3 _getDerivedScale( );
	
		Mogre::Matrix4^ _getFullTransform( );
	
		void _update( bool updateChildren, bool parentHasChanged );
	
		void SetListener( Mogre::Node::IListener^ listener );
	
		Mogre::Node::IListener^ GetListener( );
	
		void SetInitialState( );
	
		void ResetToInitialState( );
	
		Mogre::Vector3 ConvertWorldToLocalPosition( Mogre::Vector3 worldPos );
	
		Mogre::Vector3 ConvertLocalToWorldPosition( Mogre::Vector3 localPos );
	
		Mogre::Quaternion ConvertWorldToLocalOrientation( Mogre::Quaternion worldOrientation );
	
		Mogre::Quaternion ConvertLocalToWorldOrientation( Mogre::Quaternion localOrientation );
	
		Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		void NeedUpdate( bool forceParentUpdate );
		void NeedUpdate( );
	
		void RequestUpdate( Mogre::Node^ child, bool forceParentUpdate );
		void RequestUpdate( Mogre::Node^ child );
	
		void CancelUpdate( Mogre::Node^ child );
	
		static void QueueNeedUpdate( Mogre::Node^ n );
	
		static void ProcessQueuedUpdates( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Node )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//Node_Listener_Proxy
	//################################################################
	
	class Node_Listener_Proxy : public Ogre::Node::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::Node::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::Node::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		Node_Listener_Proxy( Mogre::Node::Listener^ managedObj ) :
			Ogre::Node::Listener( ),
			_managed(managedObj)
		{
		}
	
		virtual void nodeUpdated( const Ogre::Node* param1 ) override;
	
		virtual void nodeDestroyed( const Ogre::Node* param1 ) override;
	
		virtual void nodeAttached( const Ogre::Node* param1 ) override;
	
		virtual void nodeDetached( const Ogre::Node* param1 ) override;
	};
	

}
