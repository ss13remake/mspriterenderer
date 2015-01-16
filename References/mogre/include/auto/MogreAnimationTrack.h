/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreAnimationTrack.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePose.h"

namespace Mogre
{
	public enum class VertexAnimationType
	{
		VAT_NONE = Ogre::VAT_NONE,
		VAT_MORPH = Ogre::VAT_MORPH,
		VAT_POSE = Ogre::VAT_POSE
	};
	
	//################################################################
	//TimeIndex
	//################################################################
	
	public ref class TimeIndex : public INativePointer
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
		TimeIndex( Ogre::TimeIndex* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TimeIndex()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TimeIndex* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TimeIndex( Mogre::Real timePos );
		TimeIndex( Mogre::Real timePos, Mogre::uint keyIndex );
	
	
		property CLRHandle _CLRHandle
		{
		public:
			CLRHandle get();
		public:
			void set(CLRHandle value);
		}
	
		property bool HasKeyIndex
		{
		public:
			bool get();
		}
	
		property Mogre::uint KeyIndex
		{
		public:
			Mogre::uint get();
		}
	
		property Mogre::Real TimePos
		{
		public:
			Mogre::Real get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( TimeIndex )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//AnimationTrack
	//################################################################
	
	public ref class AnimationTrack : public Wrapper
	{
		//Nested Types
	
		//################################################################
		//IListener
		//################################################################
	
		public: interface class IListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::AnimationTrack::Listener )
	
			virtual Ogre::AnimationTrack::Listener* _GetNativePtr();
	
		public:
	
	
			virtual bool GetInterpolatedKeyFrame( Mogre::AnimationTrack^ t, Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener abstract : public Wrapper, public Mogre::AnimationTrack::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::AnimationTrack::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener();
		
		
			virtual bool GetInterpolatedKeyFrame( Mogre::AnimationTrack^ t, Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf ) abstract;
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		AnimationTrack( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property unsigned short Handle
		{
		public:
			unsigned short get();
		}
	
		property bool HasNonZeroKeyFrames
		{
		public:
			bool get();
		}
	
		property unsigned short NumKeyFrames
		{
		public:
			unsigned short get();
		}
	
		property Mogre::Animation^ Parent
		{
		public:
			Mogre::Animation^ get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::KeyFrame^ GetKeyFrame( unsigned short index );
	
		Mogre::Real GetKeyFramesAtTime( Mogre::TimeIndex^ timeIndex, [Out] Mogre::KeyFrame^% keyFrame1, [Out] Mogre::KeyFrame^% keyFrame2, [Out] unsigned short% firstKeyIndex );
		Mogre::Real GetKeyFramesAtTime( Mogre::TimeIndex^ timeIndex, [Out] Mogre::KeyFrame^% keyFrame1, [Out] Mogre::KeyFrame^% keyFrame2 );
	
		Mogre::KeyFrame^ CreateKeyFrame( Mogre::Real timePos );
	
		void RemoveKeyFrame( unsigned short index );
	
		void RemoveAllKeyFrames( );
	
		void GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf );
	
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void Apply( Mogre::TimeIndex^ timeIndex );
	
		void _keyFrameDataChanged( );
	
		void Optimise( );
	
		void SetListener( Mogre::AnimationTrack::IListener^ l );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( AnimationTrack )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//NumericAnimationTrack
	//################################################################
	
	public ref class NumericAnimationTrack : public AnimationTrack
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		NumericAnimationTrack( CLRObject* obj ) : AnimationTrack(obj)
		{
		}
	
	
		//Public Declarations
	public:
		NumericAnimationTrack( Mogre::Animation^ parent, unsigned short handle );
		NumericAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::AnimableValuePtr^ target );
	
	
		void _Init_CLRObject( );
	
		Mogre::NumericKeyFrame^ CreateNumericKeyFrame( Mogre::Real timePos );
	
		void GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf );
	
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void Apply( Mogre::TimeIndex^ timeIndex );
	
		void ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex );
	
		Mogre::AnimableValuePtr^ GetAssociatedAnimable( );
	
		void SetAssociatedAnimable( Mogre::AnimableValuePtr^ val );
	
		Mogre::NumericKeyFrame^ GetNumericKeyFrame( unsigned short index );
	
		Mogre::NumericAnimationTrack^ _clone( Mogre::Animation^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( NumericAnimationTrack )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//NodeAnimationTrack
	//################################################################
	
	public ref class NodeAnimationTrack : public AnimationTrack
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		NodeAnimationTrack( CLRObject* obj ) : AnimationTrack(obj)
		{
		}
	
	
		//Public Declarations
	public:
		NodeAnimationTrack( Mogre::Animation^ parent, unsigned short handle );
		NodeAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::Node^ targetNode );
	
	
		property Mogre::Node^ AssociatedNode
		{
		public:
			Mogre::Node^ get();
		public:
			void set(Mogre::Node^ node);
		}
	
		property bool HasNonZeroKeyFrames
		{
		public:
			bool get();
		}
	
		property bool UseShortestRotationPath
		{
		public:
			bool get();
		public:
			void set(bool useShortestPath);
		}
	
		void _Init_CLRObject( );
	
		Mogre::TransformKeyFrame^ CreateNodeKeyFrame( Mogre::Real timePos );
	
		void ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex );
	
