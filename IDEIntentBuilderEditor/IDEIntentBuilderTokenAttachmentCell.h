//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

@interface IDEIntentBuilderTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _shouldOverrideInteriorBackgroundStyle;
    BOOL _valid;
    long long _customInteriorBackgroundStyle;
}

@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property BOOL shouldOverrideInteriorBackgroundStyle; // @synthesize shouldOverrideInteriorBackgroundStyle=_shouldOverrideInteriorBackgroundStyle;
@property long long customInteriorBackgroundStyle; // @synthesize customInteriorBackgroundStyle=_customInteriorBackgroundStyle;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)tokenTintColor;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (long long)interiorBackgroundStyle;
- (id)accessibilityValue;
- (id)initWithTitle:(id)arg1;

@end

