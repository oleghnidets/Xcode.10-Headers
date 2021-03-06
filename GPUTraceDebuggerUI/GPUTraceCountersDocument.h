//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugGaugeReportDocument.h"

@class GPUDebuggerController, GPUSharedTabUIState;

@interface GPUTraceCountersDocument : IDEDebugGaugeReportDocument
{
    GPUDebuggerController *_debuggerController;
    GPUSharedTabUIState *_sharedTabUIState;
}

+ (BOOL)autosavesInPlace;
@property(nonatomic) __weak GPUSharedTabUIState *sharedTabUIState; // @synthesize sharedTabUIState=_sharedTabUIState;
@property(nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)canExportDocument;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_teardown;

@end

