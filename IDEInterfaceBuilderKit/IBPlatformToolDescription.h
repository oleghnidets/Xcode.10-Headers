//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBVerboseDescriptionProvider.h"
#import "NSCopying.h"

@class IBGenericDeviceTypeDescription, IBTargetRuntime, NSString;

@interface IBPlatformToolDescription : NSObject <NSCopying, IBVerboseDescriptionProvider>
{
    IBTargetRuntime *_targetRuntime;
    long long _role;
    IBGenericDeviceTypeDescription *_deviceTypeDescription;
}

+ (id)descriptionForTargetRuntime:(id)arg1 role:(long long)arg2 deviceTypeDescription:(id)arg3;
@property(readonly, nonatomic) IBGenericDeviceTypeDescription *deviceTypeDescription; // @synthesize deviceTypeDescription=_deviceTypeDescription;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void).cxx_destruct;
- (id)ib_verboseDescription;
- (id)toolName;
@property(readonly, copy) NSString *description;
- (id)_roleString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBySettingRole:(long long)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1 role:(long long)arg2 deviceTypeDescription:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

