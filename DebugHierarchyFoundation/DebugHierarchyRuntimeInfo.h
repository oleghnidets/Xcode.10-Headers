//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DebugHierarchyRuntimeInfo : NSObject
{
    NSMutableDictionary *_typeMap;
}

+ (id)runtimeInfoWithSerializedRepresentation:(id)arg1;
@property(retain) NSMutableDictionary *typeMap; // @synthesize typeMap=_typeMap;
- (void).cxx_destruct;
- (id)_describeTreeWithRoot:(id)arg1 depth:(unsigned long long)arg2 description:(id)arg3;
- (id)debugDescription;
- (void)clearData;
- (void)_recursivelyMergeInRuntimeType:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)_topLevelTypes;
- (id)serializedRepresentation;
- (void)_recursivelyIndexRuntimeType:(id)arg1;
- (void)_reindexAllTypes;
- (id)typeOfObject:(id)arg1;
- (id)typeWithName:(id)arg1;
- (void)addType:(id)arg1 toParentType:(id)arg2;
- (id)init;
- (id)initWithSerializedRepresentation:(id)arg1;

@end

