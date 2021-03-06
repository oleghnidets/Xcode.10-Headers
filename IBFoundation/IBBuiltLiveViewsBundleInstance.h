//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSArray, NSString;

@interface IBBuiltLiveViewsBundleInstance : NSObject <IBBinaryArchiving>
{
    NSString *_bundlePath;
    NSString *_projectSourceDirectory;
    NSString *_targetName;
    NSArray *_toolchainIdentifiers;
}

@property(readonly, nonatomic) NSArray *toolchainIdentifiers; // @synthesize toolchainIdentifiers=_toolchainIdentifiers;
@property(readonly, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly, nonatomic) NSString *projectSourceDirectory; // @synthesize projectSourceDirectory=_projectSourceDirectory;
@property(readonly, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithBuiltPath:(id)arg1 projectSourceDirectory:(id)arg2 targetName:(id)arg3 toolchainIdentifiers:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

