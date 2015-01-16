/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreCompositionTechnique.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	//################################################################
	//CompositionTechnique
	//################################################################
	
	public ref class CompositionTechnique : public Wrapper
	{
		//Nested Types
		public: ref class TargetPasses;
		public: ref class TextureDefinitions;
	
		public: enum class TextureScope
		{
			TS_LOCAL = Ogre::CompositionTechnique::TS_LOCAL,
			TS_CHAIN = Ogre::CompositionTechnique::TS_CHAIN,
			TS_GLOBAL = Ogre::CompositionTechnique::TS_GLOBAL
		};
	
		//################################################################
		//TextureDefinition_NativePtr
		//################################################################
	
		public: value class TextureDefinition_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::CompositionTechnique::TextureDefinition* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property String^ name
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property String^ refCompName
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property String^ refTexName
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property size_t width
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t height
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property float widthFactor
			{
			public:
				float get();
			public:
				void set(float value);
			}
	
			property float heightFactor
			{
			public:
				float get();
			public:
				void set(float value);
			}
	
			property Mogre::PixelFormatList^ formatList
			{
			public:
				Mogre::PixelFormatList^ get();
			public:
				void set(Mogre::PixelFormatList^ value);
			}
	
			property bool fsaa
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property bool hwGammaWrite
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property bool pooled
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			property Mogre::CompositionTechnique::TextureScope scope
			{
			public:
				Mogre::CompositionTechnique::TextureScope get();
			public:
				void set(Mogre::CompositionTechnique::TextureScope value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( CompositionTechnique::TextureDefinition_NativePtr, Ogre::CompositionTechnique::TextureDefinition )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static TextureDefinition_NativePtr Create( );
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::CompositionTargetPass^
		#define STLDECL_NATIVETYPE Ogre::CompositionTargetPass*
		public: INC_DECLARE_STLVECTOR( TargetPasses, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::CompositionTechnique::TextureDefinition_NativePtr
		#define STLDECL_NATIVETYPE Ogre::CompositionTechnique::TextureDefinition*
		public: INC_DECLARE_STLVECTOR( TextureDefinitions, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( TargetPassIterator, Ogre::CompositionTechnique::TargetPassIterator, Mogre::CompositionTechnique::TargetPasses, Mogre::CompositionTargetPass^, Ogre::CompositionTargetPass* )
	
		public: INC_DECLARE_ITERATOR( TextureDefinitionIterator, Ogre::CompositionTechnique::TextureDefinitionIterator, Mogre::CompositionTechnique::TextureDefinitions, Mogre::CompositionTechnique::TextureDefinition_NativePtr, Ogre::CompositionTechnique::TextureDefinition* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		CompositionTechnique( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		CompositionTechnique( Mogre::Compositor^ parent );
	
	
		property String^ CompositorLogicName
		{
		public:
			String^ get();
		public:
			void set(String^ compositorLogicName);
		}
	
		property size_t NumTargetPasses
		{
		public:
			size_t get();
		}
	
		property size_t NumTextureDefinitions
		{
		public:
			size_t get();
		}
	
		property Mogre::CompositionTargetPass^ OutputTargetPass
		{
		public:
			Mogre::CompositionTargetPass^ get();
		}
	
		property Mogre::Compositor^ Parent
		{
		public:
			Mogre::Compositor^ get();
		}
	
		property String^ SchemeName
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		void _Init_CLRObject( );
	
		Mogre::CompositionTechnique::TextureDefinition_NativePtr CreateTextureDefinition( String^ name );
	
		void RemoveTextureDefinition( size_t idx );
	
		Mogre::CompositionTechnique::TextureDefinition_NativePtr GetTextureDefinition( size_t idx );
	
		Mogre::CompositionTechnique::TextureDefinition_NativePtr GetTextureDefinition( String^ name );
	
		void RemoveAllTextureDefinitions( );
	
		Mogre::CompositionTechnique::TextureDefinitionIterator^ GetTextureDefinitionIterator( );
	
		Mogre::CompositionTargetPass^ CreateTargetPass( );
	
		void RemoveTargetPass( size_t idx );
	
		Mogre::CompositionTargetPass^ GetTargetPass( size_t idx );
	
		void RemoveAllTargetPasses( );
	
		Mogre::CompositionTechnique::TargetPassIterator^ GetTargetPassIterator( );
	
		bool IsSupported( bool allowTextureDegradation );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( CompositionTechnique )
	
		//Protected Declarations
	protected public:
	
	};
	

}
