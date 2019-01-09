//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEPlaygroundExecutionDeviceService.h"

#import "IDEPlaygroundExecutionDeviceInputEventProcessing.h"
#import "IDEPlaygroundExecutionDeviceViewContentProvider.h"

@class NSHashTable, NSString;

@interface IDELocalComputerPlaygroundExecutionDeviceService : IDEPlaygroundExecutionDeviceService <IDEPlaygroundExecutionDeviceViewContentProvider, IDEPlaygroundExecutionDeviceInputEventProcessing>
{
}

+ (id)capability;
- (BOOL)processInputEvent:(id)arg1 fromView:(id)arg2 deviceRelativeLocation:(struct CGPoint)arg3;
- (void)requestViewController;
- (void)launchWithPendingParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSHashTable *viewContentReceivers;

@end

