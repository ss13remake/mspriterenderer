/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreProfiler.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	public enum class ProfileGroupMask
	{
		OGREPROF_USER_DEFAULT = Ogre::OGREPROF_USER_DEFAULT,
		OGREPROF_ALL = Ogre::OGREPROF_ALL,
		OGREPROF_GENERAL = Ogre::OGREPROF_GENERAL,
		OGREPROF_CULLING = Ogre::OGREPROF_CULLING,
		OGREPROF_RENDERING = Ogre::OGREPROF_RENDERING
	};
	
	//################################################################
	//Profiler
	//################################################################
	
	public ref class Profiler
	{
		//Nested Types
	
		public: enum class DisplayMode
		{
			DISPLAY_PERCENTAGE = Ogre::Profiler::DISPLAY_PERCENTAGE,
			DISPLAY_MILLISECONDS = Ogre::Profiler::DISPLAY_MILLISECONDS
		};
	
		//Private Declarations
	private protected:
		static Profiler^ _singleton;
		Ogre::Profiler* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		Profiler( Ogre::Profiler* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Profiler( );
	
		static property Profiler^ Singleton
		{
			Profiler^ get()
			{
				Ogre::Profiler* ptr = Ogre::Profiler::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew Profiler( ptr );
				}
				return _singleton;
			}
		}
	
		property bool Enabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::Real OverlayHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real OverlayLeft
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real OverlayTop
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real OverlayWidth
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint32 ProfileGroupMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 mask);
		}
	
		property Mogre::Timer^ Timer
		{
		public:
			Mogre::Timer^ get();
		public:
			void set(Mogre::Timer^ t);
		}
	
		property Mogre::uint UpdateDisplayFrequency
		{
		public:
			Mogre::uint get();
		public:
			void set(Mogre::uint freq);
		}
	
		void BeginProfile( String^ profileName, Mogre::uint32 groupID );
		void BeginProfile( String^ profileName );
	
		void EndProfile( String^ profileName, Mogre::uint32 groupID );
		void EndProfile( String^ profileName );
	
		void EnableProfile( String^ profileName );
	
		void DisableProfile( String^ profileName );
	
		bool WatchForMax( String^ profileName );
	
		bool WatchForMin( String^ profileName );
	
		bool WatchForLimit( String^ profileName, Mogre::Real limit, bool greaterThan );
		bool WatchForLimit( String^ profileName, Mogre::Real limit );
	
		void LogResults( );
	
		void Reset( );
	
		void SetDisplayMode( Mogre::Profiler::DisplayMode d );
	
		Mogre::Profiler::DisplayMode GetDisplayMode( );
	
		void SetOverlayDimensions( Mogre::Real width, Mogre::Real height );
	
		void SetOverlayPosition( Mogre::Real left, Mogre::Real top );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
