//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class CALayer;

@interface IBOutlineViewHeaderRowView : NSTableRowView
{
    CALayer *_topLineLayer;
    BOOL _showTopLine;
}

@property(nonatomic) BOOL showTopLine; // @synthesize showTopLine=_showTopLine;
- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_updateTopLineLayerVisibility;

@end
