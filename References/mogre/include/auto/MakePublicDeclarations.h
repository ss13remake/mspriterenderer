#pragma once

namespace Ogre
{
class AnimableValue;
class Vector2;
class Vector3;
class Vector4;
class Quaternion;
class ColourValue;
class Radian;
class Degree;
class AnimableObject;
class Animation;
class NodeAnimationTrack;
class NumericAnimationTrack;
class VertexAnimationTrack;
class Node;
class VertexData;
class Skeleton;
class Entity;
class TimeIndex;
class AnimationState;
class AnimationStateSet;
class AnimationTrack;
class KeyFrame;
class NumericKeyFrame;
class TransformKeyFrame;
class VertexMorphKeyFrame;
class VertexPoseKeyFrame;
struct FileInfo;
class Archive;
class ArchiveManager;
class Billboard;
class BillboardSet;
class BillboardChain;
class AxisAlignedBox;
class Camera;
class MaterialPtr;
class RenderQueue;
class RenderOperation;
class Matrix4;
class Technique;
class SceneManager;
class RenderSystem;
class GpuProgramParameters;
class BillboardChainFactory;
class MovableObject;
class BillboardParticleRenderer;
class BillboardSetFactory;
class LayerBlendModeEx;
class Bone;
class BorderPanelOverlayElement;
class BorderRenderable;
class UserObjectBindings;
class Plane;
class SceneNode;
class Frustum;
class Viewport;
class Ray;
class PlaneBoundedVolume;
class Sphere;
class Codec;
class Light;
class RenderWindow;
class CompositionPass;
class CompositionTargetPass;
class CompositionTechnique;
class Compositor;
class ResourceManager;
class ManualResourceLoader;
class TexturePtr;
class RenderTarget;
class CompositorChain;
class CompositorInstance;
class CompositorPtr;
struct RenderTargetEvent;
struct RenderTargetViewportEvent;
class CompositorManager;
class Texture;
class Renderable;
class ConfigFile;
struct _ConfigOption;
class DataStream;
class MemoryDataStream;
class DDSCodec;
class DefaultHardwareBufferManagerBase;
class HardwareVertexBufferSharedPtr;
class HardwareIndexBufferSharedPtr;
class DefaultHardwareBufferManager;
class DistanceLodStrategy;
class EdgeData;
class Log;
class SkeletonInstance;
class MeshPtr;
class SubEntity;
class TagPoint;
class Resource;
class EntityFactory;
class Exception;
class ExternalTextureSource;
class ParamDictionary;
class StringInterface;
class ExternalTextureSourceManager;
class FileSystemArchive;
class Font;
class FontManager;
struct FrameEvent;
class FrameListener;
class MovablePlane;
class GpuProgram;
struct GpuNamedConstants;
class GpuProgramManager;
class GpuProgramPtr;
struct GpuConstantDefinition;
class GpuNamedConstantsSerializer;
struct GpuLogicalBufferStruct;
class GpuSharedParameters;
class GpuSharedParametersUsage;
class Grid2DPageStrategyData;
class StreamSerialiser;
class Grid2DPageStrategy;
class PageManager;
class PagedWorldSection;
class PageStrategyData;
class Page;
class HardwareBuffer;
class HardwareBufferManagerBase;
class VertexDeclaration;
class VertexBufferBinding;
class HardwareVertexBuffer;
class HardwareIndexBuffer;
class HardwareBufferManager;
class HardwareOcclusionQuery;
class HardwarePixelBuffer;
class PixelBox;
class HardwarePixelBufferSharedPtr;
class RenderTexture;
class VertexElement;
class HighLevelGpuProgram;
class HighLevelGpuProgramManager;
class HighLevelGpuProgramPtr;
class Image;
class ImageCodec;
class InstancedGeometry;
class Matrix3;
class SkeletonPtr;
class LightFactory;
struct EntityMaterialLodChangedEvent;
struct EntityMeshLodChangedEvent;
struct MovableObjectLodChangedEvent;
class LodListener;
class LodStrategy;
class LodStrategyManager;
class LogListener;
class LogManager;
class ManualObject;
class ManualObjectFactory;
class Material;
class MaterialManager;
class MaterialSerializer;
class Mesh;
struct MeshLodUsage;
class SubMesh;
class Pose;
class IndexData;
class MeshManager;
class MeshSerializerListener;
class PatchMeshPtr;
class MeshSerializer;
class MovableObjectFactory;
class Overlay;
class OverlayContainer;
class OverlayElement;
struct Rectangle;
class OverlayElementFactory;
class PanelOverlayElementFactory;
class BorderPanelOverlayElementFactory;
class TextAreaOverlayElementFactory;
class OverlayManager;
class PageContentCollection;
class WorkQueue;
class PageContent;
class PageContentCollectionFactory;
class PageContentFactory;
class PagedWorld;
class PageProvider;
class PageStrategy;
class PagedWorldSectionFactory;
class PanelOverlayElement;
class Particle;
class ParticleSystem;
class ParticleAffector;
class ParticleAffectorFactory;
class ParticleEmitter;
class ParticleEmitterFactory;
class ParticleIterator;
class ParticleSystemRenderer;
class ParticleSystemManager;
class ParticleSystemFactory;
struct IlluminationPass;
class Pass;
class TextureUnitState;
class PatchMesh;
class PatchSurface;
class PixelCountLodStrategy;
class PixelUtil;
class Plugin;
class Profiler;
class Timer;
class ProgressiveMesh;
class PVRTCCodec;
class Rectangle2D;
class RenderObjectListener;
class RenderQueueGroup;
struct VisibleObjectsBoundsInfo;
class RenderQueueInvocation;
class RenderQueueInvocationSequence;
class RenderQueueListener;
struct RenderablePass;
class QueuedRenderableVisitor;
class QueuedRenderableCollection;
class RenderPriorityGroup;
class RenderSystemCapabilities;
struct DriverVersion;
class MultiRenderTarget;
class RenderSystemCapabilitiesManager;
class RenderTargetListener;
class RenderToVertexBuffer;
struct BackgroundProcessResult;
class ResourceGroupListener;
class ResourceLoadingListener;
class ResourceGroupManager;
class RibbonTrail;
class RibbonTrailFactory;
class Root;
class SceneManagerFactory;
struct SceneManagerMetaData;
class RotationalSpline;
struct ViewPoint;
class AxisAlignedBoxSceneQuery;
class SphereSceneQuery;
class PlaneBoundedVolumeListSceneQuery;
class RaySceneQuery;
class IntersectionSceneQuery;
class SceneQuery;
struct ShadowTextureConfig;
class StaticGeometry;
class DefaultIntersectionSceneQuery;
class IntersectionSceneQueryListener;
class DefaultRaySceneQuery;
class RaySceneQueryListener;
class DefaultSphereSceneQuery;
class SceneQueryListener;
class DefaultPlaneBoundedVolumeListSceneQuery;
class DefaultAxisAlignedBoxSceneQuery;
class DefaultSceneManagerFactory;
class SceneManagerEnumerator;
struct SceneQueryResult;
class RegionSceneQuery;
struct RaySceneQueryResultEntry;
struct IntersectionSceneQueryResult;
class Serializer;
class ShadowCameraSetup;
class DefaultShadowCameraSetup;
class FocusedShadowCameraSetup;
class LiSPSMShadowCameraSetup;
class PlaneOptimalShadowCameraSetup;
class PSSMShadowCameraSetup;
class ShadowRenderable;
class ShadowCaster;
class ShadowTextureManager;
class SimplePageContentCollection;
class SimplePageContentCollectionFactory;
class SimpleRenderable;
class SimpleSpline;
struct LinkedSkeletonAnimationSource;
class SkeletonManager;
class SkeletonSerializer;
class StringConverter;
class ParameterDef;
class ParamCommand;
class Terrain;
struct TerrainLayerDeclaration;
class TerrainQuadTreeNode;
class TerrainLayerBlendMap;
class TerrainGlobalOptions;
class TerrainGroup;
struct Box;
struct TerrainLayerSamplerElement;
struct TerrainLayerSampler;
class TerrainMaterialGenerator;
class TerrainMaterialGeneratorA;
class TerrainPagedWorldSection;
class TerrainPaging;
class TextAreaOverlayElement;
class TextureManager;
class UnifiedHighLevelGpuProgram;
struct VertexBoneAssignment_s;
class WindowEventListener;
class WindowEventUtilities;
class WireBoundingBox;
class ZipArchive;
}

