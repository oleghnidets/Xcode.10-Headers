//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DebugHierarchyRequest, DebugHierarchyRuntimeInfo, NSMutableDictionary;

@interface DebugHierarchyRequestExecutionContext : NSObject
{
    DebugHierarchyRequest *_request;
    NSMutableDictionary *_topLevelGroups;
    NSMutableDictionary *_topLevelPropertyDescriptions;
    NSMutableDictionary *_identifierToObjectDescriptionMap;
    DebugHierarchyRuntimeInfo *_contextRuntimeInfo;
    NSMutableDictionary *_metaData;
}

+ (id)contextWithRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) DebugHierarchyRuntimeInfo *contextRuntimeInfo; // @synthesize contextRuntimeInfo=_contextRuntimeInfo;
@property(retain, nonatomic) NSMutableDictionary *identifierToObjectDescriptionMap; // @synthesize identifierToObjectDescriptionMap=_identifierToObjectDescriptionMap;
@property(retain, nonatomic) NSMutableDictionary *topLevelPropertyDescriptions; // @synthesize topLevelPropertyDescriptions=_topLevelPropertyDescriptions;
@property(retain, nonatomic) NSMutableDictionary *topLevelGroups; // @synthesize topLevelGroups=_topLevelGroups;
@property(retain, nonatomic) DebugHierarchyRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_collectRuntimeInformationForObjectType:(id)arg1;
- (id)runtimeTypeWithName:(id)arg1;
- (id)globalRuntimeInfo;
- (id)recursiveDescription;
- (id)requestResponse;
- (void)logRequestErrorWithTitle:(id)arg1 message:(id)arg2 fromMethod:(const char *)arg3;
- (void)addProperties:(id)arg1 toObject:(id)arg2;
- (void)_addDebugHierarchyObjectDict:(id)arg1 toGroupWithID:(id)arg2 asDirectChild:(BOOL)arg3 belowParent:(id)arg4;
- (void)_addDebugHierarchyObject:(id)arg1 withDict:(id)arg2 toTopLevelGroupWithID:(id)arg3;
- (void)addReferencedDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 toGroupWithID:(id)arg3 asDirectChild:(BOOL)arg4 belowParent:(id)arg5;
- (void)addDebugHierarchyObject:(id)arg1 withVisibility:(long long)arg2 fetchStatus:(long long)arg3 toGroupWithID:(id)arg4 asDirectChild:(BOOL)arg5 belowParent:(id)arg6;
- (BOOL)hasAlreadyFetchedDebugHierarchyObject:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

