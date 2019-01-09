//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DVTReplacementViewDelegate.h"
#import "GTFActionEditorDelegate.h"
#import "GTFFileSystemEventStreamDelegate.h"
#import "NSSplitViewDelegate.h"
#import "SKSceneDelegate.h"
#import "SKSceneDocumentObserver.h"
#import "SKSceneEditControllerDelegate.h"

@class DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTReplacementView, DVTStepperTextField, GTFActionEditor, GTFActionLibrary, GTFFileSystemEventStream, NSArray, NSButton, NSImage, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSVisualEffectView, SKDocumentBorderedView, SKDocumentScopeBarView, SKDocumentSplitView, SKInputView, SKScene, SKSceneDocument, SKSceneEditController, SKSceneOutlineViewController, SKSceneOverlayView;

@interface SKSceneEditor : IDEEditor <SKSceneDocumentObserver, DVTReplacementViewDelegate, NSSplitViewDelegate, SKSceneDelegate, SKSceneEditControllerDelegate, GTFActionEditorDelegate, GTFFileSystemEventStreamDelegate>
{
    SKSceneDocument *_sceneDocument;
    DVTObservingToken *_documentStateKVOToken;
    DVTObservingToken *_documentAnimationPausedKVOToken;
    DVTObservingToken *_workspaceDocumentKVOToken;
    DVTNotificationToken *_itemRemoveNotificationToken;
    DVTNotificationToken *_windowOcclusionToken;
    id <NSObject> _replaceTimelineObserver;
    SKSceneEditController *_editController;
    DVTObservingToken *_editSelectionKVOToken;
    DVTGradientImageButton *_actionEditorToggleButton;
    NSImage *_swappedActionEditorToggleImage;
    NSImage *_swappedActionEditorToggleAlternateImage;
    DVTGradientImageButton *_outlineToggleButton;
    NSImage *_swappedOutlineToggleImage;
    NSImage *_swappedOutlineToggleAlternateImage;
    GTFFileSystemEventStream *_eventStream;
    float _oldPlaybackSpeed;
    unsigned long long _numPastesSinceLastCopy;
    struct CGPoint _curCameraPanCache;
    double _curCameraZoomCache;
    BOOL _isInitialLayout;
    DVTDelayedInvocation *_initialLayoutInvocation;
    BOOL _buttonImagesSwapped;
    BOOL _ignoreSelectionUpdates;
    DVTReplacementView *_actionEditorReplacementView;
    GTFActionEditor *_actionEditorViewController;
    NSMutableDictionary *_actionFilter;
    DVTObservingToken *_actionEditorSelectedItemsKVOToken;
    DVTObservingToken *_actionEditorFilterStringKVOToken;
    SKInputView *_skView;
    SKSceneOverlayView *_overlayView;
    SKDocumentSplitView *_splitView;
    SKDocumentSplitView *_outlineSplitView;
    SKDocumentBorderedView *_editorBackgroundView;
    SKDocumentScopeBarView *_toolbarView;
    NSVisualEffectView *_toolbarVisual;
    DVTReplacementView *_outlineReplacementView;
    SKSceneOutlineViewController *_outlineViewController;
    DVTObservingToken *_outlineSelectionKVOToken;
    NSButton *_zoomInButton;
    NSButton *_zoomRestoreButton;
    NSButton *_zoomOutButton;
    NSButton *_simulateEditButton;
    NSButton *_previewPausePlayButton;
    DVTBorderedView *_playbackSpeedView;
    DVTStepperTextField *_playbackSpeedField;
    NSTextField *_playbackSpeedLabel;
    SKScene *_scene;
    NSArray *_currentSelectedItems;
    NSMutableArray *_currentSelectedNodes;
    NSMutableArray *_currentSelectedObjects;
}

