//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XcodeKit/XCSourceControlHostAuthentication.h>

@class NSString;

@interface XCSourceControlHostBearerAuthentication : XCSourceControlHostAuthentication
{
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;
+ (id)name;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)httpAuthorizationValue;
- (id)initWithToken:(id)arg1;

@end

