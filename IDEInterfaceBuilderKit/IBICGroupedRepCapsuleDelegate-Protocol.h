//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBICAssetCapsuleDelegate.h"
#import "IBViewDragDelegate.h"

@class IBICAssetGroupView, IBICAssetRepView, IBICDetailAreaGroupPath, IBICGroupedRepCapsule, NSObject<IBICAssetComponentID>;

@protocol IBICGroupedRepCapsuleDelegate <IBViewDragDelegate, IBICAssetCapsuleDelegate>
- (void)groupedRepCapsule:(IBICGroupedRepCapsule *)arg1 configureGroupView:(IBICAssetGroupView *)arg2 forGroupWithPath:(IBICDetailAreaGroupPath *)arg3;
- (void)groupedRepCapsule:(IBICGroupedRepCapsule *)arg1 configureAssetView:(IBICAssetRepView *)arg2 forAssetRepIdentifier:(NSObject<IBICAssetComponentID> *)arg3;
- (IBICDetailAreaGroupPath *)groupedRepCapsule:(IBICGroupedRepCapsule *)arg1 detailAreaPathForIdentifier:(NSObject<IBICAssetComponentID> *)arg2;
- (void)slottedAssetCapsuleWillLayout:(IBICGroupedRepCapsule *)arg1;
@end

