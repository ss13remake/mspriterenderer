/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreFrameListener.h"
#pragma managed(pop)

namespace Mogre
{
	//################################################################
	//FrameEvent
	//################################################################
	
	public value class FrameEvent
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		Mogre::Real timeSinceLastEvent;
	
		Mogre::Real timeSinceLastFrame;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( FrameEvent )
	
		//Protected Declarations
	protected public:
	
	};
	
	interface class IFrameListener_Receiver
	{
		bool FrameStarted( Mogre::FrameEvent evt );
	
		bool FrameRenderingQueued( Mogre::FrameEvent evt );
	
		bool FrameEnded( Mogre::FrameEvent evt );
	
	};
	
	public ref class FrameListener abstract sealed
	{
	public:
		delegate static bool FrameStartedHandler( Mogre::FrameEvent evt );
		delegate static bool FrameRenderingQueuedHandler( Mogre::FrameEvent evt );
		delegate static bool FrameEndedHandler( Mogre::FrameEvent evt );
	};
	
	//################################################################
	//FrameListener
	//################################################################
	
	class FrameListener_Director : public Ogre::FrameListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IFrameListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		FrameListener_Director( IFrameListener_Receiver^ recv )
			: _receiver(recv), doCallForFrameStarted(false), doCallForFrameRenderingQueued(false), doCallForFrameEnded(false)
		{
		}
	
		bool doCallForFrameStarted;
		bool doCallForFrameRenderingQueued;
		bool doCallForFrameEnded;
	
		virtual bool frameStarted( const Ogre::FrameEvent& evt ) override;
	
		virtual bool frameRenderingQueued( const Ogre::FrameEvent& evt ) override;
	
		virtual bool frameEnded( const Ogre::FrameEvent& evt ) override;
	
	
		//Protected Declarations
	
	};
	

}
