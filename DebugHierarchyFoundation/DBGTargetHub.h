//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBGTargetHub : NSObject
{
}

+ (id)sharedHub;
+ (unsigned long long)hubVersion;
- (void)clearAllRequestsAndData;
- (id)performRequestWithRequestInBase64:(id)arg1;
- (id)performRequest:(id)arg1;
- (id)init;

@end

