//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTiOSDevice.h"

@class NSArray;

@interface DVTiOSDevice (DVTDevicesWindowInternalSummary)
+ (id)keyPathsForValuesAffectingDvtDevicesWindow_canSSH;
+ (id)keyPathsForValuesAffectingDeviceSummaryInternalPropertyDictionaries;
+ (id)keyPathsForValuesAffectingDvtDevicesWindow_isWirelessEnabled;
- (BOOL)_canRemoteSSH;
- (BOOL)_canDirectSSH;
- (BOOL)_canDirectRsync;
- (BOOL)dvtDevicesWindow_canSSH;
@property(readonly) NSArray *deviceSummaryInternalPropertyDictionaries;
- (id)dvtDevicesWindow_isWirelessEnabled;
- (id)_placeholderValue;
@end

