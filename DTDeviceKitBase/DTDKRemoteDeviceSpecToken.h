//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKMobileDeviceToken.h>

@class NSDictionary, NSString;

@interface DTDKRemoteDeviceSpecToken : DTDKMobileDeviceToken
{
    NSString *_deviceIdentifier;
    NSDictionary *_tokenProperties;
}

+ (id)specTokenForDeviceIdentifier:(id)arg1;
- (void).cxx_destruct;
- (long long)deviceRsyncPort;
- (long long)deviceTelnetPort;
- (long long)deviceSSHPort;
- (id)supportedDeviceFamilies;
- (id)deviceArchitecture;
- (id)deviceType;
- (id)buildVersion;
- (id)productVersion;
- (id)deviceClass;
- (id)deviceSerialNumber;
- (id)deviceSoftwareVersion;
- (id)platform;
- (long long)_NSIntegerForKeyInTokenProperties:(id)arg1;
- (id)_objectForKeyInTokenProperties:(id)arg1;
- (id)developerDiskImageForDeviceType:(id)arg1 productVersion:(id)arg2 buildVersion:(id)arg3;
- (id)initWithDeviceIdentifier:(id)arg1 tokenProperties:(id)arg2;

@end

