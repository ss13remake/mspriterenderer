/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainMaterialGeneratorA.h"
#pragma managed(pop)
#include "MogreTerrainMaterialGenerator.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//TerrainMaterialGeneratorA
	//################################################################
	
	public ref class TerrainMaterialGeneratorA : public TerrainMaterialGenerator
	{
		//Nested Types
		public: ref class SM2Profile;
	
		//################################################################
		//SM2Profile
		//################################################################
	
		public: ref class SM2Profile : public Profile
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SM2Profile( CLRObject* obj ) : Profile(obj)
			{
			}
	
	
			//Public Declarations
		public:
			SM2Profile( Mogre::TerrainMaterialGenerator^ parent, String^ name, String^ desc );
	
	
			property bool IsCompositeMapEnabled
			{
			public:
				bool get();
			}
	
			property bool IsGlobalColourMapEnabled
			{
			public:
				bool get();
			}
	
			property bool IsLayerNormalMappingEnabled
			{
			public:
				bool get();
			}
	
			property bool IsLayerParallaxMappingEnabled
			{
			public:
				bool get();
			}
	
			property bool IsLayerSpecularMappingEnabled
			{
			public:
				bool get();
			}
	
			property bool IsLightmapEnabled
			{
			public:
				bool get();
			}
	
			property bool ReceiveDynamicShadowsDepth
			{
			public:
				bool get();
			public:
				void set(bool enabled);
			}
	
			property bool ReceiveDynamicShadowsEnabled
			{
			public:
				bool get();
			public:
				void set(bool enabled);
			}
	
			property bool ReceiveDynamicShadowsLowLod
			{
			public:
				bool get();
			public:
				void set(bool enabled);
			}
	
			property Mogre::PSSMShadowCameraSetup^ ReceiveDynamicShadowsPSSM
			{
			public:
				Mogre::PSSMShadowCameraSetup^ get();
			public:
				void set(Mogre::PSSMShadowCameraSetup^ pssmSettings);
			}
	
			Mogre::MaterialPtr^ Generate( Mogre::Terrain^ terrain );
	
			Mogre::MaterialPtr^ GenerateForCompositeMap( Mogre::Terrain^ terrain );
	
			Mogre::uint8 GetMaxLayers( Mogre::Terrain^ terrain );
	
			void UpdateParams( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
			void UpdateParamsForCompositeMap( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
			void RequestOptions( Mogre::Terrain^ terrain );
	
			void SetLayerNormalMappingEnabled( bool enabled );
	
			void SetLayerParallaxMappingEnabled( bool enabled );
	
			void SetLayerSpecularMappingEnabled( bool enabled );
	
			void SetGlobalColourMapEnabled( bool enabled );
	
			void SetLightmapEnabled( bool enabled );
	
			void SetCompositeMapEnabled( bool enabled );
	
			bool _isSM3Available( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainMaterialGeneratorA::SM2Profile )
	
			//Protected Declarations
		protected public:
	
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainMaterialGeneratorA( CLRObject* obj ) : TerrainMaterialGenerator(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TerrainMaterialGeneratorA( );
	
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainMaterialGeneratorA )
	
		//Protected Declarations
	protected public:
	
	};
	

}
