//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTStructuredLayoutViewState, NSView;

@protocol DVTStructuredLayoutView
@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState;

@optional
- (void)dvt_invalidateLayout;
- (void)dvt_didCompleteLayout;
- (void)dvt_didLayoutSubview:(NSView *)arg1;
- (void)dvt_willLayoutSubview:(NSView *)arg1;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
@end

