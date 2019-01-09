//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTObjectAllocServiceAuthorizedAPI.h"

@class DTAllocationsRecorder, NSString;

@interface DTObjectAllocService : DTXService <DTObjectAllocServiceAuthorizedAPI>
{
    unsigned int _task;
    DTAllocationsRecorder *_recorder;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)stopCollection;
- (void)startCollectionWithPid:(int)arg1;
- (id)attachToPid:(id)arg1 eventsMask:(id)arg2;
- (id)preparedEnvironmentForLaunch:(id)arg1 eventsMask:(id)arg2;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

