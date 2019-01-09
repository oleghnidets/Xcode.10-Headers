//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGHierarchyItem.h>

#import "IDEDebugNavigableModel.h"

@class DBGHierarchyNavigationCoordinator, DVTObservingToken, IDELaunchSession, NSString;

@interface DBGProxyHierarchyItem : DBGHierarchyItem <IDEDebugNavigableModel>
{
    DBGHierarchyNavigationCoordinator *_hierarchyNavigationCoordinator;
    DVTObservingToken *_proxiedObjectInvalidationObservingToken;
    id <DBGHierarchyNavigationProxiedObject> _proxiedObject;
}

@property(retain) id <DBGHierarchyNavigationProxiedObject> proxiedObject; // @synthesize proxiedObject=_proxiedObject;
@property(retain) DVTObservingToken *proxiedObjectInvalidationObservingToken; // @synthesize proxiedObjectInvalidationObservingToken=_proxiedObjectInvalidationObservingToken;
@property __weak DBGHierarchyNavigationCoordinator *hierarchyNavigationCoordinator; // @synthesize hierarchyNavigationCoordinator=_hierarchyNavigationCoordinator;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (void)_observeProxiedObjectInvalidationIfNecessary;
- (void)setNeedsHierarchyUpdate;
- (void)dealloc;
- (id)initWithProxyObject:(id)arg1 forHierarchyNavigationCoordinator:(id)arg2;
- (id)childItemsForCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

