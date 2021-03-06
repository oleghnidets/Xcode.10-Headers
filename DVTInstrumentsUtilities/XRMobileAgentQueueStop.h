//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRMobileAgentStop.h"

@class NSObject<OS_dispatch_queue>;

@interface XRMobileAgentQueueStop : NSObject <XRMobileAgentStop>
{
    NSObject<OS_dispatch_queue> *_funnelQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    BOOL _holdIsPossible;
}

+ (id)backgroundQueueStop;
+ (id)utilityQueueStop;
+ (id)userInteractiveQueueStop;
+ (id)userInitiatedQueueStop;
+ (id)mainQueueStop;
+ (void)initialize;
- (void).cxx_destruct;
- (void)receiveMobileAgent:(id)arg1;
- (void)_executeWelcomeForAgent:(id)arg1;
- (void)_runAgentEpilogue:(id)arg1;
- (void)_executeAgent:(id)arg1;
- (void)_runAgentPrologue:(id)arg1;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithMainQueue;
- (id)initWithDispatchQueue:(id)arg1 funnelTarget:(id)arg2;
- (void)_welcomeAgent:(id)arg1 followedByAgents:(id)arg2;
- (void)_welcomeAgents:(id)arg1;
- (void)_welcomeAgent:(id)arg1;
- (BOOL)_holdReceivedAgent:(id)arg1 ticket:(id)arg2;
- (void)_escortAgentToExit:(id)arg1 withTicket:(id)arg2;
- (void)_prepareAgentToExecute:(id)arg1 withTicket:(id)arg2;
- (id)_funnelQueue;

@end

