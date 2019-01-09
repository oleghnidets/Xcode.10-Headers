//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBDebugger <NSObject>
- (id <DBGSBCommandInterpreter>)GetCommandInterpreter;
- (id <DBGSBListener>)GetListener;
- (const char *)GetPrompt;
- (unsigned int)GetNumTargets;
- (void)HandleCommand:(const char *)arg1;
- (_Bool)SetCurrentPlatformSDKRoot:(const char *)arg1;
- (id <DBGSBError>)SetCurrentPlatform:(const char *)arg1;
- (void)SetSelectedTarget:(id <DBGSBTarget>)arg1;
- (id <DBGSBTarget>)GetTargetAtIndex:(unsigned int)arg1;
- (id <DBGSBTarget>)CreateTarget:(const char *)arg1 targetTriple:(const char *)arg2 platformName:(const char *)arg3 addDependentModules:(_Bool)arg4 error:(id <DBGSBError>)arg5;
- (void)Destroy;
- (void)RunCommandInterpreter:(_Bool)arg1 spawnThread:(_Bool)arg2;
- (_Bool)IsValid;
- (int)RemoteFileDescriptorForLocalFileDescriptor:(int)arg1;
- (id <DBGSBFileSpecList>)CreateFileSpecList;
- (id <DBGSBBroadcaster>)CreateBroadcasterWithName:(const char *)arg1;
- (id <DBGSBTypeSummaryOptions>)CreateTypeSummaryOptions;
- (id <DBGSBExpressionOptions>)CreateExpressionOptions;
- (id <DBGSBStringList>)CreateStringList;
- (id <DBGSBCommandReturnObject>)CreateCommandReturnObject;
- (id <DBGSBStream>)CreateStream;
- (id <DBGSBEvent>)CreateEvent;
- (id <DBGSBFileSpec>)CreateFileSpecWithPath:(const char *)arg1 resolve:(_Bool)arg2;
- (id <DBGSBFileSpec>)CreateFileSpecWithPath:(const char *)arg1;
- (id <DBGSBAttachInfo>)CreateAttachInfoWithPID:(int)arg1;
- (id <DBGSBAttachInfo>)CreateAttachInfoWithPath:(const char *)arg1 wait_for:(_Bool)arg2 async:(_Bool)arg3;
- (id <DBGSBLaunchInfo>)CreateLaunchInfoWithArgv:(const char **)arg1;
- (id <DBGSBError>)CreateError;
- (id)initWithLogCallBack:(CDUnknownFunctionPointerType)arg1 token:(void *)arg2 frameworkPath:(const char *)arg3;

@optional
- (void)SetErrorFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (void)SetOutputFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (void)SetInputFileHandle:(struct __sFILE *)arg1 transfer:(_Bool)arg2;
- (int)SetIOFile:(const char *)arg1;
@end

