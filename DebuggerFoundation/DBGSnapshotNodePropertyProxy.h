//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGBacktraceInspectorProvider.h"
#import "DBGClassHierarchyInspectorProvider.h"
#import "DBGObjectInstanceInspectorProvider.h"
#import "DBGSnapshotPropertyObserver.h"

@class DBGSnapshotNode, IDEThread, NSString;

@interface DBGSnapshotNodePropertyProxy : NSObject <DBGSnapshotPropertyObserver, DBGObjectInstanceInspectorProvider, DBGClassHierarchyInspectorProvider, DBGBacktraceInspectorProvider>
{
    id _dbgInspectedCell;
    DBGSnapshotNode *_snapshotNode;
    IDEThread *_threadWithBacktrace;
    NSString *_backtraceErrorMessage;
}

+ (id)proxyForSnapshotNode:(id)arg1;
@property(retain, nonatomic) NSString *backtraceErrorMessage; // @synthesize backtraceErrorMessage=_backtraceErrorMessage;
@property(retain, nonatomic) IDEThread *threadWithBacktrace; // @synthesize threadWithBacktrace=_threadWithBacktrace;
@property __weak DBGSnapshotNode *snapshotNode; // @synthesize snapshotNode=_snapshotNode;
- (void).cxx_destruct;
@property(readonly) NSString *classHierarchyForDisplay;
@property(readonly) BOOL shouldDisplayMallocZone;
@property(readonly) BOOL shouldDisplayInstanceSize;
@property(readonly) BOOL shouldDisplayKind;
@property(readonly) NSString *inferiorPointer;
@property(readonly) NSString *representedObjectClassNameForDisplay;
- (void)snapshotNode:(id)arg1 didUpdateProperty:(id)arg2;
- (id)_valueForSnapshotProperty:(id)arg1;
- (id)valueForUnavailablePropertyWithName:(id)arg1 onNode:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(retain) id dbgInspectedCell; // @synthesize dbgInspectedCell=_dbgInspectedCell;
- (void)dealloc;
- (id)initWithSnapshotNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *instanceSizeForDisplay;
@property(readonly) NSString *kindForDisplay;
@property(readonly) NSString *mallocZoneForDisplay;
@property(readonly) Class superclass;

@end

