//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBGSnapshotManager, NSArray, NSMapTable, NSMutableArray, NSString;

@interface DBGSnapshot : NSObject
{
    NSString *_identifier;
    NSMapTable *_identifierToNodeMap;
    NSMutableArray *_rootLevelGroups;
    DBGSnapshotManager *_snapshotManager;
}

@property __weak DBGSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(retain) NSMutableArray *rootLevelGroups; // @synthesize rootLevelGroups=_rootLevelGroups;
@property(readonly) NSMapTable *identifierToNodeMap; // @synthesize identifierToNodeMap=_identifierToNodeMap;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_recursivelyDescribeNode:(id)arg1 withIndentation:(unsigned long long)arg2 includeProperties:(BOOL)arg3;
- (id)_recursivelyDescribeGroup:(id)arg1 withIndentation:(unsigned long long)arg2 isAdditonalGroup:(BOOL)arg3 includeProperties:(BOOL)arg4;
- (id)recursiveDescriptionIncludingProperties:(BOOL)arg1;
- (id)debugDescription;
- (id)rootLevelSnapshotGroupWithIdentifier:(id)arg1;
@property(readonly) NSArray *rootLevelSnapshotGroups;
- (id)nodesKindOfRuntimeClass:(id)arg1;
- (id)nodesMatchingPredicate:(id)arg1;
- (void)clearData;
- (void)addRootLevelGroup:(id)arg1;
- (id)init;

@end

