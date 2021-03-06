//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "GPUTimelineGraphTooltipView.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class GPUTimelineGraphDataSource, NSFont, NSMutableArray, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface GPUTraceCounterGraphTooltipView : NSView <NSTableViewDelegate, NSTableViewDataSource, GPUTimelineGraphTooltipView>
{
    double _columnMaxWidth[2];
    NSMutableArray *_tableRowNames;
    NSMutableArray *_tableRowValues;
    NSFont *_font;
    const struct GPUTimelineGraphDataPlaneCell *_previousCell;
    GPUTimelineGraphDataSource *_dataSource;
    NSTableView *_tableView;
}

@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)updateTooltipForPlane:(unsigned long long)arg1;
- (void)updateTooltipForItem:(const struct GPUTimelineGraphDataPlaneCell *)arg1 atIndex:(unsigned long long)arg2 plane:(unsigned long long)arg3;
- (void)_fitSize;
- (void)_addRowIfNeeded:(id)arg1 name:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

