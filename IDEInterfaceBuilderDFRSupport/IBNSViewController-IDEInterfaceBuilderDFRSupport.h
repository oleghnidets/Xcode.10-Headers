//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBNSViewController.h"

@class IBNSTouchBar, NSArray;

@interface IBNSViewController (IDEInterfaceBuilderDFRSupport)
+ (void)ibDFRReplaceIBNSViewControllerInstanceMethods;
- (BOOL)child:(id)arg1 canHostTouchBarInDocument:(id)arg2;
- (id)ibDFRSwizzledWindowWithCopiedViewHierarchySnapshotForLayoutEngine:(id)arg1 returningAddedRepresentedConstraintsForRepresentedViews:(id *)arg2;
- (BOOL)ibDFRShouldAcceptChildTouchBarInDocument:(id)arg1;
- (id)ibHitTestingView;
- (void)ibSwizzledDecodePlatformItems:(id)arg1;
- (void)ibSwizzledEncodePlatformItems:(id)arg1;

// Remaining properties
@property(retain) IBNSTouchBar *ibTouchBar; // @dynamic ibTouchBar;
@property(retain) NSArray *ibTouchBarItems; // @dynamic ibTouchBarItems;
@end
