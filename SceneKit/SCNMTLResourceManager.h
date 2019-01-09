//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __C3DEngineStats *__engineStats;
    SCNMTLLibraryManager *_libraryManager;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
    struct __CFDictionary *_availablePipelineStates;
    struct os_unfair_lock_s _availablePipelineStatesLock;
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;
    CDStruct_670bd187 _availableIrradianceTextures;
    CDStruct_670bd187 _availableRadianceTextures;
    CDStruct_670bd187 _availableImages;
    CDStruct_670bd187 _availableImageProxy;
    CDStruct_670bd187 _availableSamplers;
    CDStruct_670bd187 _availableIESTextures;
    CDStruct_670bd187 _availableBuffers;
    CDStruct_670bd187 _availableMeshes;
    CDStruct_670bd187 _availableMeshSources;
    CDStruct_670bd187 _availableMeshElements;
    CDStruct_670bd187 _availableRasterizerStates;
    CDStruct_670bd187 _availableMorphs;
    CDStruct_670bd187 _availableSkins;
    CDStruct_670bd187 _availableComputePipelines;
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;
    CDStruct_670bd187 _availableTessellators;
    CDStruct_670bd187 _availableWireframeMaterials;
    CDStruct_670bd187 _availableShadables;
    SCNMTLShadableKey *_availableShadablesSearchKey;
    NSMutableArray *_availableStageDescriptors;
    struct os_unfair_lock_s _stageDescriptorsLock;
    id _nullStageDescriptor;
    id <MTLTexture> _specularDFGTexture;
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgram
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgramForTessellation
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _isolateProgram
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;
    id <MTLTexture> _defaultTexture;
    id <MTLTexture> _defaultTexture3D;
    id <MTLTexture> _defaultCubeTexture;
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;
    MTKTextureLoader *_mtkTextureLoader;
}

+ (void)unregisterManagerForDevice:(id)arg1;
+ (id)resourceManagerForDevice:(id)arg1;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) SCNMTLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (id)depthAndStencilStateWithReadWriteDepthDisabled;
- (struct __C3DEngineStats *)stats;
- (void)flush;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
-     // Error parsing type: @24@0:8^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}16, name: renderResourceForSampler:
-     // Error parsing type: @48@0:8^{__C3DMaterial=}16^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}24@32^{__C3DEngineContext=}40, name: renderResourceForMaterial:geometry:renderPipeline:engineContext:
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
-     // Error parsing type: @48@0:8^{__C3DRendererElement=I^{__C3DNode}^{__C3DGeometry}^{__C3DMesh}^v^{__C3DMaterial}^{__C3DFXTechnique}{?=[8C]}iIb8b1b1b1b1b1b1b3b1b3}16^{__C3DEngineContext=}24^{__C3DFXPassInstance=^{__C3DFXPass}q^{__C3DFXPassInstance}CBC[6^{__C3DArray}]{__C3DCullingContext=^{__C3DEnginePipeline}[6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})]ICCCB^{__C3DFXPass}^v^{__C3DNode}^{__C3DNode}BBBBBBBQQ^v^{__C3DScene}^{__C3DEngineContext}dd(?={?=ffff})(C3DMatrix4x4=[16f][4]{?=[4]})(C3DMatrix4x4=[16f][4]{?=[4]})[6{?=^{?}II}]B^?}^{__C3DNode}}32Q40, name: wireframeResourceForRendererElement:engineContext:passInstance:hashPass:
-     // Error parsing type: @24@0:8^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}16, name: renderResourceForTessellatedGeometry:
-     // Error parsing type: @40@0:8^{__C3DSkinner=}16^{__C3DMesh=}24^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}32, name: renderResourceForSkinner:baseMesh:baseGeometry:
-     // Error parsing type: @32@0:8^{__C3DMorph=}16^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}24, name: renderResourceForMorph:baseGeometry:
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1 dataKind:(unsigned char)arg2;
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;
-     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}16, name: renderResourceForMeshElement:
-     // Error parsing type: @24@0:8^{__C3DMeshSource={__C3DGenericSource={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DSourceAccessor}(?=^{__CFData}^v^v)qb1b1b1}SCC}16, name: renderResourceForMeshSource:
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1 reverseZ:(BOOL)arg2;
- (void)removeAllShaders;
- (void)_geometryWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
-     // Error parsing type: v32@0:8^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}16^{__C3DFXPass={__CFRuntimeBase=QAQ}^{__CFString}iiB^{__C3DFXTechnique}^{__CFString}^{__CFString}^{__CFString}^{__CFString}B^{__C3DFXProgram}^{__C3DMaterial}^{__C3DBlendStates}^{__C3DRasterizerStates}{C3DColor4=(?=[4f]{?=ffff})}CIb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1^{__C3DRendererElement}QQ{?=^?^?^?^?^?^?^?^?^v}{?=[4{?=CCCb1b1b1b1b1b1[4C]}]{?=CCCb1b1b1b1b1b1[4C]}b3b1b1}{CGPoint=dd}[5f]^{?}I^{__C3DNode}^{__C3DNode}^{__CFArray}^{__C3DNode}C^{__CFString}^{__CFString}^{__CFString}^^{__C3DFXPassInput}qq^{__CFDictionary}@?@?^{__CFDictionary}^v}24, name: _removeMatchingProgram:pass:
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_skinWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long *)arg3 renderContext:(id)arg4;
- (id)reflectionProbeTextureForScene:(struct __C3DScene *)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;
- (id)specularDFGTextureWithRenderContext:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(BOOL)arg3 commandBuffer:(id)arg4;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(BOOL)arg4 renderContext:(id)arg5;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;
- (id)defaultLightingEnvironmentRadianceTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (id)defaultTexture3D;
- (id)defaultCubeTexture;
- (id)defaultTexture;
-     // Error parsing type: @44@0:8^{__C3DImage=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24i32^{__C3DEngineContext=}36, name: renderResourceForImage:sampler:options:engineContext:
-     // Error parsing type: @40@0:8^{__C3DImageProxy={__CFRuntimeBase=QAQ}{?=^?^?^?^?}^vC}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^{__C3DEngineContext=}32, name: renderResourceForImageProxy:sampler:engineContext:
-     // Error parsing type: @32@0:8^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}16^{__C3DEngineContext=}24, name: renderResourcesForEffectSlot:withEngineContext:
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(BOOL)arg4;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(BOOL)arg4;
- (BOOL)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(BOOL)arg5;
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(BOOL)arg2 textureOptions:(int)arg3;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(BOOL)arg4;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(BOOL)arg3;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (void)reloadPipelinesIfNeeded;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg2;
- (id)newComputePipelineStateForDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (id)newRenderPipelineStateWithDesc:(CDStruct_0fd8ad93)arg1;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_0fd8ad93)arg2 pipeline:(id)arg3;
- (struct __C3DFXProgram *)defaultProgramUsingTessellation:(BOOL)arg1;
- (id)renderResourceForProgramDesc:(CDStruct_089bc920)arg1 renderPassDescriptor:(id)arg2;

@end

