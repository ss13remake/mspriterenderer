/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreStreamSerialiser.h"
#pragma managed(pop)
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//StreamSerialiser
	//################################################################
	
	public ref class StreamSerialiser : public Wrapper
	{
		//Nested Types
		public: ref class Chunk;
	
		public: enum class Endian
		{
			ENDIAN_AUTO = Ogre::StreamSerialiser::ENDIAN_AUTO,
			ENDIAN_BIG = Ogre::StreamSerialiser::ENDIAN_BIG,
			ENDIAN_LITTLE = Ogre::StreamSerialiser::ENDIAN_LITTLE
		};
	
		public: enum class RealStorageFormat
		{
			REAL_FLOAT = Ogre::StreamSerialiser::REAL_FLOAT,
			REAL_DOUBLE = Ogre::StreamSerialiser::REAL_DOUBLE
		};
	
		//################################################################
		//Chunk
		//################################################################
	
		public: ref class Chunk
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Chunk( Ogre::StreamSerialiser::Chunk* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~Chunk()
			{
				this->!Chunk();
			}
			!Chunk()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::StreamSerialiser::Chunk* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			Chunk( );
	
	
			property Mogre::uint32 id
			{
			public:
				Mogre::uint32 get();
			public:
				void set(Mogre::uint32 value);
			}
	
			property Mogre::uint16 version
			{
			public:
				Mogre::uint16 get();
			public:
				void set(Mogre::uint16 value);
			}
	
			property Mogre::uint32 length
			{
			public:
				Mogre::uint32 get();
			public:
				void set(Mogre::uint32 value);
			}
	
			property Mogre::uint32 offset
			{
			public:
				Mogre::uint32 get();
			public:
				void set(Mogre::uint32 value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( StreamSerialiser::Chunk )
	
			//Protected Declarations
		protected public:
	
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		StreamSerialiser( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		StreamSerialiser( Mogre::DataStreamPtr^ stream, Mogre::StreamSerialiser::Endian endianMode, bool autoHeader, Mogre::StreamSerialiser::RealStorageFormat realFormat );
		StreamSerialiser( Mogre::DataStreamPtr^ stream, Mogre::StreamSerialiser::Endian endianMode, bool autoHeader );
		StreamSerialiser( Mogre::DataStreamPtr^ stream, Mogre::StreamSerialiser::Endian endianMode );
		StreamSerialiser( Mogre::DataStreamPtr^ stream );
	
	
		property Mogre::StreamSerialiser::Chunk^ CurrentChunk
		{
		public:
			Mogre::StreamSerialiser::Chunk^ get();
		}
	
		property size_t CurrentChunkDepth
		{
		public:
			size_t get();
		}
	
		property Mogre::uint32 CurrentChunkID
		{
		public:
			Mogre::uint32 get();
		}
	
		property size_t OffsetFromChunkStart
		{
		public:
			size_t get();
		}
	
		void _Init_CLRObject( );
	
		Mogre::StreamSerialiser::Endian GetEndian( );
	
		Mogre::StreamSerialiser::Chunk^ ReadChunkBegin( );
	
		Mogre::StreamSerialiser::Chunk^ ReadChunkBegin( Mogre::uint32 id, Mogre::uint16 maxVersion, String^ msg );
		Mogre::StreamSerialiser::Chunk^ ReadChunkBegin( Mogre::uint32 id, Mogre::uint16 maxVersion );
	
		void UndoReadChunk( Mogre::uint32 id );
	
		Mogre::uint32 PeekNextChunkID( );
	
		void ReadChunkEnd( Mogre::uint32 id );
	
		bool IsEndOfChunk( Mogre::uint32 id );
	
		bool Eof( );
	
		void WriteChunkBegin( Mogre::uint32 id, Mogre::uint16 version );
		void WriteChunkBegin( Mogre::uint32 id );
	
		void WriteChunkEnd( Mogre::uint32 id );
	
		void WriteData( const void* buf, size_t size, size_t count );
	
		void ReadData( void* buf, size_t size, size_t count );
	
		static Mogre::uint32 MakeIdentifier( String^ code );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( StreamSerialiser )
	
		//Protected Declarations
	protected public:
	
	};
	

}
