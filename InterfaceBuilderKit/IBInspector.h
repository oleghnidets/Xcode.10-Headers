//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArrayController, NSView;

@interface IBInspector : NSObject
{
    NSArrayController *inspectedObjectsController;
    struct CGSize minimumViewBoundSize;
    NSView *inspectorView;
    BOOL active;
    void *reserved[8];
}

+ (BOOL)supportsMultipleObjectInspection;
+ (id)sharedInstance;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4 maximumWidth:(double *)arg5;
- (id)toolTipDisplayingViewForPoint:(struct CGPoint)arg1;
- (id)documentationInfoForView:(id)arg1;
- (id)affectedKeyPathsOfInspectedObjectsForView:(id)arg1;
- (struct CGSize)minimumViewBoundSize;
- (void)deactivate;
- (void)activate;
- (id)viewNibName;
- (id)view;
- (id)document;
- (id)inspectedObject;
- (id)inspectedObjects;
- (id)inspectedObjectsController;
- (void)refresh;
- (void)applyLockStateReflection;
- (void)clearLockStateReflection;
- (void)reflectLockedStateForView:(id)arg1;
- (void)clearLockedStateForView:(id)arg1;
- (void)debugPossiblyUnknownKeyPath:(id)arg1 forObject:(id)arg2;
- (void)refreshInspectedObjectsController;
- (id)label;
- (id)title;
- (void)dealloc;
- (id)init;

@end
