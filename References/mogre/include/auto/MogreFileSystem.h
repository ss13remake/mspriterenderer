/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreFileSystem.h"
#pragma managed(pop)
#include "MogreArchive.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//FileSystemArchive
	//################################################################
	
	public ref class FileSystemArchive : public Archive
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		FileSystemArchive( CLRObject* obj ) : Archive(obj)
		{
		}
	
	
		//Public Declarations
	public:
		FileSystemArchive( String^ name, String^ archType );
	
	
		static property bool ms_IgnoreHidden
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property bool IgnoreHidden
		{
		public:
			static bool get();
		public:
			static void set(bool ignore);
		}
	
		property bool IsCaseSensitive
		{
		public:
			bool get();
		}
	
		void _Init_CLRObject( );
	
		void Load( );
	
		void Unload( );
	
		Mogre::DataStreamPtr^ Open( String^ filename, bool readOnly );
		Mogre::DataStreamPtr^ Open( String^ filename );
	
		Mogre::DataStreamPtr^ Create( String^ filename );
	
		void Remove( String^ filename );
	
		Mogre::StringVectorPtr^ List( bool recursive, bool dirs );
		Mogre::StringVectorPtr^ List( bool recursive );
		Mogre::StringVectorPtr^ List( );
	
		Mogre::FileInfoListPtr^ ListFileInfo( bool recursive, bool dirs );
		Mogre::FileInfoListPtr^ ListFileInfo( bool recursive );
		Mogre::FileInfoListPtr^ ListFileInfo( );
	
		Mogre::StringVectorPtr^ Find( String^ pattern, bool recursive, bool dirs );
		Mogre::StringVectorPtr^ Find( String^ pattern, bool recursive );
		Mogre::StringVectorPtr^ Find( String^ pattern );
	
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern, bool recursive, bool dirs );
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern, bool recursive );
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern );
	
		bool Exists( String^ filename );
	
		time_t GetModifiedTime( String^ filename );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( FileSystemArchive )
	
		//Protected Declarations
	protected public:
	
	};
	

}
