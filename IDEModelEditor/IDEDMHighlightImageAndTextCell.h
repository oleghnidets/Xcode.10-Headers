//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTImageAndTextCell.h"

@interface IDEDMHighlightImageAndTextCell : DVTImageAndTextCell
{
    BOOL _isSelected;
    struct _NSRange _titleHighlightRange;
}

@property BOOL isSelected; // @synthesize isSelected=_isSelected;
@property struct _NSRange titleHighlightRange; // @synthesize titleHighlightRange=_titleHighlightRange;
- (id)attributedStringValue;
- (id)_highlightUnderlineColor;
- (id)_highlightBackgroundColor;
- (id)_highlightGradient;
- (BOOL)hasSourceListControlView;

@end
