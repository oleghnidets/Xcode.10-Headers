//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEiOSSupportCore/IDEDeviceRunOperationWorker.h>

@class DVTiOSDevice;

@interface IDEInstalliPhoneLauncher : IDEDeviceRunOperationWorker
{
    DVTiOSDevice *_device;
}

@property(retain) DVTiOSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)terminate;
- (void)performWorkerAction;
- (BOOL)preflightWithError:(id *)arg1 recoverable:(char *)arg2 shouldRetry:(char *)arg3;

@end

