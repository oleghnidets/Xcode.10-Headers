//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKActionPreviewViewController.h>

#import "SKAssetReferenceDelegate.h"
#import "SKSceneDelegate.h"
#import "SKSceneEditControllerDelegate.h"

@class DVTObservingToken, NSArray, NSMutableDictionary, NSString, NSURL, SKActionEditorNavigableRepresentedNode, SKAssetReference, SKInputView, SKScene, SKSceneDocument, SKSceneEditController, SKSceneNavigableRoot, SKSceneOverlayView;

@interface SKActionSpriteKitPreviewViewController : SKActionPreviewViewController <SKSceneEditControllerDelegate, SKAssetReferenceDelegate, SKSceneDelegate>
{
    SKScene *_skPreviewScene;
    SKScene *_inactiveScene;
    double _oldPlaybackSpeed;
    NSURL *_previewURL;
    SKAssetReference *_previewSceneReference;
    SKSceneDocument *_previewSceneDocument;
    SKSceneNavigableRoot *_sceneRootNavigable;
    SKActionEditorNavigableRepresentedNode *_navigableScene;
    NSArray *_selectedNodes;
    NSMutableDictionary *_uidToNavNode;
    NSMutableDictionary *_cachedActionAssignments;
    NSArray *_cachedSelectedNodes;
    SKSceneEditController *_editController;
    BOOL _isUpdatingSelection;
    double _lastSceneReloadTime;
    DVTObservingToken *_editSelectionKVOToken;
    BOOL _ignoreSelectionUpdates;
    BOOL _loadedNewPreviewScene;
    BOOL _isPreviewAnimating;
    SKInputView *_inputView;
    SKSceneOverlayView *_overlayView;
}

@property(retain, nonatomic) SKSceneOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) SKInputView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (BOOL)isAssetStillInWorkspace:(id)arg1;
- (void)assetReferenceInvalidated:(id)arg1;
- (void)verifyAssetReferenceIsValid:(id)arg1 forDocument:(id)arg2;
- (void)assetReference:(id)arg1 didUpdateFromDocument:(id)arg2;
- (void)sceneEditController:(id)arg1 beginEditingItem:(struct NSObject *)arg2;
- (void)sceneEditController:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (BOOL)sceneEditController:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)setActionsOnSceneNodes;
- (void)togglePausePlay;
- (void)togglePlayStop;
- (void)updateActionPreview;
- (void)forceStartSimulate;
- (BOOL)canLiveReloadPreview;
@property(retain, nonatomic) SKScene *previewScene;
- (id)topLevelNavigablePreviewSceneObject;
- (void)createNavigablePreviewNodes:(id)arg1;
- (void)updatePreviewScene:(id)arg1 sceneDocument:(id)arg2;
- (void)createPreviewSceneAssetReference;
- (id)previewURL;
- (void)setPreviewURL:(id)arg1;
- (void)restoreSelectedNodes:(id)arg1;
- (void)cacheSelectedNodes;
- (void)restoreCachedNodeAssignments:(id)arg1;
- (void)restoreCachedNodeAssignments;
- (void)cacheNodeAssignments:(id)arg1;
- (void)cacheNodeAssignments;
- (void)clearSelection;
- (id)selectedObjects;
- (void)_setSelectedObjects:(id)arg1 skipEditOverlay:(BOOL)arg2;
- (void)setSelectedObjects:(id)arg1;
- (void)_performBlockIfSelectionAvailable:(CDUnknownBlockType)arg1;
- (void)_registerEditControllerSelectionObservers;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
