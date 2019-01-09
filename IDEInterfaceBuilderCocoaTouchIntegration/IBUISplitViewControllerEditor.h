//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerEditor.h>

#import "IBUISplitViewControllerEditorViewDelegate.h"

@class NSString;

@interface IBUISplitViewControllerEditor : IBUIViewControllerEditor <IBUISplitViewControllerEditorViewDelegate>
{
    NSString *_targetRelation;
}

+ (Class)ibDropTargetResolverClass;
@property(copy, nonatomic) NSString *targetRelation; // @synthesize targetRelation=_targetRelation;
- (void).cxx_destruct;
- (id)editorView:(id)arg1 explanatoryTextForPlaceholderView:(id)arg2;
- (id)editorView:(id)arg1 subtitleForPlaceholderView:(id)arg2;
- (id)editorView:(id)arg1 titleForPlaceholderView:(id)arg2;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (id)_detailSidePlaceholderExplanatoryText;
- (id)_masterSidePlaceholderExplanatoryText;
- (id)_detailSidePlaceholderSubtitle;
- (id)_masterSidePlaceholderSubtitle;
- (id)_detailSidePlaceholderTitle;
- (id)_masterSidePlaceholderTitle;
- (double)gutterWidth;
- (double)masterColumnWidth;
- (Class)bottomBarClassForEditorView:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (id)dragInsertionIndicatorPathInView:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (id)targetRelationForDragInfo:(id)arg1;
- (id)targetRelationForPoint:(struct CGPoint)arg1 andPasteboard:(id)arg2;
- (id)bottomBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)editorViewForViewController:(id)arg1;
- (id)splitViewControllerEditorView;
- (id)detailViewController;
- (id)masterViewController;
- (id)editedSplitViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

