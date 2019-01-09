//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDropTargetResolverDelegate.h"
#import "IBSceneUpdateRequestConfiguring.h"
#import "IBSelectionOwnerDelegate.h"
#import "NSUserInterfaceValidations.h"

@class DVTNotificationToken, IBAbstractDocumentEditor, IBCanvasView, IBDecodedPasteboardContent, IBDelegatedCanvasOverlay, IBDocument, IBDragAndDropInsertionIndicator, IBDropTargetResolver, IBEditorCanvasFrame, IBEditorCanvasFrameController, IBMutableIdentityDictionary, IBSelectionOwner, NSBezierPath, NSDictionary, NSSet, NSString;

@interface IBEditor : NSObject <IBSelectionOwnerDelegate, IBDropTargetResolverDelegate, IBSceneUpdateRequestConfiguring, NSUserInterfaceValidations>
{
    IBSelectionOwner *_selection;
    IBDragAndDropInsertionIndicator *_insertionIndicator;
    IBDocument *_document;
    IBMutableIdentityDictionary *_childEditors;
    id <DVTInvalidation> _selctionDrawingToken;
    id <DVTInvalidation> _activationDarkeningToken;
    NSBezierPath *_activationHighlightPath;
    BOOL _recalculateActivationPath;
    BOOL _draggedObjectsAreInObjectModel;
    NSDictionary *_dragSourceContext;
    unsigned long long _allowedDragSourceOperations;
    BOOL _drawsActivationDarkening;
    IBDecodedPasteboardContent *_decodedPasteboardContextCache;
    NSString *_decodedPasteboardContextCacheID;
    NSObject *_orderedSelectionAnchor;
    NSSet *_selectionPriorToEventRouting;
    BOOL _closing;
    DVTNotificationToken *_frameChangeToken;
    DVTNotificationToken *_overlayBoundsChangeToken;
    NSSet *_entryPointObservations;
    BOOL _active;
    BOOL _closed;
    BOOL _hasAnyObjectsSelected;
    BOOL _frameControllerDragAndDropInProgress;
    NSObject *_editedObject;
    IBEditor *_parentEditor;
    IBDropTargetResolver *_dropTargetResolver;
    IBEditorCanvasFrameController *_frameController;
}

