//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SimDevice, SimDeviceType, SimRuntime;

@interface DVTSimulatorGenerator : NSObject
{
    SimDevice *_device;
    NSString *_name;
    SimDeviceType *_deviceType;
    SimRuntime *_runtime;
}

- (void).cxx_destruct;
- (id)generateSimulator:(id *)arg1;
- (id)initWithName:(id)arg1 deviceType:(id)arg2 runtime:(id)arg3;
- (id)initWithSimDevice:(id)arg1;

@end
