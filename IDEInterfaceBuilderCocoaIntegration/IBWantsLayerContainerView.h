//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class NSTableView;

@interface IBWantsLayerContainerView : DVTLayoutView_ML
{
    NSTableView *_tableView;
}

@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)scrollView;

@end

