//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class GPUTraceAPIItem;

@interface GPUTracePerformanceItem : GPUTraceOutlineItem
{
    struct _NSRange _selectionRange;
}

@property(nonatomic) struct _NSRange selectionRange; // @synthesize selectionRange=_selectionRange;
@property(readonly, nonatomic) BOOL hasData;
- (id)APIItem;
- (id)initWithController:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak GPUTraceAPIItem *parent; // @dynamic parent;

@end

