//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XCSPlatformList : NSObject
{
    NSMutableDictionary *_platforms;
}

@property(retain, nonatomic) NSMutableDictionary *platforms; // @synthesize platforms=_platforms;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)blocksForSavingOnService:(id)arg1 xcode:(id)arg2;
- (void)addSimulatorPlatform:(id)arg1;
- (void)addPlatform:(id)arg1;
- (void)addPlatforms:(id)arg1;
- (id)init;

@end