		void GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf );
	
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void Apply( Mogre::TimeIndex^ timeIndex );
	
		void _keyFrameDataChanged( );
	
		Mogre::TransformKeyFrame^ GetNodeKeyFrame( unsigned short index );
	
		void Optimise( );
	
		Mogre::NodeAnimationTrack^ _clone( Mogre::Animation^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( NodeAnimationTrack )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VertexAnimationTrack
	//################################################################
	
	public ref class VertexAnimationTrack : public AnimationTrack
	{
		//Nested Types
	
		public: enum class TargetMode
		{
			TM_SOFTWARE = Ogre::VertexAnimationTrack::TM_SOFTWARE,
			TM_HARDWARE = Ogre::VertexAnimationTrack::TM_HARDWARE
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		VertexAnimationTrack( CLRObject* obj ) : AnimationTrack(obj)
		{
		}
	
	
		//Public Declarations
	public:
		VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType );
		VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType, Mogre::VertexData^ targetData, Mogre::VertexAnimationTrack::TargetMode target );
		VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType, Mogre::VertexData^ targetData );
	
	
		property Mogre::VertexAnimationType AnimationType
		{
		public:
			Mogre::VertexAnimationType get();
		}
	
		property Mogre::VertexData^ AssociatedVertexData
		{
		public:
			Mogre::VertexData^ get();
		public:
			void set(Mogre::VertexData^ data);
		}
	
		property bool HasNonZeroKeyFrames
		{
		public:
			bool get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::VertexMorphKeyFrame^ CreateVertexMorphKeyFrame( Mogre::Real timePos );
	
		Mogre::VertexPoseKeyFrame^ CreateVertexPoseKeyFrame( Mogre::Real timePos );
	
		void GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf );
	
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void Apply( Mogre::TimeIndex^ timeIndex );
	
		void ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Const_PoseList^ poseList );
		void ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex, Mogre::Real weight );
		void ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex );
	
		Mogre::VertexMorphKeyFrame^ GetVertexMorphKeyFrame( unsigned short index );
	
		Mogre::VertexPoseKeyFrame^ GetVertexPoseKeyFrame( unsigned short index );
	
		void SetTargetMode( Mogre::VertexAnimationTrack::TargetMode m );
	
		Mogre::VertexAnimationTrack::TargetMode GetTargetMode( );
	
		void Optimise( );
	
		Mogre::VertexAnimationTrack^ _clone( Mogre::Animation^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( VertexAnimationTrack )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//AnimationTrack_Listener_Proxy
	//################################################################
	
	class AnimationTrack_Listener_Proxy : public Ogre::AnimationTrack::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::AnimationTrack::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::AnimationTrack::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		AnimationTrack_Listener_Proxy( Mogre::AnimationTrack::Listener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual bool getInterpolatedKeyFrame( const Ogre::AnimationTrack* t, const Ogre::TimeIndex& timeIndex, Ogre::KeyFrame* kf ) override;
	};
	

}
