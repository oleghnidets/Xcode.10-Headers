//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserInterfaceValidations.h"

@class IBDecodedPasteboardContext, IBDocument, NSBezierPath, NSDictionary, NSMutableDictionary, NSString;

@interface IBEditor : NSObject <NSUserInterfaceValidations>
{
    id subElementWindowController;
    id selection;
    id windowController;
    IBDocument *document;
    IBEditor *parentEditor;
    IBEditor *childEditor;
    NSMutableDictionary *selectionMasks;
    id editedObject;
    BOOL showingSelection;
    NSBezierPath *activationHighlightPath;
    BOOL recalculateHighlightPath;
    BOOL draggedObjectsAreInObjectModel;
    NSDictionary *dragSourceContext;
    unsigned long long allowedDragSourceOperations;
    BOOL drawsActivationDarkening;
    IBDecodedPasteboardContext *decodedPasteboardContextCache;
    NSString *decodedPasteboardContextCacheID;
    id orderedSelectionAnchor;
    struct IBEditorExtraStorage *extraStorage;
    id editorReserved5;
    id editorReserved6;
    id editorReserved7;
    id editorReserved8;
}

+ (void)resetCursorRectsForObject:(id)arg1 inWindowController:(id)arg2;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)editorWindowDidBecomeMain:(id)arg1;
- (void)editorWindowDidResignMain:(id)arg1;
- (void)windowFinishedLiveResizing;
- (void)windowStartedLiveResizing;
- (struct CGSize)preferredSizeForLiveResizeSize:(struct CGSize)arg1;
- (void)setSelectedObjects:(id)arg1;
- (id)selectedObjects;
- (void)setActivationHighlightPath:(id)arg1;
- (id)activationHighlightPath;
- (id)calculateActivationHighlightPath;
- (void)setShowingSelection:(BOOL)arg1;
- (BOOL)isShowingSelection;
- (void)refreshSubElementExposer;
- (id)subElementsForObject:(id)arg1;
- (void)closeSubElementExposer;
- (void)resetCursorRects;
- (id)cachedDecodedPasteboardContextForDraggingInfo:(id)arg1 targetingObject:(id)arg2 pasteboardType:(id)arg3 insertionContext:(id)arg4;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (id)selectDragDestination:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (BOOL)canSizeObjectToFit:(id)arg1;
- (void)unembedObjects:(id)arg1;
- (void)embedObjects:(id)arg1;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (id)tellObjectToAcceptContentsOfPasteboard:(id)arg1 excludeConnections:(BOOL)arg2 selectNewObjects:(BOOL)arg3;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (id)calculatePasteboardInsertionContextFromPasteboard:(id)arg1;
- (id)calculatePasteboardInsertionContextFromDraggingInfo:(id)arg1;
- (id)calculatePasteboardInsertionContextFromDraggingInfo:(id)arg1 orPasteboard:(id)arg2;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)pasteAttributes:(id)arg1;
- (void)performDuplicate:(id)arg1;
- (void)performDelete:(id)arg1;
- (void)performPasteExcludingConnections:(id)arg1;
- (void)performPaste:(id)arg1;
- (void)performCopy:(id)arg1;
- (void)performCut:(id)arg1;
- (void)removeSelectedObjectsAndGuessNextSelection:(BOOL)arg1;
- (id)objectToSelectAfterDeletingObjects:(id)arg1;
- (BOOL)acceptAttributesFromPasteboard:(id)arg1;
- (BOOL)canAcceptAttributesFromPasteboard:(id)arg1;
- (id)pasteAttributesTargets;
- (id)parentEditor;
- (void)documentDidSave;
- (void)documentWillSave;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 dragContext:(id)arg7;
- (void)customizeDraggingPasteboard:(id)arg1 draggingContext:(id)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2 operation:(unsigned long long)arg3 previousOperation:(unsigned long long)arg4;
- (void)updateAttachmentStateForDragOperation:(unsigned long long)arg1 final:(BOOL)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)editorWindowController;
- (id)windowController;
- (struct CGRect)titleRectForEditingContext:(void *)arg1 userInfo:(id)arg2;
- (BOOL)stringEditingContextForEvent:(id)arg1 context:(void **)arg2 userInfo:(id *)arg3;
- (void)growToFitAfterStringEditing:(void *)arg1 userInfo:(id)arg2;
- (void)configureFieldEditor:(id)arg1 userInfo:(id)arg2;
- (void)configureFieldEditor:(id)arg1 context:(void *)arg2 userInfo:(id)arg3;
- (void)stringDidEndEditing:(id)arg1 withTextMovement:(long long)arg2 userInfo:(id)arg3 andContext:(void *)arg4;
- (void)stringEditorView:(id)arg1 didEndEditingWithTextMovement:(long long)arg2 userInfo:(id)arg3;
- (void)editStringValue:(id)arg1 context:(void *)arg2 userInfo:(id)arg3 configureLikeCell:(id)arg4;
- (void)restoreEditorState:(id)arg1;
- (id)captureEditorState;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)synchronizeFieldEditorPlacement;
- (id)editorView;
- (id)window;
- (BOOL)shouldCloseWithEvent:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (id)validatedOrderedSelectionAnchor;
- (void)setOrderedSelectionAnchor:(id)arg1;
- (id)orderedSelectionAnchor;
- (id)orderedSelectionCandiateLists;
- (id)children;
- (id)view;
- (id)selectedColorsForColorPanel;
- (id)selectedFontsForFontPanel;
- (long long)numberOfSelectedObjects;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (id)targetsForFloatingPanels;
- (BOOL)isClosing;
- (void)didClose;
- (void)willClose;
- (void)didOpen;
- (void)didDeactivate;
- (void)didActivate;
- (void)deactivate;
- (void)activate;
- (void)willEditChild:(id)arg1 inWindowController:(id)arg2;
- (BOOL)isSimulatingSheet;
- (id)document;
- (id)object;
- (id)editedObject;
- (id)childEditor;
- (void)close;
- (void)setChildEditor:(id)arg1;
- (void)dealloc;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 windowController:(id)arg3;
- (void)didSelect:(id)arg1 andDeselect:(id)arg2;
- (void)willSelect:(id)arg1 andDeselect:(id)arg2;
- (id)selectionOwner;
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
- (void)drawDragAndDropInsertionHints;
- (void)drawOverlay;
- (void)willDrawOverlay;
- (void)drawActivationDarkening;
- (void)editorWindowScrollViewDidScroll:(id)arg1;
- (void)drawSelection;
- (void)drawSubelements;
- (void)drawHighlightForObject:(id)arg1;
- (struct CGRect)windowClippingRectForHighlightingObject:(id)arg1;
- (id)buildHighlightMaskForObject:(id)arg1;
- (id)highlightColorForObject:(id)arg1;
- (void)clipToView:(id)arg1 inset:(struct CGSize)arg2;
- (id)overlayView;
- (void)invalidateAllSelectionMasks;
- (void)invalidateSelectionMaskForObject:(id)arg1;
- (void)invalidateHighlightPath;
- (void)setSelectionMask:(id)arg1 forObject:(id)arg2;
- (id)selectionMaskForObject:(id)arg1;
- (void)setDecorationsNeedDisplayForObject:(id)arg1;
- (void)setOverlayNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setOverlayNeedsDisplay:(BOOL)arg1;
- (void)setDrawsActivationDarkening:(BOOL)arg1;
- (BOOL)drawsActivationDarkening;
- (struct CGSize)decorationOutsetForChild:(id)arg1;
- (struct CGRect)insertionPolicyConfinementRect:(id)arg1;
- (struct CGRect)insertionPolicy:(id)arg1 dragAlignmentRectForObject:(id)arg2;

@end

