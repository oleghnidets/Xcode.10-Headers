//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DebugHierarchyProperty.h"

@class DBGSnapshotNode, NSMutableDictionary, NSString;

@interface DBGSnapshotProperty : DebugHierarchyProperty
{
    id <DBGValue> _value;
    long long _fetchStatus;
    DBGSnapshotNode *_snapshotNode;
    NSMutableDictionary *_subpropertiesMap;
    DebugHierarchyProperty *_backingRuntimeTypeProperty;
}

+ (id)propertyWithDebugHierarchyProperty:(id)arg1;
+ (id)propertyWithName:(id)arg1 runtimeTypeName:(id)arg2 value:(id)arg3;
+ (id)propertyWithName:(id)arg1;
@property(retain, nonatomic) DebugHierarchyProperty *backingRuntimeTypeProperty; // @synthesize backingRuntimeTypeProperty=_backingRuntimeTypeProperty;
@property(retain) NSMutableDictionary *subpropertiesMap; // @synthesize subpropertiesMap=_subpropertiesMap;
@property __weak DBGSnapshotNode *snapshotNode; // @synthesize snapshotNode=_snapshotNode;
@property long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(retain) id <DBGValue> value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly) NSString *stringValue;
@property(readonly) float floatValue;
@property struct CGRect rectValue;
@property struct CGSize sizeValue;
@property struct CGPoint pointValue;
@property double CGFloatValue;
@property long long integerValue;
@property BOOL boolValue;
- (long long)options;
- (long long)visibility;
- (id)format;
- (id)logicalType;
- (id)dictionaryRepresentation;
- (BOOL)logicalTypeEquals:(id)arg1;
- (void)addSubproperty:(id)arg1;
- (id)subpropertyWithName:(id)arg1;
- (id)allSubproperties;
- (id)initWithName:(id)arg1 runtimeTypeName:(id)arg2 value:(id)arg3 fetchStatus:(long long)arg4;
- (id)JSONPropertyDescription;
- (void)updateWithJSONPropertyDescription:(id)arg1;

@end
