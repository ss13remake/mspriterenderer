/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainLayerBlendMap.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//TerrainLayerBlendMap
	//################################################################
	
	public ref class TerrainLayerBlendMap
	{
		//Nested Types
	
		
		        #ifdef LoadImage
		          #undef LoadImage
		        #endif
		      
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainLayerBlendMap( Ogre::TerrainLayerBlendMap* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TerrainLayerBlendMap()
		{
			this->!TerrainLayerBlendMap();
		}
		!TerrainLayerBlendMap()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TerrainLayerBlendMap* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TerrainLayerBlendMap( Mogre::Terrain^ parent, Mogre::uint8 layerIndex, Mogre::HardwarePixelBuffer^ buf );
	
	
		property float* BlendPointer
		{
		public:
			float* get();
		}
	
		property Mogre::uint8 LayerIndex
		{
		public:
			Mogre::uint8 get();
		}
	
		property Mogre::Terrain^ Parent
		{
		public:
			Mogre::Terrain^ get();
		}
	
		void ConvertWorldToUVSpace( Mogre::Vector3 worldPos, [Out] Mogre::Real% outX, [Out] Mogre::Real% outY );
	
		void ConvertUVToWorldSpace( Mogre::Real x, Mogre::Real y, Mogre::Vector3* outWorldPos );
	
		void ConvertUVToImageSpace( Mogre::Real x, Mogre::Real y, [Out] size_t% outX, [Out] size_t% outY );
	
		void ConvertImageToUVSpace( size_t x, size_t y, [Out] Mogre::Real% outX, [Out] Mogre::Real% outY );
	
		void ConvertImageToTerrainSpace( size_t x, size_t y, [Out] Mogre::Real% outX, [Out] Mogre::Real% outY );
	
		void ConvertTerrainToImageSpace( Mogre::Real x, Mogre::Real y, [Out] size_t% outX, [Out] size_t% outY );
	
		float GetBlendValue( size_t x, size_t y );
	
		void SetBlendValue( size_t x, size_t y, float val );
	
		void Dirty( );
	
		void DirtyRect( Mogre::Rect rect );
	
		void Blit( Mogre::PixelBox src, Mogre::Box dstBox );
	
		void Blit( Mogre::PixelBox src );
	
		void LoadImage( Mogre::Image^ img );
	
		void LoadImage( Mogre::DataStreamPtr^ stream, String^ ext );
		void LoadImage( Mogre::DataStreamPtr^ stream );
	
		void LoadImage( String^ filename, String^ groupName );
	
		void Update( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainLayerBlendMap )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::TerrainLayerBlendMap^
	#define STLDECL_NATIVETYPE Ogre::TerrainLayerBlendMap*
	INC_DECLARE_STLVECTOR( TerrainLayerBlendMapList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
