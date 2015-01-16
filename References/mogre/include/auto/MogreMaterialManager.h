/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreMaterialManager.h"
#pragma managed(pop)
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//MaterialManager
	//################################################################
	
	public ref class MaterialManager : public ResourceManager
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
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::MaterialManager::Listener )
	
			virtual Ogre::MaterialManager::Listener* _GetNativePtr();
	
		public:
	
	
			virtual Mogre::Technique^ HandleSchemeNotFound( unsigned short schemeIndex, String^ schemeName, Mogre::Material^ originalMaterial, unsigned short lodIndex, Mogre::IRenderable^ rend );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener abstract : public Wrapper, public Mogre::MaterialManager::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::MaterialManager::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener();
		
		
			virtual Mogre::Technique^ HandleSchemeNotFound( unsigned short schemeIndex, String^ schemeName, Mogre::Material^ originalMaterial, unsigned short lodIndex, Mogre::IRenderable^ rend ) abstract;
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//Private Declarations
	private protected:
		static MaterialManager^ _singleton;
	
		//Internal Declarations
	public protected:
		MaterialManager( Ogre::MaterialManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		MaterialManager( );
	
		static property MaterialManager^ Singleton
		{
			MaterialManager^ get()
			{
				Ogre::MaterialManager* ptr = Ogre::MaterialManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew MaterialManager( ptr );
				}
				return _singleton;
			}
		}
	
		static property String^ DEFAULT_SCHEME_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ ActiveScheme
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		property unsigned int DefaultAnisotropy
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int maxAniso);
		}
	
		void Initialise( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		void SetDefaultTextureFiltering( Mogre::TextureFilterOptions fo );
	
		void SetDefaultTextureFiltering( Mogre::FilterType ftype, Mogre::FilterOptions opts );
	
		void SetDefaultTextureFiltering( Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter );
	
		Mogre::FilterOptions GetDefaultTextureFiltering( Mogre::FilterType ftype );
	
		Mogre::MaterialPtr^ GetDefaultSettings( );
	
		unsigned short _getSchemeIndex( String^ name );
	
		String^ _getSchemeName( unsigned short index );
	
		unsigned short _getActiveSchemeIndex( );
	
		void AddListener( Mogre::MaterialManager::IListener^ l, String^ schemeName );
		void AddListener( Mogre::MaterialManager::IListener^ l );
	
		void RemoveListener( Mogre::MaterialManager::IListener^ l, String^ schemeName );
		void RemoveListener( Mogre::MaterialManager::IListener^ l );
	
		Mogre::Technique^ _arbitrateMissingTechniqueForActiveScheme( Mogre::Material^ mat, unsigned short lodIndex, Mogre::IRenderable^ rend );
	
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MaterialManager_Listener_Proxy
	//################################################################
	
	class MaterialManager_Listener_Proxy : public Ogre::MaterialManager::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::MaterialManager::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::MaterialManager::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		MaterialManager_Listener_Proxy( Mogre::MaterialManager::Listener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual Ogre::Technique* handleSchemeNotFound( unsigned short schemeIndex, const Ogre::String& schemeName, Ogre::Material* originalMaterial, unsigned short lodIndex, const Ogre::Renderable* rend ) override;
	};
	

}