+ (id)toolTipForHideOutlineButton;
+ (id)toolTipForShowOutlineButton;
+ (id)toolTipForHideActionEditorViewButton;
+ (id)toolTipForShowActionEditorButton;
@property(readonly, nonatomic) NSMutableArray *currentSelectedObjects; // @synthesize currentSelectedObjects=_currentSelectedObjects;
@property(readonly, nonatomic) NSMutableArray *currentSelectedNodes; // @synthesize currentSelectedNodes=_currentSelectedNodes;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)rebuildShaderForPath:(id)arg1 skipIfNoChange:(BOOL)arg2;
- (void)rebuildAllShaders_skipIfNoChange:(BOOL)arg1;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)registerFSEvents;
- (id)allNodes;
- (id)nodesFilteredByString:(id)arg1;
- (void)_updateActionEditorSelectedNodesFilter;
- (void)_updateActionEditorAllNodesFilter;
- (void)_updateActionEditorFilterString;
- (void)_updateActionEditorFilteredActions:(id)arg1 toNodes:(id)arg2 sync:(BOOL)arg3;
- (void)_updateNodesWithActionsFilter:(id)arg1;
- (BOOL)actionEditor:(id)arg1 shouldSupportPastedActions:(id)arg2;
- (void)refreshObjectLibrary;
- (void)updateActionPreview;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (void)_registerActionEditorObservers;
- (id)getActionDocumentFromAssetManager:(id)arg1 url:(id)arg2;
- (void)sceneEditController:(id)arg1 didPerformDragOperation:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)sceneEditController:(id)arg1 draggingEntered:(id)arg2;
- (id)sceneEditControllerAcceptedDraggedTypes:(id)arg1;
- (void)sceneEditControllerEditNavigationGraph:(id)arg1;
- (void)sceneEditControllerEditTileMap:(id)arg1;
- (void)sceneEditController:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (BOOL)sceneEditController:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)sceneEditController:(id)arg1 didUpdateScene:(double)arg2;
- (void)sceneEditController:(id)arg1 beginEditingItem:(struct NSObject *)arg2;
- (void)_beginEditingItem:(struct NSObject *)arg1;
- (void)_deleteSelectedNodes;
- (void)_cutSelectedNodes;
- (void)_duplicateSelectedNodes;
- (void)_pasteNodes:(id)arg1;
- (void)_pasteNodesFromPboard;
- (void)_copySelectedNodes;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (void)editorMenuCreateNavigationGraphFromNodePhysicsBodies:(id)arg1;
- (void)editorMenuCreateNavigationGraphFromNodeBounds:(id)arg1;
- (void)editorMenuEditNavigationGraph:(id)arg1;
- (void)editorMenuEditTileMap:(id)arg1;
- (void)editorMenuToggleRulers:(id)arg1;
- (void)editorMenuToggleGrid:(id)arg1;
- (void)editorMenuToggleRotationSnapping:(id)arg1;
- (void)editorMenuToggleScaleSnapping:(id)arg1;
- (void)editorMenuTogglePositionSnapping:(id)arg1;
- (void)editorMenuToggleTileSnapping:(id)arg1;
- (void)editorMenuToggleGridSnapping:(id)arg1;
- (void)editorMenuToggleNodeSnapping:(id)arg1;
- (void)editorMenuBringToFront:(id)arg1;
- (void)editorMenuSendToBack:(id)arg1;
- (void)editorMenuEnableScrollWheelPanning:(id)arg1;
- (void)editorMenuZoomOut:(id)arg1;
- (void)editorMenuRestoreZoom:(id)arg1;
- (void)editorMenuZoomIn:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)playbackSpeedUpdated:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)_updateToolTipsForShowEditorViewButtons;
- (void)_updateLayoutPropertiesAfterUserDraggedDivider;
- (void)_updateLayoutAfterButtonPress:(id)arg1 useAnimation:(BOOL)arg2;
- (void)_updateLayoutAfterButtonPress:(id)arg1;
- (void)_updateLastOutlineViewState;
- (void)_updateLastActionEditorState;
- (void)_resizeOutlineToInitialWidth;
- (void)_resizeActionEditorToInitialHeight;
- (void)_updateOutlineVisibilityAfterButtonPress:(id)arg1 useAnimation:(BOOL)arg2;
- (void)_updateOutlineVisibilityAfterButtonPress:(id)arg1;
- (void)_setTitle:(id)arg1 forButton:(id)arg2 withColor:(id)arg3;
- (void)_swapButtonImage:(id)arg1;
- (void)_setToolbarBackgroundViewActive:(BOOL)arg1;
- (void)_setupToolbarViewLayout;
- (void)takeFocus;
- (void)_documentWillRemoveItem:(id)arg1;
- (void)_registerActionEditorSelectionObservers;
- (void)_registerOutlineSelectionObservers;
- (void)_registerEditControllerSelectionObservers;
- (void)selectDocumentLocations:(id)arg1;
- (void)_performBlockIfSelectionAvailable:(CDUnknownBlockType)arg1;
- (id)currentSelectedDocumentLocations;
- (id)_createNavNodesForNodes:(id)arg1;
- (id)_createNavNodeForNode:(id)arg1;
- (void)sceneDocument:(id)arg1 didCommitKey:(id)arg2 withValue:(id)arg3 onNode:(id)arg4;
- (void)sceneDocument:(id)arg1 didRemoveNodesFromParent:(id)arg2;
- (void)sceneDocument:(id)arg1 didAddNodes:(id)arg2 toParentNodes:(id)arg3;
- (void)sceneDocument:(id)arg1 didChangeActiveScene:(id)arg2;
- (void)_saveDefaultCameraState;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)_setupDefaultCameraState;
- (void)_registerDocumentObservers;
- (void)_registerForTimelineNotifications;
- (void)viewDidLayout;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
