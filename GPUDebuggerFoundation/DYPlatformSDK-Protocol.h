//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL;

@protocol DYPlatformSDK
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) BOOL isInternal;
@property(readonly, nonatomic) NSString *operatingSystemVersion;
@property(readonly, nonatomic) NSString *canonicalName;
@property(readonly, nonatomic) NSString *identifier;
- (NSURL *)fileURLForExecutableBinary:(NSString *)arg1;
@end
