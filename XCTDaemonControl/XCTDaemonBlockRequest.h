//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTDaemonRequest.h"

@class NSString;

@interface XCTDaemonBlockRequest : NSObject <XCTDaemonRequest>
{
    CDUnknownBlockType _sendToDaemonProxyBlock;
    CDUnknownBlockType _failureBlock;
}

+ (id)minimumProtocolVersion;
@property(copy) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy) CDUnknownBlockType sendToDaemonProxyBlock; // @synthesize sendToDaemonProxyBlock=_sendToDaemonProxyBlock;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)executeWithDaemonProxyProvider:(id)arg1;
- (id)initWithSendToDaemonProxyBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

