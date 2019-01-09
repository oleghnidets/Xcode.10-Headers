//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBGSnapshot, DBGSnapshotGroup, DebugHierarchyRuntimeType, NSArray, NSMutableDictionary, NSPointerArray, NSString;

@interface DBGSnapshotNode : NSObject
{
    DBGSnapshotGroup *_childGroup;
    NSString *_identifier;
    DebugHierarchyRuntimeType *_runtimeType;
    long long _visibility;
    DBGSnapshotNode *_parentNode;
    NSArray *_additionalGroups;
    NSMutableDictionary *_mutableProperties;
    NSPointerArray *_propertyObservers;
    DBGSnapshot *_snapshot;
}

+ (id)nodeWithIdentifier:(id)arg1;
@property __weak DBGSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain) NSPointerArray *propertyObservers; // @synthesize propertyObservers=_propertyObservers;
@property(retain) NSMutableDictionary *mutableProperties; // @synthesize mutableProperties=_mutableProperties;
@property(retain) NSArray *additionalGroups; // @synthesize additionalGroups=_additionalGroups;
@property __weak DBGSnapshotNode *parentNode; // @synthesize parentNode=_parentNode;
@property long long visibility; // @synthesize visibility=_visibility;
@property(retain) DebugHierarchyRuntimeType *runtimeType; // @synthesize runtimeType=_runtimeType;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)rootLevelGroup;
- (id)_describeTreeWithRoot:(id)arg1 depth:(unsigned long long)arg2;
- (id)debugDescriptionWithIndentationDepth:(unsigned long long)arg1 prefix:(id)arg2 includeProperties:(BOOL)arg3;
- (id)debugDescription;
- (void)removePropertyObserver:(id)arg1;
- (void)addPropertyObserver:(id)arg1;
- (void)didUpdateProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addProperty:(id)arg1;
- (id)propertiesMatchingPredicate:(id)arg1;
- (id)propertyWithName:(id)arg1;
- (BOOL)hasPropertyWithName:(id)arg1;
- (id)allProperties;
- (id)groupWithID:(id)arg1;
- (void)addAdditonalGroup:(id)arg1;
@property(retain) DBGSnapshotGroup *childGroup; // @synthesize childGroup=_childGroup;
@property(readonly) NSString *displayName;
- (id)initWithIdentifier:(id)arg1;

@end

