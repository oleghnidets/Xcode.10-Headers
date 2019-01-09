//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIssueProvider.h"

@class DVTObservingToken, GPUDebuggerController, GPUSharedWorkspaceUIState, GPUTraceSession, IDEDebugSession, IDEIssue, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, _TtC16DVTDocumentation23DVTDocumentationManager;

__attribute__((visibility("hidden")))
@interface GPUIssueProvider : IDEIssueProvider
{
    NSObject<OS_dispatch_queue> *_queue;
    GPUSharedWorkspaceUIState *_workspaceUIState;
    GPUDebuggerController *_controller;
    GPUTraceSession *_currentTraceSession;
    id _gpuDebuggingNotifyToken;
    DVTObservingToken *_debugStateObserverToken;
    DVTObservingToken *_sessionCreationObserverToken;
    DVTObservingToken *_sessionTerminationObserverToken;
    IDEDebugSession *_debugSession;
    id <IDEIssueRuntimeGroupingObject> _debugSessionRuntimeGroup;
    _TtC16DVTDocumentation23DVTDocumentationManager *_docManager;
    IDEIssue *_shaderProfilerResultUnavailableIssueCache;
    NSMutableArray *_allIssues;
    NSDictionary *_unsortedToSortedIndexMapDict;
}

+ (void)_associateIssue:(id)arg1 withFinding:(id)arg2;
+ (int)providerType;
@property(retain, nonatomic) NSDictionary *unsortedToSortedIndexMapDict; // @synthesize unsortedToSortedIndexMapDict=_unsortedToSortedIndexMapDict;
- (void).cxx_destruct;
- (id)_threadWithAPIItem:(id)arg1;
- (id)imageForIssueTypeIdentifier:(id)arg1 ofSize:(long long)arg2;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_clearIssues;
- (BOOL)_mapFunctionIndexUnsortedToSorted:(unsigned int *)arg1;
- (id)_createGPUSubIssueWithSubfinding:(id)arg1 withDocLocations:(id)arg2 issueTypeIdentifier:(id)arg3 apiItem:(id)arg4;
- (id)_sortedFunctionIndicesForFinding:(id)arg1;
- (id)_gpuIssueAllocateForFinding:(id)arg1 documentLocations:(id)arg2 issueTypeIdentifier:(id)arg3 fullMessage:(id)arg4;
- (id)_createGPUIssueFromFinding:(id)arg1 withDocLocations:(id)arg2 issueTypeIdentifier:(id)arg3 apiItem:(id)arg4;
- (id)_createIssueAndSubissuesFromAnalyzerFinding:(id)arg1 issueTypeIdentifier:(id)arg2 apiItem:(id)arg3;
- (id)_createIssueFromAnalyzerFinding:(id)arg1 issueTypeIdentifier:(id)arg2;
- (void)_recordNumIssues:(unsigned int)arg1;
- (unsigned int)_createIssuesFromFindings:(id)arg1 issuesHighOut:(id)arg2 issuesMediumOut:(id)arg3 issuesLowOut:(id)arg4;
- (id)_shaderProfilerResultUnavailableIssue;
- (unsigned int)_createAnalyzerIssues;
- (void)_createRuntimeIssues;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)_setupController;
- (void)primitiveInvalidate;

@end

