//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNSceneRenderer.h"
#import "SCNTechniqueSupport.h"

@class AVAudioEngine, AVAudioEnvironmentNode, NSArray, NSColor, NSObject<OS_dispatch_queue>, NSOpenGLContext, NSString, SCNAuthoringEnvironment, SCNMTLRenderContext, SCNNode, SCNRecursiveLock, SCNRendererTransitionContext, SCNScene, SCNTechnique, SKScene, __SKSCNRenderer;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport>
{
    SCNScene *_scene;
    SCNNode *_pointOfView;
    SCNNode *_pointOfCulling;
    SCNRecursiveLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    unsigned long long __antialiasingMode;
    unsigned long long __preparePixelFormat;
    struct {
        struct __C3DFramebuffer *frameBuffer;
        struct __C3DFramebuffer *multisamplingFrameBuffer;
        struct CGSize drawableSize;
    } _framebufferInfo;
    id <MTLTexture> _mtlTexture;
    NSArray *_viewPoints;
    BOOL _pointOfViewWasSet;
    unsigned int _shouldDeleteFramebuffer:1;
    unsigned int _rendersContinuously:1;
    unsigned int _isPrivateRenderer:1;
    unsigned int _isViewPrivateRenderer:1;
    unsigned int _renderingSnapshot:1;
    unsigned int _renderingPrepare:1;
    unsigned int _autoUpdate:1;
    unsigned int _isLayerPrivateRenderer:1;
    unsigned int _contextIsDoubleBuffered:1;
    unsigned int _disableLinearRendering:1;
    double _currentSceneTime;
    double _currentSystemTime;
    double _deltaTime;
    double _forceSystemTime;
    double _lastSystemTime;
    double __nextFrameTime;
    SCNRendererTransitionContext *_transitionContext;
    BOOL _playing;
    BOOL _loops;
    BOOL _isAnimating;
    unsigned int _adaptativeState0;
    unsigned int _adaptativeEndFrame;
    unsigned int _adaptativeTechniqueTimeStamp;
    id _delegate;
    struct __C3DEngineContext *_engineContext;
    unsigned long long _renderingAPI;
    struct SCNVector4 __viewport;
    double __aspectRatio;
    // Error parsing type: , name: __drawableSafeAreaInsets
    struct _CGLContextObject *_glContext;
    NSOpenGLContext *__openGLContext;
    SCNMTLRenderContext *_renderContext;
    unsigned int _jitteringEnabled:1;
    unsigned int _frozen:1;
    unsigned int _privateRendererShouldForwardSceneRendererDelegationMessagesToOwner:1;
    CDStruct_f76d274b _privateRendererOwnerDelegationConformance;
    CDStruct_f76d274b _delegationConformance;
    NSColor *_backgroundColor;
    // Error parsing type: {C3DColor4=""(?="rgba"[4f]""{?="r"f"g"f"b"f"a"f}"simd")}, name: _c3dBackgroundColor
    SCNRenderer *_preloadRenderer;
    id <SCNSceneRenderer> _privateRendererOwner;
    SCNTechnique *_technique;
    SCNRenderer *_snapshotRenderer;
    __SKSCNRenderer *_overlayRenderer;
    id _overlayScene;
    BOOL _disableOverlays;
    float _contentScaleFactor;
    BOOL _isRunningInExtension;
    BOOL _watchAppInForeground;
    SCNAuthoringEnvironment *_authoringEnvironment;
    unsigned long long _debugOptions;
    BOOL _showStatistics;
    BOOL _showAuthoringEnvironment;
    double _statisticsTimeStamp;
}

