/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreResourceGroupManager.h"
#pragma managed(pop)
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreStringVector.h"

namespace Mogre
{
	interface class IResourceGroupListener_Receiver
	{
		void ResourceGroupScriptingStarted( String^ groupName, size_t scriptCount );
	
		void ScriptParseStarted( String^ scriptName, [Out] bool% skipThisScript );
	
		void ScriptParseEnded( String^ scriptName, bool skipped );
	
		void ResourceGroupScriptingEnded( String^ groupName );
	
		void ResourceGroupPrepareStarted( String^ groupName, size_t resourceCount );
	
		void ResourcePrepareStarted( Mogre::ResourcePtr^ resource );
	
		void ResourcePrepareEnded( );
	
		void WorldGeometryPrepareStageStarted( String^ description );
	
		void WorldGeometryPrepareStageEnded( );
	
		void ResourceGroupPrepareEnded( String^ groupName );
	
		void ResourceGroupLoadStarted( String^ groupName, size_t resourceCount );
	
		void ResourceLoadStarted( Mogre::ResourcePtr^ resource );
	
		void ResourceLoadEnded( );
	
		void WorldGeometryStageStarted( String^ description );
	
		void WorldGeometryStageEnded( );
	
		void ResourceGroupLoadEnded( String^ groupName );
	
	};
	
	public ref class ResourceGroupListener abstract sealed
	{
	public:
		delegate static void ResourceGroupScriptingStartedHandler( String^ groupName, size_t scriptCount );
		delegate static void ScriptParseStartedHandler( String^ scriptName, [Out] bool% skipThisScript );
		delegate static void ScriptParseEndedHandler( String^ scriptName, bool skipped );
		delegate static void ResourceGroupScriptingEndedHandler( String^ groupName );
		delegate static void ResourceGroupPrepareStartedHandler( String^ groupName, size_t resourceCount );
		delegate static void ResourcePrepareStartedHandler( Mogre::ResourcePtr^ resource );
		delegate static void ResourcePrepareEndedHandler( );
		delegate static void WorldGeometryPrepareStageStartedHandler( String^ description );
		delegate static void WorldGeometryPrepareStageEndedHandler( );
		delegate static void ResourceGroupPrepareEndedHandler( String^ groupName );
		delegate static void ResourceGroupLoadStartedHandler( String^ groupName, size_t resourceCount );
		delegate static void ResourceLoadStartedHandler( Mogre::ResourcePtr^ resource );
		delegate static void ResourceLoadEndedHandler( );
		delegate static void WorldGeometryStageStartedHandler( String^ description );
		delegate static void WorldGeometryStageEndedHandler( );
		delegate static void ResourceGroupLoadEndedHandler( String^ groupName );
	};
	
	//################################################################
	//ResourceGroupListener
	//################################################################
	
	class ResourceGroupListener_Director : public Ogre::ResourceGroupListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IResourceGroupListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		ResourceGroupListener_Director( IResourceGroupListener_Receiver^ recv )
			: _receiver(recv), doCallForResourceGroupScriptingStarted(false), doCallForScriptParseStarted(false), doCallForScriptParseEnded(false), doCallForResourceGroupScriptingEnded(false), doCallForResourceGroupPrepareStarted(false), doCallForResourcePrepareStarted(false), doCallForResourcePrepareEnded(false), doCallForWorldGeometryPrepareStageStarted(false), doCallForWorldGeometryPrepareStageEnded(false), doCallForResourceGroupPrepareEnded(false), doCallForResourceGroupLoadStarted(false), doCallForResourceLoadStarted(false), doCallForResourceLoadEnded(false), doCallForWorldGeometryStageStarted(false), doCallForWorldGeometryStageEnded(false), doCallForResourceGroupLoadEnded(false)
		{
		}
	
		bool doCallForResourceGroupScriptingStarted;
		bool doCallForScriptParseStarted;
		bool doCallForScriptParseEnded;
		bool doCallForResourceGroupScriptingEnded;
		bool doCallForResourceGroupPrepareStarted;
		bool doCallForResourcePrepareStarted;
		bool doCallForResourcePrepareEnded;
		bool doCallForWorldGeometryPrepareStageStarted;
		bool doCallForWorldGeometryPrepareStageEnded;
		bool doCallForResourceGroupPrepareEnded;
		bool doCallForResourceGroupLoadStarted;
		bool doCallForResourceLoadStarted;
		bool doCallForResourceLoadEnded;
		bool doCallForWorldGeometryStageStarted;
		bool doCallForWorldGeometryStageEnded;
		bool doCallForResourceGroupLoadEnded;
	
