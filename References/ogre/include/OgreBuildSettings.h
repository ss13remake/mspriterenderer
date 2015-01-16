#ifndef __Custom_Config_H_
#define __Custom_Config_H_

// CMake auto-generated configuration options

/* #undef OGRE_STATIC_LIB */

#define OGRE_BUILD_RENDERSYSTEM_D3D9
#define OGRE_BUILD_RENDERSYSTEM_D3D10
#define OGRE_BUILD_RENDERSYSTEM_D3D11
#define OGRE_BUILD_RENDERSYSTEM_GL
/* #undef OGRE_BUILD_RENDERSYSTEM_GLES */
#define OGRE_BUILD_PLUGIN_BSP
#define OGRE_BUILD_PLUGIN_OCTREE
#define OGRE_BUILD_PLUGIN_PCZ
#define OGRE_BUILD_PLUGIN_PFX
#define OGRE_BUILD_PLUGIN_CG

#define OGRE_CONFIG_LITTLE_ENDIAN
/* #undef OGRE_CONFIG_BIG_ENDIAN */

/** If set to 1, Real is typedef'ed to double. Otherwise, Real is typedef'ed
    to float. Setting this allows you to perform mathematical operations in the
	CPU (Quaternion, Vector3 etc) with more precision, but bear in mind that the
	GPU still operates in single-precision mode.
*/
#define OGRE_DOUBLE_PRECISION 0

/*
#define OGRE_MEMORY_ALLOCATOR_STD 1
#define OGRE_MEMORY_ALLOCATOR_NED 2
#define OGRE_MEMORY_ALLOCATOR_USER 3
#define OGRE_MEMORY_ALLOCATOR_NEDPOOLING 4
*/
#define OGRE_MEMORY_ALLOCATOR 4

// Whether to use the custom memory allocator in STL containers
#define OGRE_CONTAINERS_USE_CUSTOM_MEMORY_ALLOCATOR 1

#define OGRE_STRING_USE_CUSTOM_MEMORY_ALLOCATOR 0

#define OGRE_MEMORY_TRACKER_DEBUG_MODE 0

#define OGRE_MEMORY_TRACKER_RELEASE_MODE 0

/** Support for multithreading, there are 3 options

OGRE_THREAD_SUPPORT = 0
	No support for threading.		
OGRE_THREAD_SUPPORT = 1
	Thread support for background loading, by both loading and constructing resources
	in a background thread. Resource management and SharedPtr handling becomes
	thread-safe, and resources may be completely loaded in the background. 
	The places where threading is available are clearly
	marked, you should assume state is NOT thread safe unless otherwise
	stated in relation to this flag.
OGRE_THREAD_SUPPORT = 2
	Thread support for background resource preparation. This means that resource
	data can streamed into memory in the background, but the final resource
	construction (including RenderSystem dependencies) is still done in the primary
	thread. Has a lower synchronisation primitive overhead than full threading
	while still allowing the major blocking aspects of resource management (I/O)
	to be done in the background.
*/
#define OGRE_THREAD_SUPPORT 1

/*
OGRE_THREAD_PROVIDER = 0
	No support for threading.
OGRE_THREAD_PROVIDER = 1
	Boost libraries provide threading functionality.
OGRE_THREAD_PROVIDER = 2
	Poco libraries provide threading functionality.
OGRE_THREAD_PROVIDER = 3
	TBB library provides threading functionality.
*/
#define OGRE_THREAD_PROVIDER 1

/** Disables use of the FreeImage image library for loading images.
WARNING: Use only when you want to provide your own image loading code via codecs.
*/
#define OGRE_NO_FREEIMAGE 0

/** Disables use of the internal image codec for loading DDS files.
WARNING: Use only when you want to provide your own image loading code via codecs.
*/
#define OGRE_NO_DDS_CODEC 0

#define OGRE_NO_PVRTC_CODEC 0

/** Disables use of the ZIP archive support.
WARNING: Disabling this will make the samples unusable.
*/
#define OGRE_NO_ZIP_ARCHIVE 0

#define OGRE_NO_VIEWPORT_ORIENTATIONMODE 1

/** Enables the use of the new script compilers when Ogre compiles resource scripts.
*/
#define OGRE_USE_NEW_COMPILERS 1

#define OGRE_USE_BOOST 0

#define OGRE_PROFILING 0

#define RTSHADER_SYSTEM_BUILD_CORE_SHADERS

#define RTSHADER_SYSTEM_BUILD_EXT_SHADERS

#endif
