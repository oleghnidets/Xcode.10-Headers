//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIssueProvider.h"

@class DVTObservingToken, NSMapTable, NSMutableSet, NSNumber;

@interface IDEDiagnosticIssueProvider : IDEIssueProvider
{
    NSMutableSet *openDocumentFilePaths;
    NSMapTable *openDocFilePathToObserverTokensMap;
    NSMutableSet *_filePathsWithIssues;
    id _blueprintsObserver;
    DVTObservingToken *kvoEditorDocumentsToken;
    id _workspaceLiveSourceIssuesObserver;
    id _blueprintRemovedFileObserver;
    id <DVTInvalidation> _sourceFileObserver;
    NSNumber *_liveSourceIssuesEnabled;
}

+ (int)providerType;
+ (Class)diagnosticControllerClassForLanguage:(id)arg1;
+ (BOOL)_fileRepresentsPlayground:(id)arg1 inWorkspace:(id)arg2;
+ (BOOL)_fileRepresentsBuildables:(id)arg1 inWorkspace:(id)arg2;
+ (BOOL)providesIssuesForFile:(id)arg1 inWorkspace:(id)arg2;
+ (id)_diagnosticIssueProviderLogAspect;
- (void).cxx_destruct;
- (BOOL)allowsNewIssuesToBeCoalesced;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_updateOpenDocuments;
- (void)_stopObservingDiagnosticItemsWithFilePath:(id)arg1 removeIssues:(BOOL)arg2;
- (void)_startObservingDiagnosticItemsWithEditorDocument:(id)arg1;
- (void)_rebuildIssuesForFilePath:(id)arg1 withDiagnosticItems:(id)arg2 editorDocument:(id)arg3;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)_updatedLiveIssuePrefs;
- (void)_setIssues:(id)arg1 forFilePath:(id)arg2;

@end

