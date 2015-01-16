/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreTerrainMaterialGenerator.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	public enum class TerrainLayerSamplerSemantic
	{
		TLSS_ALBEDO = Ogre::TLSS_ALBEDO,
		TLSS_NORMAL = Ogre::TLSS_NORMAL,
		TLSS_HEIGHT = Ogre::TLSS_HEIGHT,
		TLSS_SPECULAR = Ogre::TLSS_SPECULAR
	};
	
	//################################################################
	//TerrainLayerSamplerElement
	//################################################################
	
	public ref class TerrainLayerSamplerElement
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainLayerSamplerElement( Ogre::TerrainLayerSamplerElement* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TerrainLayerSamplerElement()
		{
			this->!TerrainLayerSamplerElement();
		}
		!TerrainLayerSamplerElement()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TerrainLayerSamplerElement* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TerrainLayerSamplerElement( );
		TerrainLayerSamplerElement( Mogre::uint8 src, Mogre::TerrainLayerSamplerSemantic sem, Mogre::uint8 elemStart, Mogre::uint8 elemCount );
	
	
		property Mogre::uint8 source
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 value);
		}
	
		property Mogre::TerrainLayerSamplerSemantic semantic
		{
		public:
			Mogre::TerrainLayerSamplerSemantic get();
		public:
			void set(Mogre::TerrainLayerSamplerSemantic value);
		}
	
		property Mogre::uint8 elementStart
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 value);
		}
	
		property Mogre::uint8 elementCount
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 value);
		}
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(TerrainLayerSamplerElement^ obj);
		static bool operator == (TerrainLayerSamplerElement^ obj1, TerrainLayerSamplerElement^ obj2);
		static bool operator != (TerrainLayerSamplerElement^ obj1, TerrainLayerSamplerElement^ obj2);
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainLayerSamplerElement )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TerrainLayerSampler
	//################################################################
	
	public ref class TerrainLayerSampler
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainLayerSampler( Ogre::TerrainLayerSampler* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TerrainLayerSampler()
		{
			this->!TerrainLayerSampler();
		}
		!TerrainLayerSampler()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TerrainLayerSampler* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TerrainLayerSampler( );
		TerrainLayerSampler( String^ aliasName, Mogre::PixelFormat fmt );
	
	
		property String^ alias
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property Mogre::PixelFormat format
		{
		public:
			Mogre::PixelFormat get();
		public:
			void set(Mogre::PixelFormat value);
		}
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(TerrainLayerSampler^ obj);
		static bool operator == (TerrainLayerSampler^ obj1, TerrainLayerSampler^ obj2);
		static bool operator != (TerrainLayerSampler^ obj1, TerrainLayerSampler^ obj2);
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainLayerSampler )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TerrainLayerDeclaration
	//################################################################
	
	public ref class TerrainLayerDeclaration
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::TerrainLayerSamplerList^ _samplers;
		Mogre::TerrainLayerSamplerElementList^ _elements;
	
		//Internal Declarations
	public protected:
		TerrainLayerDeclaration( Ogre::TerrainLayerDeclaration* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TerrainLayerDeclaration()
		{
			this->!TerrainLayerDeclaration();
		}
		!TerrainLayerDeclaration()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TerrainLayerDeclaration* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TerrainLayerDeclaration();
	
	
		property Mogre::TerrainLayerSamplerList^ samplers
		{
		public:
			Mogre::TerrainLayerSamplerList^ get();
		}
	
		property Mogre::TerrainLayerSamplerElementList^ elements
		{
		public:
			Mogre::TerrainLayerSamplerElementList^ get();
		}
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(TerrainLayerDeclaration^ obj);
		static bool operator == (TerrainLayerDeclaration^ obj1, TerrainLayerDeclaration^ obj2);
		static bool operator != (TerrainLayerDeclaration^ obj1, TerrainLayerDeclaration^ obj2);
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( TerrainLayerDeclaration )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TerrainMaterialGenerator
	//################################################################
	
	public ref class TerrainMaterialGenerator : public Wrapper
	{
		//Nested Types
		public: ref class ProfileList;
		public: ref class Profile;
	
		//################################################################
		//Profile
		//################################################################
	
		public: ref class Profile : public Wrapper
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Profile( CLRObject* obj ) : Wrapper(obj)
			{
			}
	
	
			//Public Declarations
		public:
	
	
			property String^ Description
			{
			public:
				String^ get();
			}
	
			property String^ Name
			{
			public:
				String^ get();
			}
	
			property Mogre::TerrainMaterialGenerator^ Parent
			{
			public:
				Mogre::TerrainMaterialGenerator^ get();
			}
	
			Mogre::MaterialPtr^ Generate( Mogre::Terrain^ terrain );
	
			Mogre::MaterialPtr^ GenerateForCompositeMap( Mogre::Terrain^ terrain );
	
			Mogre::uint8 GetMaxLayers( Mogre::Terrain^ terrain );
	
			void UpdateCompositeMap( Mogre::Terrain^ terrain, Mogre::Rect rect );
	
			void UpdateParams( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
			void UpdateParamsForCompositeMap( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
			void RequestOptions( Mogre::Terrain^ terrain );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainMaterialGenerator::Profile )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::TerrainMaterialGenerator::Profile^
		#define STLDECL_NATIVETYPE Ogre::TerrainMaterialGenerator::Profile*
		public: INC_DECLARE_STLVECTOR( ProfileList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TerrainMaterialGenerator( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TerrainMaterialGenerator( );
	
	
		property Mogre::TerrainMaterialGenerator::Profile^ ActiveProfile
		{
		public:
			Mogre::TerrainMaterialGenerator::Profile^ get();
		public:
			void set(Mogre::TerrainMaterialGenerator::Profile^ p);
		}
	
		property unsigned long long int ChangeCount
		{
		public:
			unsigned long long int get();
		}
	
		property unsigned int DebugLevel
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int dbg);
		}
	
		property Mogre::TerrainLayerDeclaration^ LayerDeclaration
		{
		public:
			Mogre::TerrainLayerDeclaration^ get();
		}
	
		Mogre::TerrainMaterialGenerator::Const_ProfileList^ GetProfiles( );
	
		void SetActiveProfile( String^ name );
	
		void _markChanged( );
	
		bool CanGenerateUsingDeclaration( Mogre::TerrainLayerDeclaration^ decl );
	
		void RequestOptions( Mogre::Terrain^ terrain );
	
		Mogre::MaterialPtr^ Generate( Mogre::Terrain^ terrain );
	
		Mogre::MaterialPtr^ GenerateForCompositeMap( Mogre::Terrain^ terrain );
	
		Mogre::uint8 GetMaxLayers( Mogre::Terrain^ terrain );
	
		void UpdateCompositeMap( Mogre::Terrain^ terrain, Mogre::Rect rect );
	
		void UpdateParams( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
		void UpdateParamsForCompositeMap( Mogre::MaterialPtr^ mat, Mogre::Terrain^ terrain );
	
		void _renderCompositeMap( size_t size, Mogre::Rect rect, Mogre::MaterialPtr^ mat, Mogre::TexturePtr^ destCompositeMap );
	
		Mogre::Texture^ _getCompositeMapRTT( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TerrainMaterialGenerator )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::TerrainLayerSamplerElement^
	#define STLDECL_NATIVETYPE Ogre::TerrainLayerSamplerElement
	INC_DECLARE_STLVECTOR( TerrainLayerSamplerElementList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::TerrainLayerSampler^
	#define STLDECL_NATIVETYPE Ogre::TerrainLayerSampler
	INC_DECLARE_STLVECTOR( TerrainLayerSamplerList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public ref class TerrainMaterialGeneratorPtr : public TerrainMaterialGenerator
	{
	public protected:
			Ogre::TerrainMaterialGeneratorPtr* _sharedPtr;
	
		TerrainMaterialGeneratorPtr(Ogre::TerrainMaterialGeneratorPtr& sharedPtr) : TerrainMaterialGenerator( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::TerrainMaterialGeneratorPtr(sharedPtr);
		}
	
		!TerrainMaterialGeneratorPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~TerrainMaterialGeneratorPtr()
		{
			this->!TerrainMaterialGeneratorPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( TerrainMaterialGeneratorPtr )
	
		TerrainMaterialGeneratorPtr(TerrainMaterialGenerator^ obj) : TerrainMaterialGenerator( obj->_native )
		{
			_sharedPtr = new Ogre::TerrainMaterialGeneratorPtr( static_cast<Ogre::TerrainMaterialGenerator*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			TerrainMaterialGeneratorPtr^ clr = dynamic_cast<TerrainMaterialGeneratorPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(TerrainMaterialGeneratorPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (TerrainMaterialGeneratorPtr^ val1, TerrainMaterialGeneratorPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (TerrainMaterialGeneratorPtr^ val1, TerrainMaterialGeneratorPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property TerrainMaterialGenerator^ Target
		{
			TerrainMaterialGenerator^ get()
			{
				return static_cast<Ogre::TerrainMaterialGenerator*>(_native);
			}
		}
	};
	
	

}
