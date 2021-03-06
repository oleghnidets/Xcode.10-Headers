//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface DVTPortalResponse : NSObject
{
    NSDictionary *_payload;
    NSString *_portalSessionID;
}

+ (id)portalResponseFromData:(id)arg1 URLResponse:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *portalSessionID; // @synthesize portalSessionID=_portalSessionID;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long resultCode;
- (id)debugDescription;
- (id)description;
- (id)initWithPayload:(id)arg1 headers:(id)arg2;

@end

