//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTObservingToken, IDEWorkspace, NSArray, NSMapTable, NSMutableArray;

@interface XRMemoryGraphDebuggerDomainWorkspace : NSObject
{
    DVTObservingToken *_workspacesLaunchSessionsObserver;
    DVTObservingToken *_workspaceValidObserver;
    NSMapTable *_launchSessionsToObserverTokens;
    NSMapTable *_debuggingAdditionsToObserverTokens;
    NSMutableArray *_mutableMemoryGraphDebuggers;
    id <XRMemoryGraphDebuggerDomainWorkspaceDelegate> _delegate;
    IDEWorkspace *_workspace;
}

@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(nonatomic) __weak id <XRMemoryGraphDebuggerDomainWorkspaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMemoryGraphDebuggerRemoved:(id)arg1;
- (void)_handleMemoryGraphDebuggerAdded:(id)arg1;
- (void)_handleMemoryGraphDebuggingAdditionAdded:(id)arg1;
- (void)_handleDebuggingAdditionsChanged:(id)arg1;
- (void)_handleLaunchSessionsAdded:(id)arg1;
- (void)_handleLaunchSessionsRemoved:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (void)_setupObservationsForWorkspace:(id)arg1;
@property(readonly, nonatomic) NSArray *memoryGraphDebuggers;
- (id)initWithWorkspace:(id)arg1 delegate:(id)arg2;

@end

