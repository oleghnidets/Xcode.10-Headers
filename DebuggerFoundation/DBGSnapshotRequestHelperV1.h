//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSnapshotRequestHelper.h"

@interface DBGSnapshotRequestHelperV1 : NSObject <DBGSnapshotRequestHelper>
{
}

+ (id)requestForRemainingLazyPropertiesForSnapshot:(id)arg1 sceneDebuggingEnabled:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)requestForEncodedScenesForSnapshot:(id)arg1;
+ (id)requestForRenderedSpritesForSnapshot:(id)arg1;
+ (id)requestForRenderedViewsForSnapshot:(id)arg1 excludingEffectViewClasses:(id)arg2;
+ (id)requestForRenderedEffectViewsOfClasses:(id)arg1 forSnapshot:(id)arg2;
+ (id)requestForEncodedCALayersForSnapshot:(id)arg1;
+ (id)initialRequestWithPropertyActions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

