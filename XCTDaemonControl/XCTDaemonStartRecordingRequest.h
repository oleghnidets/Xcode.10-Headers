//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTConfigurableDebugLogger.h"
#import "XCTDaemonRequest.h"

@class NSString, XCTDaemonRecordingConfiguration;

@interface XCTDaemonStartRecordingRequest : NSObject <XCTDaemonRequest, XCTConfigurableDebugLogger>
{
    int _pid;
    id <XCTDebugLogDelegate> _logDelegate;
    XCTDaemonRecordingConfiguration *_configuration;
    CDUnknownBlockType _completion;
}

+ (id)minimumProtocolVersion;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) XCTDaemonRecordingConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) int pid; // @synthesize pid=_pid;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)sendStartRecordingMessageToDaemonProxy:(id)arg1;
- (void)protocolVersionExchangeDidCompleteWithError:(id)arg1;
- (void)handleConnectionFailure:(id)arg1;
- (void)executeWithDaemonProxyProvider:(id)arg1;
- (id)initWithPID:(int)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

