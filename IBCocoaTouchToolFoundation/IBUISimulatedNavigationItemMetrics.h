//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSString;

@interface IBUISimulatedNavigationItemMetrics : NSObject <IBBinaryArchiving>
{
    NSString *_title;
    NSString *_backButtonTitle;
    long long _largeTitleDisplayMode;
}

@property(nonatomic) long long largeTitleDisplayMode; // @synthesize largeTitleDisplayMode=_largeTitleDisplayMode;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isEqualToNavigationItemMetrics:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTitle:(id)arg1 backButtonTitle:(id)arg2 largeTitleDisplayMode:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

