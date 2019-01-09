//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICAssetCapsule, IBICAssetOverviewCapsuleController, NSArray, NSEvent, NSMenu, NSSet;

@protocol IBICAssetOverviewCapsuleControllerDelegate <NSObject>
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 didTrackContextMenuFromEvent:(NSEvent *)arg2;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 willTrackContextMenuFromEvent:(NSEvent *)arg2;
- (NSMenu *)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 menuForEvent:(NSEvent *)arg2;
- (void)assetOverviewCapsuleControllerDidFinishBandSelecting:(IBICAssetOverviewCapsuleController *)arg1;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 didUpdateBandSelectionRect:(struct CGRect)arg2 withEvent:(NSEvent *)arg3 andInitialSelection:(NSSet *)arg4;
- (NSSet *)assetOverviewCapsuleControllerInitialSelectionForBandSelection:(IBICAssetOverviewCapsuleController *)arg1;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 assetCapsule:(IBICAssetCapsule *)arg2 cancelPreview:(id)arg3;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 assetCapsule:(IBICAssetCapsule *)arg2 togglePreview:(id)arg3;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 trackBandSelectionWithInitialMouseDown:(NSEvent *)arg2 currentMouseDragged:(NSEvent *)arg3 selectionBeforeMouseDown:(NSSet *)arg4;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 performDelete:(id)arg2;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidDragItems:(NSArray *)arg2 withMouseDown:(NSEvent *)arg3 andMouseDragged:(NSEvent *)arg4;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidOpenItems:(id <IBCollection>)arg2;
- (void)assetOverviewCapsuleController:(IBICAssetOverviewCapsuleController *)arg1 userDidSelectItems:(id <IBCollection>)arg2 withEvent:(NSEvent *)arg3;
- (NSSet *)assetOverviewCapsuleControllerInitialSelectionForFutureBandSelection:(IBICAssetOverviewCapsuleController *)arg1;
@end

