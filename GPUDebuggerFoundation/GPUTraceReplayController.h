//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYContinuation, DYDevice, DYDeviceInfo, DYGuestAppSession, GPUDebuggerController, NSObject<OS_dispatch_queue>;

@interface GPUTraceReplayController : NSObject
{
    DYDevice *_device;
    BOOL _replayerReady;
    DYGuestAppSession *_replaySession;
    NSObject<OS_dispatch_queue> *_queue;
    GPUDebuggerController *_controller;
    DYContinuation *_invalidTerminationHandler;
    unsigned int _currentFunctionIndex;
    int _currentSubCommandIndex;
    unsigned int _lastFunctionIndex;
    NSObject<OS_dispatch_queue> *_modelQueue;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    struct DYInterposeVersion _interposerVersion;
}

@property(nonatomic) struct DYInterposeVersion interposerVersion; // @synthesize interposerVersion=_interposerVersion;
@property(readonly) int currentSubCommandIndex; // @synthesize currentSubCommandIndex=_currentSubCommandIndex;
@property(readonly) unsigned int currentFunctionIndex; // @synthesize currentFunctionIndex=_currentFunctionIndex;
@property(readonly) DYGuestAppSession *replaySession; // @synthesize replaySession=_replaySession;
@property BOOL replayerReady; // @synthesize replayerReady=_replayerReady;
@property(readonly) GPUDebuggerController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)connectedDevices;
- (id)prepareCaptureArchive:(id)arg1 withDestinationName:(id)arg2;
- (id)replayerGuestApp;
- (void)removeCaptureArchivesFromReplayDevice:(CDUnknownBlockType)arg1;
- (void)replayWithExperiment:(id)arg1 baseCaptureArchivePath:(id)arg2 playbackMessageHandler:(CDUnknownBlockType)arg3;
- (void)setReplayDeviceBackgroundImage:(id)arg1;
- (id)initiateDebuggerReplaySession:(BOOL)arg1;
- (id)_deleteArchivesFromDeviceIfNeeded:(BOOL)arg1;
- (id)initiateReplaySession:(id)arg1;
- (id)_launchReplayer;
- (id)endDebuggerReplaySession;
- (id)endReplaySession;
- (void)sendDebugBeginMessage:(id)arg1;
- (void)toggleDeviceSideThumbnailGeneration:(BOOL)arg1 withFuture:(id)arg2;
- (void)generateDependencyGraphThumbnailsForRequestedTextures:(id)arg1 withFuture:(id)arg2 forResolution:(CDStruct_b00b4bef)arg3;
- (void)_harvestDependencyGraphThumbnails:(id)arg1;
- (void)_harvestThumbnails:(id)arg1;
- (void)setDeviceSideOutlinePresentingEnabled:(BOOL)arg1 future:(id)arg2;
- (void)toggleDeviceSideDrawPresenting:(BOOL)arg1 withFuture:(id)arg2;
- (void)setWireframeLineWidth:(float)arg1 withFuture:(id)arg2;
- (void)toggleDeviceSideWireframePresenting:(BOOL)arg1 withFuture:(id)arg2;
- (void)postReplayMessage:(id)arg1 withFuture:(id)arg2;
- (void)_postDeviceSettingChanged:(id)arg1;
- (void)_replayToFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2 replyQueue:(id)arg3 withFutureResult:(id)arg4;
- (BOOL)_loopPlaybackFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)replayToFunctionIndex:(unsigned int)arg1 withFutureResult:(id)arg2;
- (void)replayToFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2 withFutureResult:(id)arg3;
- (void)invalidate;
- (id)setupDevice;
@property(readonly) DYDeviceInfo *playbackDeviceInfo;
- (void)_handleGuestAppStatusChangeNotification:(id)arg1;
- (id)initWithController:(id)arg1;

@end
