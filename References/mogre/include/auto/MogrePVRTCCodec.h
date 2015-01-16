/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgrePVRTCCodec.h"
#pragma managed(pop)
#include "MogreImageCodec.h"
#include "MogrePrerequisites.h"
#include "MogreCodec.h"

namespace Mogre
{
	//################################################################
	//PVRTCCodec
	//################################################################
	
	public ref class PVRTCCodec : public ImageCodec
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PVRTCCodec( CLRObject* obj ) : ImageCodec(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		Mogre::DataStreamPtr^ Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData );
	
		void CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData );
	
		Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> Decode( Mogre::DataStreamPtr^ input );
	
		String^ MagicNumberToFileExt( const char* magicNumberPtr, size_t maxbytes );
	
		static void Startup( );
	
		static void Shutdown( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PVRTCCodec )
	
		//Protected Declarations
	protected public:
	
	};
	

}
