//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDeviceLocator.h"

@class DVTNotificationToken, NSMapTable, NSMutableSet, NSSet;

@interface DVTiOSDeviceLocator : DVTDeviceLocator
{
    DVTNotificationToken *_deviceAttachedToken;
    DVTNotificationToken *_deviceDetachedToken;
    NSMapTable *_deviceObservingTokens;
    NSMutableSet *_savedDevices;
    NSSet *_placeholderDevices;
    NSSet *_platforms;
}

+ (BOOL)_ignoreMobileDevice;
+ (id)deviceLocator;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 genericOnly:(BOOL)arg2 allowMultipleMatches:(BOOL)arg3 error:(id *)arg4;
- (id)deviceType;
- (void)presentError:(id)arg1;
- (void)deviceDetached:(id)arg1;
- (void)deviceAttached:(id)arg1;
- (BOOL)_shouldCreateDeviceInstanceForDeviceRepresentedByToken:(id)arg1;
- (id)iOSDeviceWithIdentifier:(id)arg1;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (id)platforms;
- (id)deviceLocationScheme;
- (void)stopLocating;
- (void)startLocating;
- (void)forgetDevice:(id)arg1;
- (void)beginWatchingDevice:(id)arg1;
- (void)updateDefaultsForDevice:(id)arg1;
- (void)updateSavedDeviceTokenForDevice:(id)arg1;
- (void)removeSavedDeviceTokenForDeviceIdentifier:(id)arg1;
- (id)init;

@end

