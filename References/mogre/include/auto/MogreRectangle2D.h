/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#pragma managed(push, off)
#include "OgreRectangle2D.h"
#pragma managed(pop)
#include "MogreSimpleRenderable.h"
#include "MogreHardwareBuffer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Rectangle2D
	//################################################################
	
	public ref class Rectangle2D : public SimpleRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Rectangle2D( CLRObject* obj ) : SimpleRenderable(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Rectangle2D( bool includeTextureCoordinates, Mogre::HardwareBuffer::Usage vBufUsage );
		Rectangle2D( bool includeTextureCoordinates );
		Rectangle2D( );
	
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		void _Init_CLRObject( );
	
		void SetCorners( Mogre::Real left, Mogre::Real top, Mogre::Real right, Mogre::Real bottom, bool updateAABB );
		void SetCorners( Mogre::Real left, Mogre::Real top, Mogre::Real right, Mogre::Real bottom );
	
		void SetNormals( Mogre::Vector3 topLeft, Mogre::Vector3 bottomLeft, Mogre::Vector3 topRight, Mogre::Vector3 bottomRight );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) override;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Rectangle2D )
	
		//Protected Declarations
	protected public:
	
	};
	

}
