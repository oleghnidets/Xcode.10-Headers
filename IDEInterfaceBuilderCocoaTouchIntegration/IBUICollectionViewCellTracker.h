//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionReusableViewTracker.h>

@interface IBUICollectionViewCellTracker : IBUICollectionReusableViewTracker
{
    struct CGRect initialFrame;
    struct CGSize initialCellSize;
    struct CGSize initialCollectionViewFlowLayoutCellSize;
    BOOL startedWithCustomCellSize;
}

- (struct CGRect)constrainCellFrameToSection:(struct CGRect)arg1;
- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2 isFinalFrame:(BOOL)arg3;
- (BOOL)shouldSetCollectionViewFlowLayoutItemSize;
- (id)collectionView;
- (id)trackedCollectionViewCell;

@end