+ (void)resetCursorRectsForObject:(id)arg1 inFrameController:(id)arg2;
+ (Class)ibDropTargetResolverClass;
+ (Class)ibDragAndDropInsertionIndicatorClass;
@property(copy, nonatomic) NSSet *selectionPriorToEventRouting; // @synthesize selectionPriorToEventRouting=_selectionPriorToEventRouting;
@property(nonatomic, getter=isFrameControllerDragAndDropInProgress) BOOL frameControllerDragAndDropInProgress; // @synthesize frameControllerDragAndDropInProgress=_frameControllerDragAndDropInProgress;
@property(readonly) IBEditorCanvasFrameController *frameController; // @synthesize frameController=_frameController;
@property(nonatomic) BOOL hasAnyObjectsSelected; // @synthesize hasAnyObjectsSelected=_hasAnyObjectsSelected;
@property(getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property(readonly) IBDropTargetResolver *dropTargetResolver; // @synthesize dropTargetResolver=_dropTargetResolver;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly) IBEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
@property(readonly) NSObject *editedObject; // @synthesize editedObject=_editedObject;
- (void).cxx_destruct;
- (BOOL)canDisplayHoverDecorators;
- (BOOL)hasAnyDescendentEditorSupportsHoverDecorators;
- (BOOL)supportsHoverDecorators;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (void)setSecondaryGrowthDirection:(long long)arg1 forDragAndDropPoliciesWithRelation:(id)arg2;
- (void)setPrimaryGrowthDirection:(long long)arg1 forDragAndDropPoliciesWithRelation:(id)arg2;
- (void)dropTargetResolver:(id)arg1 orderedRelation:(id)arg2 insertionIndexDidChange:(long long)arg3;
- (void)dropTargetResolver:(id)arg1 orderedRelation:(id)arg2 insertionIndexWillChange:(long long)arg3;
- (void)drawDragAndDropInsertionHints;
- (void)setNeedsDisplayInDragInsertionIndicatorRect;
- (id)insertionIndicator;
- (void)editorCanvasFrameDidCompleteLayout;
- (id)descendantsDrawingOverlayContent;
- (struct CGRect)rectForDecorationsOverlayWithScale:(double)arg1;
- (void)canvasFrameOverlayNeedsDisplay;
- (void)willDrawActivationDarkening;
- (void)updateActivationPathIfNeeded;
- (void)drawActivationDarkening;
- (id)activationHighlightColor;
- (BOOL)effectiveDrawsActivationDarkening;
- (BOOL)childEditorShouldDrawActivationDarkening:(id)arg1;
- (void)drawSelectionMasks;
- (BOOL)objectShouldShowSelectionHighlight:(id)arg1;
- (void)drawSelectionHighlightForObject:(id)arg1;
- (struct CGRect)highlightRectForObject:(id)arg1;
- (struct CGRect)windowClippingRectForHighlightingObject:(id)arg1;
- (id)highlightColorForObject:(id)arg1;
- (void)invalidateActivationPath;
- (void)setDecorationsNeedDisplayForObject:(id)arg1;
- (CDStruct_c519178c)decorationInsetForChild:(id)arg1;
- (id)representativeChildViewInSameWindow:(id)arg1;
- (BOOL)isChildViewInSameWindow:(id)arg1;
- (id)calculateActivationHighlightPath;
- (struct CGRect)rectForActivationHighlightForObject:(id)arg1 inFrameController:(id)arg2;
- (void)resetCursorRects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (id)objectsForPerformingMenuCommand;
- (void)positionChildEditorFrames;
- (BOOL)shouldGuessNextSelectionOnDelete;
- (void)pasteAttributes:(id)arg1;
- (void)performDuplicate:(id)arg1;
- (void)performClearWithChildren:(id)arg1;
- (void)performDeleteWithChildren:(id)arg1;
- (void)performPaste:(id)arg1;
- (void)performCopy:(id)arg1;
- (void)performCut:(id)arg1;
- (BOOL)acceptAttributesFromPasteboard:(id)arg1;
- (BOOL)canAcceptAttributesFromPasteboard:(id)arg1;
- (id)pasteAttributesTargets;
- (id)cachedDecodedPasteboardContentForDraggingInfo:(id)arg1 targetingObject:(id)arg2 pasteboardType:(id)arg3 insertionContext:(id)arg4;
- (void)didAcceptDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)clearDecodedPasteboardContextCache;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (id)tellObjectToAcceptContentsOfPasteboard:(id)arg1 selectNewObjects:(BOOL)arg2;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 isGeneratingDragPreview:(BOOL)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromDraggingInfo:(id)arg2 isGeneratingDragPreview:(BOOL)arg3;
- (void)populatePasteboardInsertionContext:(id)arg1 fromDraggingInfo:(id)arg2 orPasteboard:(id)arg3 isGeneratingDragPreview:(BOOL)arg4;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (unsigned long long)dragObjects:(id)arg1 withDraggedObjectsImageState:(id)arg2 aligningFrameWithIdentifier:(id)arg3 withRect:(struct CGRect)arg4 fromView:(id)arg5 inMouseDownEvent:(id)arg6 mouseDraggedEvent:(id)arg7 allowedOperations:(unsigned long long)arg8 dragContext:(id)arg9;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 dragContext:(id)arg7;
- (id)initialDragImageState:(id)arg1;
- (void)customizeDraggingPasteboard:(id)arg1 draggingContext:(id)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2 operation:(unsigned long long)arg3 previousOperation:(unsigned long long)arg4;
- (void)updateAttachmentStateForDragOperation:(unsigned long long)arg1 final:(BOOL)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (unsigned long long)dragOperationForDraggingInfo:(id)arg1 initialOperation:(unsigned long long)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)autoscrollEditedContentWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (void)editorCanvasFrameFrameDidChange:(id)arg1;
- (void)overlayBoundsDidChange:(id)arg1;
- (void)noteAncestorEditorDidChangeViewGeometry:(id)arg1;
- (void)scrollDescendantsToVisible:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)documentDidSave;
- (void)documentWillSave;
- (id)connectionSourceForEvent:(id)arg1;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_31865a80)arg2;
- (void)didResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (void)willResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (CDStruct_c519178c)canvasAlignmentInsetForEditorFrame;
- (BOOL)shouldCloseWithEvent:(id)arg1;
- (BOOL)shouldDragFrameWithMouseDownInEditedRect:(id)arg1;
- (BOOL)forwardEvent:(id)arg1 toResponder:(id)arg2 makeFirstResponderIfNeeded:(BOOL)arg3 reHitTest:(BOOL)arg4 allowedEvents:(unsigned long long)arg5;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)handleDragForChild:(id)arg1 forDragEvent:(id)arg2;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (BOOL)isDocumentObjectCurrentlySelectable:(id)arg1;
- (id)editableStringAreas;
- (id)stringEditingContextForEvent:(id)arg1;
- (void)editStringWithContext:(id)arg1;
@property(copy) id <IBCollection> selectedObjects;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)objectsForSelectingAll;
- (void)removeChildren:(id)arg1 andGuessNextSelection:(BOOL)arg2 withMode:(unsigned long long)arg3;
- (void)removeSelectedObjectsAndGuessNextSelection:(BOOL)arg1 withMode:(unsigned long long)arg2;
- (id)objectToSelectAfterDeletingObjects:(id)arg1;
@property(readonly, nonatomic) NSObject *validatedOrderedSelectionAnchor;
- (id)orderedSelectionCandidateLists;
- (BOOL)selectionOwner:(id)arg1 canSelect:(id)arg2;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (BOOL)selectionContainsObject:(id)arg1;
- (long long)numberOfSelectedObjects;
- (void)clearSelection;
- (void)deselectObjects:(id)arg1;
- (void)deselectObject:(id)arg1;
- (void)selectObjects:(id)arg1 withEvent:(id)arg2;
- (void)selectObject:(id)arg1 withEvent:(id)arg2;
- (void)selectObject:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)selectObjects:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)selectObjects:(id)arg1;
- (void)selectObject:(id)arg1;
- (id)selectedObjectsInRelationship:(id)arg1;
- (id)orderedSelectedObjects;
- (id)selection;
- (void)changeFont:(id)arg1;
- (id)selectedFontsForFontPanel;
- (id)targetsForFloatingPanels;
- (void)canvasKeyStateDidChange;
- (BOOL)shouldBlockDragsUntilHoldFromDraggingEntered;
- (BOOL)shouldRemainOpenWhenOpeningOtherEditors;
- (void)didClose;
- (void)childEditorWillClose:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (void)didDeactivate;
- (void)didActivate;
- (void)willEditChild:(id)arg1 inFrameController:(id)arg2;
- (void)close;
- (id)frontmostDescendantAtLocation:(struct CGPoint)arg1 inView:(id)arg2 criteria:(long long)arg3;
- (id)descendantsFromBackToFrontAtLocation:(struct CGPoint)arg1 inView:(id)arg2 criteria:(long long)arg3;
@property BOOL drawsActivationDarkening;
- (id)selectionOwner;
@property(retain, nonatomic) NSObject *orderedSelectionAnchor;
- (void)setActivationHighlightPath:(id)arg1;
- (id)activationHighlightPath;
@property(readonly, nonatomic) IBDelegatedCanvasOverlay *overlayView;
- (void)invokeSelectionShowingChangingBlock:(CDUnknownBlockType)arg1;
- (id)installSelectionDrawingHandlers;
- (BOOL)actuallyShowsSelectionIndicators;
- (BOOL)forbidsShowingSelectionIndicators;
- (BOOL)wantsToShowSelectionIndicators;
@property(readonly) IBEditorCanvasFrame *editorCanvasFrame;
@property(readonly) IBAbstractDocumentEditor *documentEditor;
- (BOOL)isClosing;
- (BOOL)isSimulatingSheet;
- (id)children;
- (id)childEditorForObject:(id)arg1;
- (void)removeChildEditor:(id)arg1;
- (void)addChildEditor:(id)arg1;
- (id)childEditors;
- (id)editorView;
- (id)editorWindow;
@property(readonly) IBCanvasView *canvasView;
- (id)canvasViewController;
- (id)document;
@property(readonly, copy) NSString *description;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