+ (id)rendererWithContext:(struct _CGLContextObject *)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;
- (id)privateRendererOwner;
- (void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(BOOL)arg2 redisplay:(BOOL)arg3 jitterer:(id)arg4;
- (id)initOffscreenRendererWithSize:(struct CGSize)arg1 options:(id)arg2;
- (struct CGImage *)copySnapshotWithSize:(struct CGSize)arg1;
- (void)updateProbes:(id)arg1 atTime:(double)arg2;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (id)snapshotRendererWithSize:(struct CGSize)arg1;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize)arg2 antialiasingMode:(unsigned long long)arg3;
- (id)snapshotAtTime:(double)arg1;
- (struct CGImage *)createSnapshot:(double)arg1;
- (void)_installGLContextAndSetViewport;
- (void)render;
- (void)renderAtTime:(double)arg1 commandBuffer:(id)arg2 viewPoints:(id)arg3;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5;
- (void)_renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3;
- (void)renderAtTime:(double)arg1;
- (void)_renderAtTime:(double)arg1;
- (void)_drawAtTime:(double)arg1;
- (void)_draw;
- (void)_updateSystemTimeAndDeltaTimeWithCurrentTime:(double)arg1;
- (void)_drawScene:(struct __C3DScene *)arg1;
- (double)_computeNextFrameTime;
- (BOOL)_needsRedrawAsap;
- (BOOL)_drawSceneWithLegacyRenderer:(struct __C3DScene *)arg1;
- (BOOL)_drawSceneWithNewRenderer:(struct __C3DScene *)arg1;
- (void)_renderSceneWithEngineContext:(struct __C3DEngineContext *)arg1 sceneTime:(double)arg2;
- (void)_drawWithJitteringPresentationMode;
- (id)MTLTexture;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
- (void)set_drawableSafeAreaInsets: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 16@0:8, name: _drawableSafeAreaInsets
- (void)set_viewport:(struct SCNVector4)arg1;
- (struct SCNVector4)_viewport;
- (id)_authoringEnvironment;
- (void)setupAuthoringEnvironement;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
- (id)_compilationErrors;
- (void)set_collectCompilationErrors:(BOOL)arg1;
- (BOOL)_collectCompilationErrors;
- (void)set_disableLinearRendering:(BOOL)arg1;
- (BOOL)_disableLinearRendering;
- (void)set_enablesDeferredShading:(BOOL)arg1;
- (BOOL)_enablesDeferredShading;
- (void)_reloadDebugOptions;
@property(nonatomic) unsigned long long debugOptions;
- (void)_presentFramebuffer;
- (void)_runningInExtension;
@property(nonatomic) BOOL showsStatistics;
- (void)_displayLinkStatsTack;
- (void)_displayLinkStatsTick;
- (id)_copyPerformanceStatistics;
- (void)setFrozen:(BOOL)arg1;
- (BOOL)frozen;
- (BOOL)jitteringEnabled;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property(nonatomic) BOOL loops;
- (void)setRendersContinuously:(BOOL)arg1;
@property(getter=isPlaying) BOOL playing;
- (void)_stop;
- (void)_pause;
- (void)_play;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(struct SCNVector4)arg2;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (BOOL)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(struct SCNVector4)arg3;
- (id)_hitTest:(struct CGPoint)arg1 viewport:(struct CGSize)arg2 options:(id)arg3;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (void)_drawOverlaySceneAtTime:(double)arg1;
- (void)updateAndDrawStatisticsIfNeeded;
- (void)updateAtTime:(double)arg1;
- (void)_updateWithSystemTime:(double)arg1;
- (void)_update:(struct __C3DScene *)arg1;
- (void)_setOpenGLContext:(id)arg1 madeWithPixelFormat:(id)arg2;
- (id)_openGLContext;
@property(readonly, nonatomic) void *context;
- (void)setContext:(struct _CGLContextObject *)arg1;
- (void)set_deltaTime:(double)arg1;
- (void)set_systemTime:(double)arg1;
- (double)_systemTime;
@property(nonatomic) double sceneTime;
- (void)_setSceneTime:(double)arg1;
@property(nonatomic) double currentTime;
- (BOOL)_needsRepetitiveRedraw;
@property(readonly, nonatomic) double nextFrameTime;
- (double)_nextFrameTime;
- (void)set_nextFrameTime:(double)arg1;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1;
- (void)set_privateRendererShouldForwardSceneRendererDelegationMessagesToOwner:(BOOL)arg1;
- (BOOL)_privateRendererShouldForwardSceneRendererDelegationMessagesToOwner;
@property(nonatomic) __weak id <SCNSceneRendererDelegate> delegate;
- (void)_updateEngineCallbacks;
- (id)programWithNode:(id)arg1 withMaterial:(id)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (void)_releasePreloadRenderer;
- (BOOL)_preparePreloadRenderer;
- (BOOL)_preloadResource:(id)arg1 abortHandler:(CDUnknownBlockType)arg2;
- (void)set_computedLightingEnvironmentMapsPath:(id)arg1;
- (id)_computedLightingEnvironmentMapsPath;
- (void)set_recordWithoutExecute:(BOOL)arg1;
- (BOOL)_recordWithoutExecute;
- (void)_renderGraphFrameRecordingAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_renderGraphEnabled;
- (void)set_renderGraphEnabled:(BOOL)arg1;
- (id)_copyRenderGraphDescription;
- (id)_copyPassDescription;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)_overlaysDidUpdate:(id)arg1;
- (id)_prepareSKRenderer;
- (id)_setupSKRendererIfNeeded;
- (id)metalDevice;
- (id)metalLayer;
- (void)setDisableOverlays:(BOOL)arg1;
- (BOOL)disableOverlays;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)setScene:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)__setTransitionContext:(id)arg1;
- (void)_updatePointOfView;
- (id)_defaultPOVForScene:(id)arg1;
- (BOOL)autoAdjustCamera;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)_writeSubdivCacheForHash:(id)arg1 dataProvider:(CDUnknownBlockType)arg2;
- (id)_readSubdivCacheForHash:(id)arg1;
- (void)_willRenderScene:(id)arg1;
- (void)_didRenderScene:(id)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)_unprojectPoint:(struct SCNVector3)arg1 viewport:(struct SCNVector4)arg2;
- (struct SCNVector3)_projectPoint:(struct SCNVector3)arg1 viewport:(struct SCNVector4)arg2;
- (void)_projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2 viewport:(struct SCNVector4)arg3;
-     // Error parsing type: 32@0:816, name: viewportWithLetterboxingIfNeeded:
- (id)pointOfCulling;
- (void)setPointOfCulling:(id)arg1;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL autoenablesDefaultLighting;
- (const void *)__CFObject;
- (long long)_getFrameIndex;
- (id)_renderContextMetal;
-     // Error parsing type: ^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIdddddddddddddddIIIIIIIIIIIIIIIIIdIdIdddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][14{?=iII}][14I]^?^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16@0:8, name: _rendererContextGL
- (struct __C3DEngineContext *)_engineContext;
- (struct CATransform3D)_screenTransform;
- (void)set_screenTransform:(struct CATransform3D)arg1;
- (double)_aspectRatio;
- (void)set_aspectRatio:(double)arg1;
- (double)_superSamplingFactor;
- (void)set_superSamplingFactor:(double)arg1;
- (void)set_preparePixelFormat:(unsigned long long)arg1;
- (unsigned long long)_preparePixelFormat;
- (void)set_antialiasingMode:(unsigned long long)arg1;
- (unsigned long long)_antialiasingMode;
- (unsigned long long)_sampleCount;
- (void)_createPrepareFramebufferIfNeeded;
- (void)_createOffscreenFramebufferIfNeeded;
- (void)_prepareGLRenderTarget;
- (void)_prepareRenderTarget;
- (void)_resolveAndDiscardGL;
- (void)_endFrame;
- (void)_beginFrame;
- (void)_deleteGLFramebuffer;
- (void)_invalidateFramebuffer;
- (void)_setBackingSize:(struct CGSize)arg1;
- (struct CGSize)_backingSize;
- (double)_contentsScaleFactor;
- (void)_setContentsScaleFactor:(double)arg1;
- (void)_clearBackBuffer;
- (void)_installViewport;
- (BOOL)_installContext;
- (id)_renderingQueue;
- (void)unlock;
- (void)lock;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (id)currentCommandBuffer;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(BOOL)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(BOOL)arg4 context:(void *)arg5 renderingAPI:(unsigned long long)arg6;
- (void)_setupOffscreenRendererWithSize:(struct CGSize)arg1;
- (id)init;
- (BOOL)renderMovieToURL:(id)arg1 size:(struct CGSize)arg2 antialiasingMode:(unsigned long long)arg3 attributes:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