		virtual void resourceGroupScriptingStarted( const Ogre::String& groupName, size_t scriptCount ) override;
	
		virtual void scriptParseStarted( const Ogre::String& scriptName, bool& skipThisScript ) override;
	
		virtual void scriptParseEnded( const Ogre::String& scriptName, bool skipped ) override;
	
		virtual void resourceGroupScriptingEnded( const Ogre::String& groupName ) override;
	
		virtual void resourceGroupPrepareStarted( const Ogre::String& groupName, size_t resourceCount ) override;
	
		virtual void resourcePrepareStarted( const Ogre::ResourcePtr& resource ) override;
	
		virtual void resourcePrepareEnded( ) override;
	
		virtual void worldGeometryPrepareStageStarted( const Ogre::String& description ) override;
	
		virtual void worldGeometryPrepareStageEnded( ) override;
	
		virtual void resourceGroupPrepareEnded( const Ogre::String& groupName ) override;
	
		virtual void resourceGroupLoadStarted( const Ogre::String& groupName, size_t resourceCount ) override;
	
		virtual void resourceLoadStarted( const Ogre::ResourcePtr& resource ) override;
	
		virtual void resourceLoadEnded( ) override;
	
		virtual void worldGeometryStageStarted( const Ogre::String& description ) override;
	
		virtual void worldGeometryStageEnded( ) override;
	
		virtual void resourceGroupLoadEnded( const Ogre::String& groupName ) override;
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IResourceLoadingListener
	//################################################################
	
