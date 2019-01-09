//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEGaugeDataProviderService.h"

@class DTXChannel;

@interface IDEGaugeDataProviderService_iOSDevice : IDEGaugeDataProviderService
{
    DTXChannel *_channel;
}

+ (id)remoteServerChannelIdentifier;
+ (id)observableAttributes;
@property(retain) DTXChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (BOOL)_isTargetOSVersion:(id)arg1 atLeastSupportedVersion:(id)arg2;
- (void)didStopSampling;
- (id)stopSamplingForPIDs:(id)arg1;
- (id)sampleAttributes:(id)arg1 forPIDs:(id)arg2;
- (id)startSamplingForPIDs:(id)arg1;
- (void)willStartSamplingAtTime:(double)arg1 withInterval:(double)arg2;
@property(readonly) id <DVTBasicDevice> samplingDevice;

@end
