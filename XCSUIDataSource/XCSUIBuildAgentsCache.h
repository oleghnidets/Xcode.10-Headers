//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCSUICache.h"

@class DVTDispatchLock, NSArray, NSMutableDictionary;

@interface XCSUIBuildAgentsCache : NSObject <XCSUICache>
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_buildAgentsByClientUUID;
}

- (void).cxx_destruct;
- (void)purgeSnapshotsForService:(id)arg1;
- (void)purgeSnapshot:(id)arg1;
- (void)cacheSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)primaryBuildAgentForService:(id)arg1;
- (void)cachePrimaryBuildAgent:(id)arg1 forService:(id)arg2;
- (id)description;
- (id)init;

@end
