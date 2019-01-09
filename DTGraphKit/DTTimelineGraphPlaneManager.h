//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTTimelineGraph, DTTimelinePlane, NSMapTable, NSMutableArray, NSMutableSet;

@interface DTTimelineGraphPlaneManager : NSObject
{
    DTTimelineGraph *_timelineGraph;
    NSMutableArray *_planes;
    DTTimelinePlane *_topPinnedPlane;
    DTTimelinePlane *_bottomPinnedPlane;
    DTTimelinePlane *_backgroundPlane;
    DTTimelinePlane *_overlayPlane;
    NSMutableSet *_selectedPlanes;
    NSMutableArray *_postLayoutActions;
    BOOL _topPlaneChanged;
    BOOL _bottomPlaneChanged;
    BOOL _backgroundPlaneChanged;
    BOOL _overlayPlaneChanged;
    BOOL _planesArrayChanged;
    BOOL _selectedPlanesChanged;
    BOOL _scrollToLastPlane;
    NSMapTable *_groupPlaneChangesMap;
}

+ (id)planeManagerWithTimelineGraph:(id)arg1;
- (void).cxx_destruct;
- (void)addPostLayoutAction:(CDUnknownBlockType)arg1;
- (void)setScrollToLastPlane:(BOOL)arg1;
- (void)addSelectedPlane:(id)arg1;
- (void)setSelectedPlanes:(id)arg1;
- (void)collapseGroupPlane:(id)arg1;
- (void)expandGroupPlane:(id)arg1;
- (void)setRepresentativePlane:(id)arg1 onGroupPlane:(id)arg2;
- (void)setType:(long long)arg1 onGroupPlane:(id)arg2;
- (void)removeAllSubplanesFromGroupPlane:(id)arg1;
- (void)removeSubplane:(id)arg1 fromGroupPlane:(id)arg2;
- (void)insertSubplane:(id)arg1 afterSubplane:(id)arg2 inGroupPlane:(id)arg3;
- (void)addSubplanes:(id)arg1 toGroupPlane:(id)arg2;
- (void)addSubplane:(id)arg1 toGroupPlane:(id)arg2;
- (BOOL)setHeight:(double)arg1 onPlane:(id)arg2;
- (void)removeAllPlanes;
- (void)removePlane:(id)arg1;
- (void)insertPlane:(id)arg1 afterPlane:(id)arg2;
- (void)addPlanes:(id)arg1;
- (void)addPlane:(id)arg1;
- (void)removeOverlayPlane;
- (void)removeBackgroundPlane;
- (void)removeBottomPinnedPlane;
- (void)removeTopPinnedPlane;
- (void)setOverlayPlane:(id)arg1;
- (void)setBackgroundPlane:(id)arg1;
- (void)setBottomPinnedPlane:(id)arg1;
- (void)setTopPinnedPlane:(id)arg1;
- (void)commitChangesAnimated:(BOOL)arg1;
- (void)_removePlaneFromHierarchy:(id)arg1;
- (void)_reset;
- (id)initWithTimelineGraph:(id)arg1;

@end

