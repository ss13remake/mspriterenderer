/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreZip.h"
#pragma managed(pop)
#include "MogreArchive.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ZipArchive
	//################################################################
	
	public ref class ZipArchive : public Archive
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ZipArchive( CLRObject* obj ) : Archive(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ZipArchive( String^ name, String^ archType );
	
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ZipArchive )
	
		//Protected Declarations
	protected public:
	
	};
	

}
