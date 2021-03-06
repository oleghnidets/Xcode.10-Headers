//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEDebuggingAdditionUIController.h"

@class DVTExtension, DVTStackBacktrace, GPUDebuggingAddition, GPUTraceSession, IDEBreakpointManager, IDEEditorArea, IDEWorkspaceDocument, IDEWorkspaceTabController, NSCell, NSString;

@interface GPUDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    DVTExtension *_extension;
    id <IDEOpenRequest> _documentOpenRequestToken;
    IDEBreakpointManager *_breakpointsManager;
    IDEEditorArea *_editorArea;
    NSCell *_trayFPSCell;
    id <DVTInvalidation> _gfxDebuggingAdditionObserver;
    IDEWorkspaceTabController *_workspaceTabController;
    GPUDebuggingAddition *_debuggingAddition;
    GPUTraceSession *_currentTraceSession;
}

+ (unsigned long long)referenceCountForTraceSession:(id)arg1;
+ (void)removeTraceSessionReference:(id)arg1 forTraceSession:(id)arg2;
+ (void)addTraceSessionReference:(id)arg1 forTraceSession:(id)arg2;
+ (void)setGPUDebuggingAdditionUIControllerIdentifier:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak GPUTraceSession *currentTraceSession; // @synthesize currentTraceSession=_currentTraceSession;
@property(retain) GPUDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)stepToNextCall:(id)arg1;
- (void)stepToPreviousCall:(id)arg1;
- (void)stepToNextDisplayableCall:(id)arg1;
- (void)stepToPreviousDisplayableCall:(id)arg1;
- (unsigned long long)_currentMarkerIndex;
- (unsigned long long)_currentCallIndex;
- (unsigned long long)_currentDisplayableItemIndex;
- (id)_currentMainTraceItem;
- (void)updateShaders:(id)arg1;
- (void)runInvestigatorWithExistingCapture:(id)arg1;
- (void)ReleaseGPUFrame:(id)arg1;
- (void)openLocation:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)_openTraceItem:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)_setTargetFPS:(unsigned int)arg1;
- (id)trayCellForNavigationProcessHeader;
- (id)_trayFPSCell;
- (id)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
- (void)primitiveInvalidate;
- (void)setupPerformanceDataSource:(id)arg1;
- (id)extension;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;
- (void)createTabStateAndAddGauge:(id)arg1;
- (void)_activateGPUDebuggerUI;
- (BOOL)_hasSingleTraceSessionReference;
- (void)_traceSessionComplete;
- (void)fakeSessionComplete;
- (void)_reopenStandaloneTraceDocument;
- (void)_closeAllDocuments;
- (void)_openEditorDocumentWithURL:(id)arg1;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

