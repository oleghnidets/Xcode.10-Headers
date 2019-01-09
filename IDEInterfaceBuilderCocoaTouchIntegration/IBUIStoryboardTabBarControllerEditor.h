//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUITabBarControllerEditor.h>

#import "IBUIStoryboardTabBarControllerArrangementViewDelegate.h"

@class DVTDelayedInvocation, IBMutableIdentityDictionary, IBUIStoryboardTabBarControllerArrangementView, IBUITabBarItem, NSString;

@interface IBUIStoryboardTabBarControllerEditor : IBUITabBarControllerEditor <IBUIStoryboardTabBarControllerArrangementViewDelegate>
{
    IBUITabBarItem *_draggedTabBarItem;
    IBUIStoryboardTabBarControllerArrangementView *arrangementView;
    IBMutableIdentityDictionary *tabBarItemToSegueMap;
    DVTDelayedInvocation *contentInvocation;
    id <DVTCancellable> _tabBarItemsObservationToken;
    id <DVTInvalidation> _keyFrameObserver;
}

+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (unsigned long long)dragOperationForDraggingInfo:(id)arg1 initialOperation:(unsigned long long)arg2;
- (void)customizeDraggingPasteboard:(id)arg1 draggingContext:(id)arg2;
- (id)uniquePasteboardType;
- (BOOL)interceptEvent:(id)arg1;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (id)bottomBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)topBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)barViewForSimulatedBarMetrics:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)arrangementView:(id)arg1 didReorderItems:(id)arg2;
- (void)pullOrderOfSeguesFromArrangedTabBarItems:(id)arg1;
- (void)_setSimulatedTabBarItems:(id)arg1;
- (id)effectiveDisplayedTabBarItems;
- (void)synchronizeArrangementView;
- (id)editedTabBarControllerSeguesToRelatedDownstreamControllers;
- (void)_updateDisplaysAllTabsForReordering;
- (void)willClose;
- (void)didOpen;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

