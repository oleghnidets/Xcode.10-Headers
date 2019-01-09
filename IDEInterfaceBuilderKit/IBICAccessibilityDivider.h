//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityElement.h"

#import "NSAccessibilityLayoutItem.h"

@class NSString;

@interface IBICAccessibilityDivider : NSAccessibilityElement <NSAccessibilityLayoutItem>
{
    struct {
        long long direction;
        long long position;
    } _divider;
}

+ (id)accessibilityDividerWithParent:(id)arg1 divider:(CDStruct_912cb5d2)arg2;
@property(nonatomic) CDStruct_912cb5d2 divider; // @synthesize divider=_divider;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHelp;
- (struct CGRect)accessibilityFrame;
- (long long)accessibilityOrientation;
- (id)accessibilityMaxValue;
- (id)accessibilityMinValue;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityTitle;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityParent;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithParent:(id)arg1 divider:(CDStruct_912cb5d2)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

