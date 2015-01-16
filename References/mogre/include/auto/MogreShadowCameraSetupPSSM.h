/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreShadowCameraSetupPSSM.h"
#pragma managed(pop)
#include "MogreShadowCameraSetupLiSPSM.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PSSMShadowCameraSetup
	//################################################################
	
	public ref class PSSMShadowCameraSetup : public LiSPSMShadowCameraSetup
	{
		//Nested Types
		public: ref class SplitPointList;
		public: ref class OptimalAdjustFactorList;
	
		#define STLDECL_MANAGEDTYPE Mogre::Real
		#define STLDECL_NATIVETYPE Ogre::Real
		public: INC_DECLARE_STLVECTOR( SplitPointList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::Real
		#define STLDECL_NATIVETYPE Ogre::Real
		public: INC_DECLARE_STLVECTOR( OptimalAdjustFactorList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		
		public:
		  property Mogre::Real OptimalAdjustFactor {
		  public:
		    Mogre::Real get() {
		      return static_cast<Ogre::PSSMShadowCameraSetup*>(_native)->getOptimalAdjustFactor();
		    }
		  }
		  void SetOptimalAdjustFactor(int idx, Mogre::Real factor) {
		    static_cast<Ogre::PSSMShadowCameraSetup*>(_native)->setOptimalAdjustFactor(idx, factor);
		  }
		      
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PSSMShadowCameraSetup( CLRObject* obj ) : LiSPSMShadowCameraSetup(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PSSMShadowCameraSetup( );
	
	
		property size_t SplitCount
		{
		public:
			size_t get();
		}
	
		property Mogre::Real SplitPadding
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real pad);
		}
	
		void CalculateSplitPoints( size_t splitCount, Mogre::Real nearDist, Mogre::Real farDist, Mogre::Real lambda );
		void CalculateSplitPoints( size_t splitCount, Mogre::Real nearDist, Mogre::Real farDist );
	
		void SetSplitPoints( Mogre::PSSMShadowCameraSetup::Const_SplitPointList^ newSplitPoints );
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam, size_t iteration );
	
		Mogre::PSSMShadowCameraSetup::Const_SplitPointList^ GetSplitPoints( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PSSMShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	

}