	public interface class IResourceLoadingListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IResourceLoadingListener, Ogre::ResourceLoadingListener )
	
		virtual Ogre::ResourceLoadingListener* _GetNativePtr();
	
	public:
	
	
		virtual Mogre::DataStreamPtr^ ResourceLoading( String^ name, String^ group, Mogre::Resource^ resource );
	
		virtual void ResourceStreamOpened( String^ name, String^ group, Mogre::Resource^ resource, Mogre::DataStreamPtr^ dataStream );
	
		virtual bool ResourceCollision( Mogre::Resource^ resource, Mogre::ResourceManager^ resourceManager );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IResourceLoadingListener
	//################################################################
	
	public ref class ResourceLoadingListener abstract : public Wrapper, public IResourceLoadingListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ResourceLoadingListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::ResourceLoadingListener* _IResourceLoadingListener_GetNativePtr() = IResourceLoadingListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		ResourceLoadingListener();
	
	
		virtual Mogre::DataStreamPtr^ ResourceLoading( String^ name, String^ group, Mogre::Resource^ resource ) abstract;
	
		virtual void ResourceStreamOpened( String^ name, String^ group, Mogre::Resource^ resource, Mogre::DataStreamPtr^ dataStream ) abstract;
	
		virtual bool ResourceCollision( Mogre::Resource^ resource, Mogre::ResourceManager^ resourceManager ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//ResourceGroupManager
	//################################################################
	
	public ref class ResourceGroupManager : public IResourceGroupListener_Receiver
	{
		//Nested Types
		public: ref class ResourceDeclarationList;
		public: ref class ResourceManagerMap;
		public: ref class LocationList;
	
		//################################################################
		//ResourceDeclaration_NativePtr
		//################################################################
	
		public: value class ResourceDeclaration_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::ResourceGroupManager::ResourceDeclaration* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property String^ resourceName
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property String^ resourceType
			{
			public:
				String^ get();
			public:
				void set(String^ value);
			}
	
			property Mogre::IManualResourceLoader^ loader
			{
			public:
				Mogre::IManualResourceLoader^ get();
			public:
				void set(Mogre::IManualResourceLoader^ value);
			}
	
			property Mogre::NameValuePairList^ parameters
			{
			public:
				Mogre::NameValuePairList^ get();
			public:
				void set(Mogre::NameValuePairList^ value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( ResourceGroupManager::ResourceDeclaration_NativePtr, Ogre::ResourceGroupManager::ResourceDeclaration )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static ResourceDeclaration_NativePtr Create();
	
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
	
		#undef INC_STLLIST_DEFINE_REMOVE_AND_UNIQUE
		#define INC_STLLIST_DEFINE_REMOVE_AND_UNIQUE(M)
	
		#define STLDECL_MANAGEDTYPE Mogre::ResourceGroupManager::ResourceDeclaration_NativePtr
		#define STLDECL_NATIVETYPE Ogre::ResourceGroupManager::ResourceDeclaration
		public: INC_DECLARE_STLLIST( ResourceDeclarationList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#undef INC_STLLIST_DEFINE_REMOVE_AND_UNIQUE
		#define INC_STLLIST_DEFINE_REMOVE_AND_UNIQUE(M)    INC_STLLIST_REMOVE_AND_UNIQUE_DEFINITIONS(M)
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ResourceManager^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ResourceManager*
		public: INC_DECLARE_STLMAP( ResourceManagerMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ResourceManagerIterator, Ogre::ResourceGroupManager::ResourceManagerIterator, Mogre::ResourceGroupManager::ResourceManagerMap, Mogre::ResourceManager^, Ogre::ResourceManager*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		ResourceGroupListener_Director* _resourceGroupListener;
		Mogre::ResourceGroupListener::ResourceGroupScriptingStartedHandler^ _resourceGroupScriptingStarted;
		Mogre::ResourceGroupListener::ScriptParseStartedHandler^ _scriptParseStarted;
		Mogre::ResourceGroupListener::ScriptParseEndedHandler^ _scriptParseEnded;
		Mogre::ResourceGroupListener::ResourceGroupScriptingEndedHandler^ _resourceGroupScriptingEnded;
		Mogre::ResourceGroupListener::ResourceGroupPrepareStartedHandler^ _resourceGroupPrepareStarted;
		Mogre::ResourceGroupListener::ResourcePrepareStartedHandler^ _resourcePrepareStarted;
		Mogre::ResourceGroupListener::ResourcePrepareEndedHandler^ _resourcePrepareEnded;
		Mogre::ResourceGroupListener::WorldGeometryPrepareStageStartedHandler^ _worldGeometryPrepareStageStarted;
		Mogre::ResourceGroupListener::WorldGeometryPrepareStageEndedHandler^ _worldGeometryPrepareStageEnded;
		Mogre::ResourceGroupListener::ResourceGroupPrepareEndedHandler^ _resourceGroupPrepareEnded;
		Mogre::ResourceGroupListener::ResourceGroupLoadStartedHandler^ _resourceGroupLoadStarted;
		Mogre::ResourceGroupListener::ResourceLoadStartedHandler^ _resourceLoadStarted;
		Mogre::ResourceGroupListener::ResourceLoadEndedHandler^ _resourceLoadEnded;
		Mogre::ResourceGroupListener::WorldGeometryStageStartedHandler^ _worldGeometryStageStarted;
		Mogre::ResourceGroupListener::WorldGeometryStageEndedHandler^ _worldGeometryStageEnded;
		Mogre::ResourceGroupListener::ResourceGroupLoadEndedHandler^ _resourceGroupLoadEnded;
	
		static ResourceGroupManager^ _singleton;
		Ogre::ResourceGroupManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ResourceGroupManager( Ogre::ResourceGroupManager* obj ) : _native(obj)
		{
		}
	
		~ResourceGroupManager()
		{
			this->!ResourceGroupManager();
		}
		!ResourceGroupManager()
		{
			_native = Ogre::ResourceGroupManager::getSingletonPtr();
			if (_resourceGroupListener != 0)
			{
				if (_native != 0) static_cast<Ogre::ResourceGroupManager*>(_native)->removeResourceGroupListener(_resourceGroupListener);
				delete _resourceGroupListener; _resourceGroupListener = 0;
			}
			if (_createdByCLR && _native) { delete _native; _native = 0; }
			_singleton = nullptr;
		}
	
	
		//Public Declarations
	public:
		ResourceGroupManager( );
	
		static property ResourceGroupManager^ Singleton
		{
			ResourceGroupManager^ get()
			{
				Ogre::ResourceGroupManager* ptr = Ogre::ResourceGroupManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew ResourceGroupManager( ptr );
				}
				return _singleton;
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupScriptingStartedHandler^ ResourceGroupScriptingStarted
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupScriptingStartedHandler^ hnd)
			{
				if (_resourceGroupScriptingStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupScriptingStarted = true;
				}
				_resourceGroupScriptingStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupScriptingStartedHandler^ hnd)
			{
				_resourceGroupScriptingStarted -= hnd;
				if (_resourceGroupScriptingStarted == CLR_NULL) _resourceGroupListener->doCallForResourceGroupScriptingStarted = false;
			}
		private:
			void raise( String^ groupName, size_t scriptCount )
			{
				if (_resourceGroupScriptingStarted)
					_resourceGroupScriptingStarted->Invoke( groupName, scriptCount );
			}
		}
	
		event Mogre::ResourceGroupListener::ScriptParseStartedHandler^ ScriptParseStarted
		{
			void add(Mogre::ResourceGroupListener::ScriptParseStartedHandler^ hnd)
			{
				if (_scriptParseStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForScriptParseStarted = true;
				}
				_scriptParseStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ScriptParseStartedHandler^ hnd)
			{
				_scriptParseStarted -= hnd;
				if (_scriptParseStarted == CLR_NULL) _resourceGroupListener->doCallForScriptParseStarted = false;
			}
		private:
			void raise( String^ scriptName, [Out] bool% skipThisScript )
			{
				if (_scriptParseStarted)
					_scriptParseStarted->Invoke( scriptName, skipThisScript );
			}
		}
	
		event Mogre::ResourceGroupListener::ScriptParseEndedHandler^ ScriptParseEnded
		{
			void add(Mogre::ResourceGroupListener::ScriptParseEndedHandler^ hnd)
			{
				if (_scriptParseEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForScriptParseEnded = true;
				}
				_scriptParseEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ScriptParseEndedHandler^ hnd)
			{
				_scriptParseEnded -= hnd;
				if (_scriptParseEnded == CLR_NULL) _resourceGroupListener->doCallForScriptParseEnded = false;
			}
		private:
			void raise( String^ scriptName, bool skipped )
			{
				if (_scriptParseEnded)
					_scriptParseEnded->Invoke( scriptName, skipped );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupScriptingEndedHandler^ ResourceGroupScriptingEnded
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupScriptingEndedHandler^ hnd)
			{
				if (_resourceGroupScriptingEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupScriptingEnded = true;
				}
				_resourceGroupScriptingEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupScriptingEndedHandler^ hnd)
			{
				_resourceGroupScriptingEnded -= hnd;
				if (_resourceGroupScriptingEnded == CLR_NULL) _resourceGroupListener->doCallForResourceGroupScriptingEnded = false;
			}
		private:
			void raise( String^ groupName )
			{
				if (_resourceGroupScriptingEnded)
					_resourceGroupScriptingEnded->Invoke( groupName );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupPrepareStartedHandler^ ResourceGroupPrepareStarted
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupPrepareStartedHandler^ hnd)
			{
				if (_resourceGroupPrepareStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupPrepareStarted = true;
				}
				_resourceGroupPrepareStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupPrepareStartedHandler^ hnd)
			{
				_resourceGroupPrepareStarted -= hnd;
				if (_resourceGroupPrepareStarted == CLR_NULL) _resourceGroupListener->doCallForResourceGroupPrepareStarted = false;
			}
		private:
			void raise( String^ groupName, size_t resourceCount )
			{
				if (_resourceGroupPrepareStarted)
					_resourceGroupPrepareStarted->Invoke( groupName, resourceCount );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourcePrepareStartedHandler^ ResourcePrepareStarted
		{
			void add(Mogre::ResourceGroupListener::ResourcePrepareStartedHandler^ hnd)
			{
				if (_resourcePrepareStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourcePrepareStarted = true;
				}
				_resourcePrepareStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourcePrepareStartedHandler^ hnd)
			{
				_resourcePrepareStarted -= hnd;
				if (_resourcePrepareStarted == CLR_NULL) _resourceGroupListener->doCallForResourcePrepareStarted = false;
			}
		private:
			void raise( Mogre::ResourcePtr^ resource )
			{
				if (_resourcePrepareStarted)
					_resourcePrepareStarted->Invoke( resource );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourcePrepareEndedHandler^ ResourcePrepareEnded
		{
			void add(Mogre::ResourceGroupListener::ResourcePrepareEndedHandler^ hnd)
			{
				if (_resourcePrepareEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourcePrepareEnded = true;
				}
				_resourcePrepareEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourcePrepareEndedHandler^ hnd)
			{
				_resourcePrepareEnded -= hnd;
				if (_resourcePrepareEnded == CLR_NULL) _resourceGroupListener->doCallForResourcePrepareEnded = false;
			}
		private:
			void raise( )
			{
				if (_resourcePrepareEnded)
					_resourcePrepareEnded->Invoke( );
			}
		}
	
		event Mogre::ResourceGroupListener::WorldGeometryPrepareStageStartedHandler^ WorldGeometryPrepareStageStarted
		{
			void add(Mogre::ResourceGroupListener::WorldGeometryPrepareStageStartedHandler^ hnd)
			{
				if (_worldGeometryPrepareStageStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForWorldGeometryPrepareStageStarted = true;
				}
				_worldGeometryPrepareStageStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::WorldGeometryPrepareStageStartedHandler^ hnd)
			{
				_worldGeometryPrepareStageStarted -= hnd;
				if (_worldGeometryPrepareStageStarted == CLR_NULL) _resourceGroupListener->doCallForWorldGeometryPrepareStageStarted = false;
			}
		private:
			void raise( String^ description )
			{
				if (_worldGeometryPrepareStageStarted)
					_worldGeometryPrepareStageStarted->Invoke( description );
			}
		}
	
		event Mogre::ResourceGroupListener::WorldGeometryPrepareStageEndedHandler^ WorldGeometryPrepareStageEnded
		{
			void add(Mogre::ResourceGroupListener::WorldGeometryPrepareStageEndedHandler^ hnd)
			{
				if (_worldGeometryPrepareStageEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForWorldGeometryPrepareStageEnded = true;
				}
				_worldGeometryPrepareStageEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::WorldGeometryPrepareStageEndedHandler^ hnd)
			{
				_worldGeometryPrepareStageEnded -= hnd;
				if (_worldGeometryPrepareStageEnded == CLR_NULL) _resourceGroupListener->doCallForWorldGeometryPrepareStageEnded = false;
			}
		private:
			void raise( )
			{
				if (_worldGeometryPrepareStageEnded)
					_worldGeometryPrepareStageEnded->Invoke( );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupPrepareEndedHandler^ ResourceGroupPrepareEnded
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupPrepareEndedHandler^ hnd)
			{
				if (_resourceGroupPrepareEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupPrepareEnded = true;
				}
				_resourceGroupPrepareEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupPrepareEndedHandler^ hnd)
			{
				_resourceGroupPrepareEnded -= hnd;
				if (_resourceGroupPrepareEnded == CLR_NULL) _resourceGroupListener->doCallForResourceGroupPrepareEnded = false;
			}
		private:
			void raise( String^ groupName )
			{
				if (_resourceGroupPrepareEnded)
					_resourceGroupPrepareEnded->Invoke( groupName );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupLoadStartedHandler^ ResourceGroupLoadStarted
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupLoadStartedHandler^ hnd)
			{
				if (_resourceGroupLoadStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupLoadStarted = true;
				}
				_resourceGroupLoadStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupLoadStartedHandler^ hnd)
			{
				_resourceGroupLoadStarted -= hnd;
				if (_resourceGroupLoadStarted == CLR_NULL) _resourceGroupListener->doCallForResourceGroupLoadStarted = false;
			}
		private:
			void raise( String^ groupName, size_t resourceCount )
			{
				if (_resourceGroupLoadStarted)
					_resourceGroupLoadStarted->Invoke( groupName, resourceCount );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceLoadStartedHandler^ ResourceLoadStarted
		{
			void add(Mogre::ResourceGroupListener::ResourceLoadStartedHandler^ hnd)
			{
				if (_resourceLoadStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceLoadStarted = true;
				}
				_resourceLoadStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceLoadStartedHandler^ hnd)
			{
				_resourceLoadStarted -= hnd;
				if (_resourceLoadStarted == CLR_NULL) _resourceGroupListener->doCallForResourceLoadStarted = false;
			}
		private:
			void raise( Mogre::ResourcePtr^ resource )
			{
				if (_resourceLoadStarted)
					_resourceLoadStarted->Invoke( resource );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceLoadEndedHandler^ ResourceLoadEnded
		{
			void add(Mogre::ResourceGroupListener::ResourceLoadEndedHandler^ hnd)
			{
				if (_resourceLoadEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceLoadEnded = true;
				}
				_resourceLoadEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceLoadEndedHandler^ hnd)
			{
				_resourceLoadEnded -= hnd;
				if (_resourceLoadEnded == CLR_NULL) _resourceGroupListener->doCallForResourceLoadEnded = false;
			}
		private:
			void raise( )
			{
				if (_resourceLoadEnded)
					_resourceLoadEnded->Invoke( );
			}
		}
	
		event Mogre::ResourceGroupListener::WorldGeometryStageStartedHandler^ WorldGeometryStageStarted
		{
			void add(Mogre::ResourceGroupListener::WorldGeometryStageStartedHandler^ hnd)
			{
				if (_worldGeometryStageStarted == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForWorldGeometryStageStarted = true;
				}
				_worldGeometryStageStarted += hnd;
			}
			void remove(Mogre::ResourceGroupListener::WorldGeometryStageStartedHandler^ hnd)
			{
				_worldGeometryStageStarted -= hnd;
				if (_worldGeometryStageStarted == CLR_NULL) _resourceGroupListener->doCallForWorldGeometryStageStarted = false;
			}
		private:
			void raise( String^ description )
			{
				if (_worldGeometryStageStarted)
					_worldGeometryStageStarted->Invoke( description );
			}
		}
	
		event Mogre::ResourceGroupListener::WorldGeometryStageEndedHandler^ WorldGeometryStageEnded
		{
			void add(Mogre::ResourceGroupListener::WorldGeometryStageEndedHandler^ hnd)
			{
				if (_worldGeometryStageEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForWorldGeometryStageEnded = true;
				}
				_worldGeometryStageEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::WorldGeometryStageEndedHandler^ hnd)
			{
				_worldGeometryStageEnded -= hnd;
				if (_worldGeometryStageEnded == CLR_NULL) _resourceGroupListener->doCallForWorldGeometryStageEnded = false;
			}
		private:
			void raise( )
			{
				if (_worldGeometryStageEnded)
					_worldGeometryStageEnded->Invoke( );
			}
		}
	
		event Mogre::ResourceGroupListener::ResourceGroupLoadEndedHandler^ ResourceGroupLoadEnded
		{
			void add(Mogre::ResourceGroupListener::ResourceGroupLoadEndedHandler^ hnd)
			{
				if (_resourceGroupLoadEnded == CLR_NULL)
				{
					if (_resourceGroupListener == 0)
					{
						_resourceGroupListener = new ResourceGroupListener_Director(this);
						static_cast<Ogre::ResourceGroupManager*>(_native)->addResourceGroupListener(_resourceGroupListener);
					}
					_resourceGroupListener->doCallForResourceGroupLoadEnded = true;
				}
				_resourceGroupLoadEnded += hnd;
			}
			void remove(Mogre::ResourceGroupListener::ResourceGroupLoadEndedHandler^ hnd)
			{
				_resourceGroupLoadEnded -= hnd;
				if (_resourceGroupLoadEnded == CLR_NULL) _resourceGroupListener->doCallForResourceGroupLoadEnded = false;
			}
		private:
			void raise( String^ groupName )
			{
				if (_resourceGroupLoadEnded)
					_resourceGroupLoadEnded->Invoke( groupName );
			}
		}
	
	
		static property String^ DEFAULT_RESOURCE_GROUP_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		static property String^ INTERNAL_RESOURCE_GROUP_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		static property String^ AUTODETECT_RESOURCE_GROUP_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		static property size_t RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property Mogre::IResourceLoadingListener^ LoadingListener
		{
		public:
			Mogre::IResourceLoadingListener^ get();
		public:
			void set(Mogre::IResourceLoadingListener^ listener);
		}
	
		property String^ WorldResourceGroupName
		{
		public:
			String^ get();
		public:
			void set(String^ groupName);
		}
	
		void CreateResourceGroup( String^ name, bool inGlobalPool );
		void CreateResourceGroup( String^ name );
	
		void InitialiseResourceGroup( String^ name );
	
		void InitialiseAllResourceGroups( );
	
		void PrepareResourceGroup( String^ name, bool prepareMainResources, bool prepareWorldGeom );
		void PrepareResourceGroup( String^ name, bool prepareMainResources );
		void PrepareResourceGroup( String^ name );
	
		void LoadResourceGroup( String^ name, bool loadMainResources, bool loadWorldGeom );
		void LoadResourceGroup( String^ name, bool loadMainResources );
		void LoadResourceGroup( String^ name );
	
		void UnloadResourceGroup( String^ name, bool reloadableOnly );
		void UnloadResourceGroup( String^ name );
	
		void UnloadUnreferencedResourcesInGroup( String^ name, bool reloadableOnly );
		void UnloadUnreferencedResourcesInGroup( String^ name );
	
		void ClearResourceGroup( String^ name );
	
		void DestroyResourceGroup( String^ name );
	
		bool IsResourceGroupInitialised( String^ name );
	
		bool IsResourceGroupLoaded( String^ name );
	
		bool ResourceGroupExists( String^ name );
	
		void AddResourceLocation( String^ name, String^ locType, String^ resGroup, bool recursive );
		void AddResourceLocation( String^ name, String^ locType, String^ resGroup );
		void AddResourceLocation( String^ name, String^ locType );
	
		void RemoveResourceLocation( String^ name, String^ resGroup );
		void RemoveResourceLocation( String^ name );
	
		bool ResourceLocationExists( String^ name, String^ resGroup );
		bool ResourceLocationExists( String^ name );
	
		void DeclareResource( String^ name, String^ resourceType, String^ groupName, Mogre::Const_NameValuePairList^ loadParameters );
		void DeclareResource( String^ name, String^ resourceType, String^ groupName );
		void DeclareResource( String^ name, String^ resourceType );
	
		void DeclareResource( String^ name, String^ resourceType, String^ groupName, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParameters );
		void DeclareResource( String^ name, String^ resourceType, String^ groupName, Mogre::IManualResourceLoader^ loader );
	
		void UndeclareResource( String^ name, String^ groupName );
	
		Mogre::DataStreamPtr^ OpenResource( String^ resourceName, String^ groupName, bool searchGroupsIfNotFound, Mogre::Resource^ resourceBeingLoaded );
		Mogre::DataStreamPtr^ OpenResource( String^ resourceName, String^ groupName, bool searchGroupsIfNotFound );
		Mogre::DataStreamPtr^ OpenResource( String^ resourceName, String^ groupName );
		Mogre::DataStreamPtr^ OpenResource( String^ resourceName );
	
		Mogre::DataStreamListPtr^ OpenResources( String^ pattern, String^ groupName );
		Mogre::DataStreamListPtr^ OpenResources( String^ pattern );
	
		Mogre::StringVectorPtr^ ListResourceNames( String^ groupName, bool dirs );
		Mogre::StringVectorPtr^ ListResourceNames( String^ groupName );
	
		Mogre::FileInfoListPtr^ ListResourceFileInfo( String^ groupName, bool dirs );
		Mogre::FileInfoListPtr^ ListResourceFileInfo( String^ groupName );
	
		Mogre::StringVectorPtr^ FindResourceNames( String^ groupName, String^ pattern, bool dirs );
		Mogre::StringVectorPtr^ FindResourceNames( String^ groupName, String^ pattern );
	
		bool ResourceExists( String^ group, String^ filename );
	
		bool ResourceExistsInAnyGroup( String^ filename );
	
		String^ FindGroupContainingResource( String^ filename );
	
		Mogre::FileInfoListPtr^ FindResourceFileInfo( String^ group, String^ pattern, bool dirs );
		Mogre::FileInfoListPtr^ FindResourceFileInfo( String^ group, String^ pattern );
	
		time_t ResourceModifiedTime( String^ group, String^ filename );
	
		Mogre::StringVectorPtr^ ListResourceLocations( String^ groupName );
	
		Mogre::StringVectorPtr^ FindResourceLocation( String^ groupName, String^ pattern );
	
		Mogre::DataStreamPtr^ CreateResource( String^ filename, String^ groupName, bool overwrite, String^ locationPattern );
		Mogre::DataStreamPtr^ CreateResource( String^ filename, String^ groupName, bool overwrite );
		Mogre::DataStreamPtr^ CreateResource( String^ filename, String^ groupName );
		Mogre::DataStreamPtr^ CreateResource( String^ filename );
	
		void DeleteResource( String^ filename, String^ groupName, String^ locationPattern );
		void DeleteResource( String^ filename, String^ groupName );
		void DeleteResource( String^ filename );
	
		void DeleteMatchingResources( String^ filePattern, String^ groupName, String^ locationPattern );
		void DeleteMatchingResources( String^ filePattern, String^ groupName );
		void DeleteMatchingResources( String^ filePattern );
	
		void LinkWorldGeometryToResourceGroup( String^ group, String^ worldGeometry, Mogre::SceneManager^ sceneManager );
	
		void UnlinkWorldGeometryFromResourceGroup( String^ group );
	
		bool IsResourceGroupInGlobalPool( String^ name );
	
		void ShutdownAll( );
	
		void _registerResourceManager( String^ resourceType, Mogre::ResourceManager^ rm );
	
		void _unregisterResourceManager( String^ resourceType );
	
		Mogre::ResourceGroupManager::ResourceManagerIterator^ GetResourceManagerIterator( );
	
		Mogre::ResourceManager^ _getResourceManager( String^ resourceType );
	
		void _notifyResourceCreated( Mogre::ResourcePtr^ res );
	
		void _notifyResourceRemoved( Mogre::ResourcePtr^ res );
	
		void _notifyResourceGroupChanged( String^ oldGroup, Mogre::Resource^ res );
	
		void _notifyAllResourcesRemoved( Mogre::ResourceManager^ manager );
	
		Mogre::StringVector^ GetResourceGroups( );
	
		Mogre::ResourceGroupManager::ResourceDeclarationList^ GetResourceDeclarationList( String^ groupName );
	
	
		//Protected Declarations
	protected public:
		virtual void OnResourceGroupScriptingStarted( String^ groupName, size_t scriptCount ) = IResourceGroupListener_Receiver::ResourceGroupScriptingStarted
		{
			ResourceGroupScriptingStarted( groupName, scriptCount );
		}
	
		virtual void OnScriptParseStarted( String^ scriptName, [Out] bool% skipThisScript ) = IResourceGroupListener_Receiver::ScriptParseStarted
		{
			ScriptParseStarted( scriptName, skipThisScript );
		}
	
		virtual void OnScriptParseEnded( String^ scriptName, bool skipped ) = IResourceGroupListener_Receiver::ScriptParseEnded
		{
			ScriptParseEnded( scriptName, skipped );
		}
	
		virtual void OnResourceGroupScriptingEnded( String^ groupName ) = IResourceGroupListener_Receiver::ResourceGroupScriptingEnded
		{
			ResourceGroupScriptingEnded( groupName );
		}
	
		virtual void OnResourceGroupPrepareStarted( String^ groupName, size_t resourceCount ) = IResourceGroupListener_Receiver::ResourceGroupPrepareStarted
		{
			ResourceGroupPrepareStarted( groupName, resourceCount );
		}
	
		virtual void OnResourcePrepareStarted( Mogre::ResourcePtr^ resource ) = IResourceGroupListener_Receiver::ResourcePrepareStarted
		{
			ResourcePrepareStarted( resource );
		}
	
		virtual void OnResourcePrepareEnded( ) = IResourceGroupListener_Receiver::ResourcePrepareEnded
		{
			ResourcePrepareEnded( );
		}
	
		virtual void OnWorldGeometryPrepareStageStarted( String^ description ) = IResourceGroupListener_Receiver::WorldGeometryPrepareStageStarted
		{
			WorldGeometryPrepareStageStarted( description );
		}
	
		virtual void OnWorldGeometryPrepareStageEnded( ) = IResourceGroupListener_Receiver::WorldGeometryPrepareStageEnded
		{
			WorldGeometryPrepareStageEnded( );
		}
	
		virtual void OnResourceGroupPrepareEnded( String^ groupName ) = IResourceGroupListener_Receiver::ResourceGroupPrepareEnded
		{
			ResourceGroupPrepareEnded( groupName );
		}
	
		virtual void OnResourceGroupLoadStarted( String^ groupName, size_t resourceCount ) = IResourceGroupListener_Receiver::ResourceGroupLoadStarted
		{
			ResourceGroupLoadStarted( groupName, resourceCount );
		}
	
		virtual void OnResourceLoadStarted( Mogre::ResourcePtr^ resource ) = IResourceGroupListener_Receiver::ResourceLoadStarted
		{
			ResourceLoadStarted( resource );
		}
	
		virtual void OnResourceLoadEnded( ) = IResourceGroupListener_Receiver::ResourceLoadEnded
		{
			ResourceLoadEnded( );
		}
	
		virtual void OnWorldGeometryStageStarted( String^ description ) = IResourceGroupListener_Receiver::WorldGeometryStageStarted
		{
			WorldGeometryStageStarted( description );
		}
	
		virtual void OnWorldGeometryStageEnded( ) = IResourceGroupListener_Receiver::WorldGeometryStageEnded
		{
			WorldGeometryStageEnded( );
		}
	
		virtual void OnResourceGroupLoadEnded( String^ groupName ) = IResourceGroupListener_Receiver::ResourceGroupLoadEnded
		{
			ResourceGroupLoadEnded( groupName );
		}
	
	
	
	};
	
	//################################################################
	//ResourceLoadingListener_Proxy
	//################################################################
	
	class ResourceLoadingListener_Proxy : public Ogre::ResourceLoadingListener, public CLRObject
	{
	public:
		friend ref class Mogre::ResourceLoadingListener;
	
		bool* _overriden;
	
		gcroot<Mogre::ResourceLoadingListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		ResourceLoadingListener_Proxy( Mogre::ResourceLoadingListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual Ogre::DataStreamPtr resourceLoading( const Ogre::String& name, const Ogre::String& group, Ogre::Resource* resource ) override;
	
		virtual void resourceStreamOpened( const Ogre::String& name, const Ogre::String& group, Ogre::Resource* resource, Ogre::DataStreamPtr& dataStream ) override;
	
		virtual bool resourceCollision( Ogre::Resource* resource, Ogre::ResourceManager* resourceManager ) override;
	};
	

}
