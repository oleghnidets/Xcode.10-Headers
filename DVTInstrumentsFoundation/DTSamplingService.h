//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTSamplingServiceAuthorizedAPI.h"

@class NSString;

@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI>
{
    struct sampling_context_t *_context;
    BOOL _doCollectData;
    unsigned long long _samplingRate;
    unsigned long long _outputRate;
    unsigned long long _outputRateDelta;
    unsigned long long *_backtraceBuffer;
    unsigned long long _backtraceBufferSize;
    unsigned long long _backtraceBufferUsedSize;
    unsigned int _task;
}

+ (void)registerCapabilities:(id)arg1;
- (void)addSampleWithTimeInfo:(struct __CFDictionary *)arg1 useZeroDelta:(BOOL)arg2;
- (void)collectData;
- (void)_allocateBuffer;
- (void)_outputData;
- (void)stopSampling;
- (void)startSampling;
- (void)setTargetPid:(id)arg1;
- (void)setOutputRate:(id)arg1;
- (void)setSamplingRate:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