#pragma make_public( Ogre::AnimableValue )
#pragma make_public( Ogre::Vector2 )
#pragma make_public( Ogre::Vector3 )
#pragma make_public( Ogre::Vector4 )
#pragma make_public( Ogre::Quaternion )
#pragma make_public( Ogre::ColourValue )
#pragma make_public( Ogre::Radian )
#pragma make_public( Ogre::Degree )
#pragma make_public( Ogre::AnimableObject )
#pragma make_public( Ogre::Animation )
#pragma make_public( Ogre::NodeAnimationTrack )
#pragma make_public( Ogre::NumericAnimationTrack )
#pragma make_public( Ogre::VertexAnimationTrack )
#pragma make_public( Ogre::Node )
#pragma make_public( Ogre::VertexData )
#pragma make_public( Ogre::Skeleton )
#pragma make_public( Ogre::Entity )
#pragma make_public( Ogre::TimeIndex )
#pragma make_public( Ogre::AnimationState )
#pragma make_public( Ogre::AnimationStateSet )
#pragma make_public( Ogre::AnimationTrack )
#pragma make_public( Ogre::KeyFrame )
#pragma make_public( Ogre::NumericKeyFrame )
#pragma make_public( Ogre::TransformKeyFrame )
#pragma make_public( Ogre::VertexMorphKeyFrame )
#pragma make_public( Ogre::VertexPoseKeyFrame )
#pragma make_public( Ogre::FileInfo )
#pragma make_public( Ogre::Archive )
#pragma make_public( Ogre::ArchiveManager )
#pragma make_public( Ogre::Billboard )
#pragma make_public( Ogre::BillboardSet )
#pragma make_public( Ogre::BillboardChain )
#pragma make_public( Ogre::AxisAlignedBox )
#pragma make_public( Ogre::Camera )
#pragma make_public( Ogre::MaterialPtr )
#pragma make_public( Ogre::RenderQueue )
#pragma make_public( Ogre::RenderOperation )
#pragma make_public( Ogre::Matrix4 )
#pragma make_public( Ogre::Technique )
#pragma make_public( Ogre::SceneManager )
#pragma make_public( Ogre::RenderSystem )
#pragma make_public( Ogre::GpuProgramParameters )
#pragma make_public( Ogre::BillboardChainFactory )
#pragma make_public( Ogre::MovableObject )
#pragma make_public( Ogre::BillboardParticleRenderer )
#pragma make_public( Ogre::BillboardSetFactory )
#pragma make_public( Ogre::LayerBlendModeEx )
#pragma make_public( Ogre::Bone )
#pragma make_public( Ogre::BorderPanelOverlayElement )
#pragma make_public( Ogre::BorderRenderable )
#pragma make_public( Ogre::UserObjectBindings )
#pragma make_public( Ogre::Plane )
#pragma make_public( Ogre::SceneNode )
#pragma make_public( Ogre::Frustum )
#pragma make_public( Ogre::Viewport )
#pragma make_public( Ogre::Ray )
#pragma make_public( Ogre::PlaneBoundedVolume )
#pragma make_public( Ogre::Sphere )
#pragma make_public( Ogre::Codec )
#pragma make_public( Ogre::Light )
#pragma make_public( Ogre::RenderWindow )
#pragma make_public( Ogre::CompositionPass )
#pragma make_public( Ogre::CompositionTargetPass )
#pragma make_public( Ogre::CompositionTechnique )
#pragma make_public( Ogre::Compositor )
#pragma make_public( Ogre::ResourceManager )
#pragma make_public( Ogre::ManualResourceLoader )
#pragma make_public( Ogre::TexturePtr )
#pragma make_public( Ogre::RenderTarget )
#pragma make_public( Ogre::CompositorChain )
#pragma make_public( Ogre::CompositorInstance )
#pragma make_public( Ogre::CompositorPtr )
#pragma make_public( Ogre::RenderTargetEvent )
#pragma make_public( Ogre::RenderTargetViewportEvent )
#pragma make_public( Ogre::CompositorManager )
#pragma make_public( Ogre::Texture )
#pragma make_public( Ogre::Renderable )
#pragma make_public( Ogre::ConfigFile )
#pragma make_public( Ogre::_ConfigOption )
#pragma make_public( Ogre::DataStream )
#pragma make_public( Ogre::MemoryDataStream )
#pragma make_public( Ogre::DDSCodec )
#pragma make_public( Ogre::DefaultHardwareBufferManagerBase )
#pragma make_public( Ogre::HardwareVertexBufferSharedPtr )
#pragma make_public( Ogre::HardwareIndexBufferSharedPtr )
#pragma make_public( Ogre::DefaultHardwareBufferManager )
#pragma make_public( Ogre::DistanceLodStrategy )
#pragma make_public( Ogre::EdgeData )
#pragma make_public( Ogre::Log )
#pragma make_public( Ogre::SkeletonInstance )
#pragma make_public( Ogre::MeshPtr )
#pragma make_public( Ogre::SubEntity )
#pragma make_public( Ogre::TagPoint )
#pragma make_public( Ogre::Resource )
#pragma make_public( Ogre::EntityFactory )
#pragma make_public( Ogre::Exception )
#pragma make_public( Ogre::ExternalTextureSource )
#pragma make_public( Ogre::ParamDictionary )
#pragma make_public( Ogre::StringInterface )
#pragma make_public( Ogre::ExternalTextureSourceManager )
#pragma make_public( Ogre::FileSystemArchive )
#pragma make_public( Ogre::Font )
#pragma make_public( Ogre::FontManager )
#pragma make_public( Ogre::FrameEvent )
#pragma make_public( Ogre::FrameListener )
#pragma make_public( Ogre::MovablePlane )
#pragma make_public( Ogre::GpuProgram )
#pragma make_public( Ogre::GpuNamedConstants )
#pragma make_public( Ogre::GpuProgramManager )
#pragma make_public( Ogre::GpuProgramPtr )
#pragma make_public( Ogre::GpuConstantDefinition )
#pragma make_public( Ogre::GpuNamedConstantsSerializer )
#pragma make_public( Ogre::GpuLogicalBufferStruct )
#pragma make_public( Ogre::GpuSharedParameters )
#pragma make_public( Ogre::GpuSharedParametersUsage )
#pragma make_public( Ogre::Grid2DPageStrategyData )
#pragma make_public( Ogre::StreamSerialiser )
#pragma make_public( Ogre::Grid2DPageStrategy )
#pragma make_public( Ogre::PageManager )
#pragma make_public( Ogre::PagedWorldSection )
#pragma make_public( Ogre::PageStrategyData )
#pragma make_public( Ogre::Page )
#pragma make_public( Ogre::HardwareBuffer )
#pragma make_public( Ogre::HardwareBufferManagerBase )
#pragma make_public( Ogre::VertexDeclaration )
#pragma make_public( Ogre::VertexBufferBinding )
#pragma make_public( Ogre::HardwareVertexBuffer )
#pragma make_public( Ogre::HardwareIndexBuffer )
#pragma make_public( Ogre::HardwareBufferManager )
#pragma make_public( Ogre::HardwareOcclusionQuery )
#pragma make_public( Ogre::HardwarePixelBuffer )
#pragma make_public( Ogre::PixelBox )
#pragma make_public( Ogre::HardwarePixelBufferSharedPtr )
#pragma make_public( Ogre::RenderTexture )
#pragma make_public( Ogre::VertexElement )
#pragma make_public( Ogre::HighLevelGpuProgram )
#pragma make_public( Ogre::HighLevelGpuProgramManager )
#pragma make_public( Ogre::HighLevelGpuProgramPtr )
#pragma make_public( Ogre::Image )
#pragma make_public( Ogre::ImageCodec )
#pragma make_public( Ogre::InstancedGeometry )
#pragma make_public( Ogre::Matrix3 )
#pragma make_public( Ogre::SkeletonPtr )
#pragma make_public( Ogre::LightFactory )
#pragma make_public( Ogre::EntityMaterialLodChangedEvent )
#pragma make_public( Ogre::EntityMeshLodChangedEvent )
#pragma make_public( Ogre::MovableObjectLodChangedEvent )
#pragma make_public( Ogre::LodListener )
#pragma make_public( Ogre::LodStrategy )
#pragma make_public( Ogre::LodStrategyManager )
#pragma make_public( Ogre::LogListener )
#pragma make_public( Ogre::LogManager )
#pragma make_public( Ogre::ManualObject )
#pragma make_public( Ogre::ManualObjectFactory )
#pragma make_public( Ogre::Material )
#pragma make_public( Ogre::MaterialManager )
#pragma make_public( Ogre::MaterialSerializer )
#pragma make_public( Ogre::Mesh )
#pragma make_public( Ogre::MeshLodUsage )
#pragma make_public( Ogre::SubMesh )
#pragma make_public( Ogre::Pose )
#pragma make_public( Ogre::IndexData )
#pragma make_public( Ogre::MeshManager )
#pragma make_public( Ogre::MeshSerializerListener )
#pragma make_public( Ogre::PatchMeshPtr )
#pragma make_public( Ogre::MeshSerializer )
#pragma make_public( Ogre::MovableObjectFactory )
#pragma make_public( Ogre::Overlay )
#pragma make_public( Ogre::OverlayContainer )
#pragma make_public( Ogre::OverlayElement )
#pragma make_public( Ogre::Rectangle )
#pragma make_public( Ogre::OverlayElementFactory )
#pragma make_public( Ogre::PanelOverlayElementFactory )
#pragma make_public( Ogre::BorderPanelOverlayElementFactory )
#pragma make_public( Ogre::TextAreaOverlayElementFactory )
#pragma make_public( Ogre::OverlayManager )
#pragma make_public( Ogre::PageContentCollection )
#pragma make_public( Ogre::WorkQueue )
#pragma make_public( Ogre::PageContent )
#pragma make_public( Ogre::PageContentCollectionFactory )
#pragma make_public( Ogre::PageContentFactory )
#pragma make_public( Ogre::PagedWorld )
#pragma make_public( Ogre::PageProvider )
#pragma make_public( Ogre::PageStrategy )
#pragma make_public( Ogre::PagedWorldSectionFactory )
#pragma make_public( Ogre::PanelOverlayElement )
#pragma make_public( Ogre::Particle )
#pragma make_public( Ogre::ParticleSystem )
#pragma make_public( Ogre::ParticleAffector )
#pragma make_public( Ogre::ParticleAffectorFactory )
#pragma make_public( Ogre::ParticleEmitter )
#pragma make_public( Ogre::ParticleEmitterFactory )
#pragma make_public( Ogre::ParticleIterator )
#pragma make_public( Ogre::ParticleSystemRenderer )
#pragma make_public( Ogre::ParticleSystemManager )
#pragma make_public( Ogre::ParticleSystemFactory )
#pragma make_public( Ogre::IlluminationPass )
#pragma make_public( Ogre::Pass )
#pragma make_public( Ogre::TextureUnitState )
#pragma make_public( Ogre::PatchMesh )
#pragma make_public( Ogre::PatchSurface )
#pragma make_public( Ogre::PixelCountLodStrategy )
#pragma make_public( Ogre::PixelUtil )
#pragma make_public( Ogre::Plugin )
#pragma make_public( Ogre::Profiler )
#pragma make_public( Ogre::Timer )
#pragma make_public( Ogre::ProgressiveMesh )
#pragma make_public( Ogre::PVRTCCodec )
#pragma make_public( Ogre::Rectangle2D )
#pragma make_public( Ogre::RenderObjectListener )
#pragma make_public( Ogre::RenderQueueGroup )
#pragma make_public( Ogre::VisibleObjectsBoundsInfo )
#pragma make_public( Ogre::RenderQueueInvocation )
#pragma make_public( Ogre::RenderQueueInvocationSequence )
#pragma make_public( Ogre::RenderQueueListener )
#pragma make_public( Ogre::RenderablePass )
#pragma make_public( Ogre::QueuedRenderableVisitor )
#pragma make_public( Ogre::QueuedRenderableCollection )
#pragma make_public( Ogre::RenderPriorityGroup )
#pragma make_public( Ogre::RenderSystemCapabilities )
#pragma make_public( Ogre::DriverVersion )
#pragma make_public( Ogre::MultiRenderTarget )
#pragma make_public( Ogre::RenderSystemCapabilitiesManager )
#pragma make_public( Ogre::RenderTargetListener )
#pragma make_public( Ogre::RenderToVertexBuffer )
#pragma make_public( Ogre::BackgroundProcessResult )
#pragma make_public( Ogre::ResourceGroupListener )
#pragma make_public( Ogre::ResourceLoadingListener )
#pragma make_public( Ogre::ResourceGroupManager )
#pragma make_public( Ogre::RibbonTrail )
#pragma make_public( Ogre::RibbonTrailFactory )
#pragma make_public( Ogre::Root )
#pragma make_public( Ogre::SceneManagerFactory )
#pragma make_public( Ogre::SceneManagerMetaData )
#pragma make_public( Ogre::RotationalSpline )
#pragma make_public( Ogre::ViewPoint )
#pragma make_public( Ogre::AxisAlignedBoxSceneQuery )
#pragma make_public( Ogre::SphereSceneQuery )
#pragma make_public( Ogre::PlaneBoundedVolumeListSceneQuery )
#pragma make_public( Ogre::RaySceneQuery )
#pragma make_public( Ogre::IntersectionSceneQuery )
#pragma make_public( Ogre::SceneQuery )
#pragma make_public( Ogre::ShadowTextureConfig )
#pragma make_public( Ogre::StaticGeometry )
#pragma make_public( Ogre::DefaultIntersectionSceneQuery )
#pragma make_public( Ogre::IntersectionSceneQueryListener )
#pragma make_public( Ogre::DefaultRaySceneQuery )
#pragma make_public( Ogre::RaySceneQueryListener )
#pragma make_public( Ogre::DefaultSphereSceneQuery )
#pragma make_public( Ogre::SceneQueryListener )
#pragma make_public( Ogre::DefaultPlaneBoundedVolumeListSceneQuery )
#pragma make_public( Ogre::DefaultAxisAlignedBoxSceneQuery )
#pragma make_public( Ogre::DefaultSceneManagerFactory )
#pragma make_public( Ogre::SceneManagerEnumerator )
#pragma make_public( Ogre::SceneQueryResult )
#pragma make_public( Ogre::RegionSceneQuery )
#pragma make_public( Ogre::RaySceneQueryResultEntry )
#pragma make_public( Ogre::IntersectionSceneQueryResult )
#pragma make_public( Ogre::Serializer )
#pragma make_public( Ogre::ShadowCameraSetup )
#pragma make_public( Ogre::DefaultShadowCameraSetup )
#pragma make_public( Ogre::FocusedShadowCameraSetup )
#pragma make_public( Ogre::LiSPSMShadowCameraSetup )
#pragma make_public( Ogre::PlaneOptimalShadowCameraSetup )
#pragma make_public( Ogre::PSSMShadowCameraSetup )
#pragma make_public( Ogre::ShadowRenderable )
#pragma make_public( Ogre::ShadowCaster )
#pragma make_public( Ogre::ShadowTextureManager )
#pragma make_public( Ogre::SimplePageContentCollection )
#pragma make_public( Ogre::SimplePageContentCollectionFactory )
#pragma make_public( Ogre::SimpleRenderable )
#pragma make_public( Ogre::SimpleSpline )
#pragma make_public( Ogre::LinkedSkeletonAnimationSource )
#pragma make_public( Ogre::SkeletonManager )
#pragma make_public( Ogre::SkeletonSerializer )
#pragma make_public( Ogre::StringConverter )
#pragma make_public( Ogre::ParameterDef )
#pragma make_public( Ogre::ParamCommand )
#pragma make_public( Ogre::Terrain )
#pragma make_public( Ogre::TerrainLayerDeclaration )
#pragma make_public( Ogre::TerrainQuadTreeNode )
#pragma make_public( Ogre::TerrainLayerBlendMap )
#pragma make_public( Ogre::TerrainGlobalOptions )
#pragma make_public( Ogre::TerrainGroup )
#pragma make_public( Ogre::Box )
#pragma make_public( Ogre::TerrainLayerSamplerElement )
#pragma make_public( Ogre::TerrainLayerSampler )
#pragma make_public( Ogre::TerrainMaterialGenerator )
#pragma make_public( Ogre::TerrainMaterialGeneratorA )
#pragma make_public( Ogre::TerrainPagedWorldSection )
#pragma make_public( Ogre::TerrainPaging )
#pragma make_public( Ogre::TextAreaOverlayElement )
#pragma make_public( Ogre::TextureManager )
#pragma make_public( Ogre::UnifiedHighLevelGpuProgram )
#pragma make_public( Ogre::VertexBoneAssignment_s )
#pragma make_public( Ogre::WindowEventListener )
#pragma make_public( Ogre::WindowEventUtilities )
#pragma make_public( Ogre::WireBoundingBox )
#pragma make_public( Ogre::ZipArchive )
