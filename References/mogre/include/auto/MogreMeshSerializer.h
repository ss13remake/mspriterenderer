/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreMeshSerializer.h"
#pragma managed(pop)
#include "MogreSerializer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//MeshSerializer
	//################################################################
	
	public ref class MeshSerializer : public Serializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MeshSerializer( CLRObject* obj ) : Serializer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		MeshSerializer( );
	
	
		property Mogre::IMeshSerializerListener^ Listener
		{
		public:
			Mogre::IMeshSerializerListener^ get();
		public:
			void set(Mogre::IMeshSerializerListener^ listener);
		}
	
		void _Init_CLRObject( );
	
		void ExportMesh( Mogre::Mesh^ pMesh, String^ filename, Mogre::Serializer::Endian endianMode );
		void ExportMesh( Mogre::Mesh^ pMesh, String^ filename );
	
		void ImportMesh( Mogre::DataStreamPtr^ stream, Mogre::Mesh^ pDest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MeshSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IMeshSerializerListener
	//################################################################
	
	public interface class IMeshSerializerListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IMeshSerializerListener, Ogre::MeshSerializerListener )
	
		virtual Ogre::MeshSerializerListener* _GetNativePtr();
	
	public:
	
	
		virtual void ProcessMaterialName( Mogre::Mesh^ mesh, array<String^>^ name );
	
		virtual void ProcessSkeletonName( Mogre::Mesh^ mesh, array<String^>^ name );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IMeshSerializerListener
	//################################################################
	
	public ref class MeshSerializerListener abstract : public Wrapper, public IMeshSerializerListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MeshSerializerListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::MeshSerializerListener* _IMeshSerializerListener_GetNativePtr() = IMeshSerializerListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		MeshSerializerListener();
	
	
		virtual void ProcessMaterialName( Mogre::Mesh^ mesh, array<String^>^ name ) abstract;
	
		virtual void ProcessSkeletonName( Mogre::Mesh^ mesh, array<String^>^ name ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//MeshSerializerListener_Proxy
	//################################################################
	
	class MeshSerializerListener_Proxy : public Ogre::MeshSerializerListener, public CLRObject
	{
	public:
		friend ref class Mogre::MeshSerializerListener;
	
		bool* _overriden;
	
		gcroot<Mogre::MeshSerializerListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		MeshSerializerListener_Proxy( Mogre::MeshSerializerListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual void processMaterialName( Ogre::Mesh* mesh, Ogre::String* name ) override;
	
		virtual void processSkeletonName( Ogre::Mesh* mesh, Ogre::String* name ) override;
	};
	

}
