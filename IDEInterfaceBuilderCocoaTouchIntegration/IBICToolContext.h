//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBCocoaTouchImageCatalogToolProxy<IBCocoaTouchImageCatalogTool>, NSDictionary, NSError, NSObject<OS_dispatch_source>, NSString;

@interface IBICToolContext : NSObject
{
    NSString *_platformIdentifier;
    IBCocoaTouchImageCatalogToolProxy<IBCocoaTouchImageCatalogTool> *_toolProxy;
    NSDictionary *_capturedEnvironmentVariables;
    NSObject<OS_dispatch_source> *_toolDispatchSource;
    NSError *_launchError;
}

@property(retain, nonatomic) NSError *launchError; // @synthesize launchError=_launchError;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *toolDispatchSource; // @synthesize toolDispatchSource=_toolDispatchSource;
@property(retain, nonatomic) NSDictionary *capturedEnvironmentVariables; // @synthesize capturedEnvironmentVariables=_capturedEnvironmentVariables;
@property(retain, nonatomic) IBCocoaTouchImageCatalogToolProxy<IBCocoaTouchImageCatalogTool> *toolProxy; // @synthesize toolProxy=_toolProxy;
@property(retain, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;

@end

