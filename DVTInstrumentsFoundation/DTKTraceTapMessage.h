//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

#import "NSSecureCoding.h"

@class NSDictionary;

@interface DTKTraceTapMessage : DTTapMessage <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *triggerMetadata;
@property(nonatomic) unsigned long long recordCount;
@property(nonatomic) unsigned long long logicalProcessorCore;
@property(nonatomic) unsigned long long triggerIndex;
@property(nonatomic) unsigned long long triggerCount;
@property(nonatomic) unsigned long long coreCount;
@property(copy, nonatomic) NSDictionary *sessionMetadata;
@property(nonatomic) unsigned int tapVersion;

@end

