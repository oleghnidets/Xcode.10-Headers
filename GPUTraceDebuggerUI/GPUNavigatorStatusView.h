//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

#import "DVTStructuredLayoutView.h"

@class DVTStructuredLayoutViewState;

__attribute__((visibility("hidden")))
@interface GPUNavigatorStatusView : NSControl <DVTStructuredLayoutView>
{
    DVTStructuredLayoutViewState *dvt_layoutState;
}

@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState; // @synthesize dvt_layoutState;
- (void).cxx_destruct;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;

@end

