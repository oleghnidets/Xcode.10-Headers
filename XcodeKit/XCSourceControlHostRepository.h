//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString, NSURL, XCSourceControlHostOwner;

@interface XCSourceControlHostRepository : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _starred;
    NSURL *_htmlURL;
    NSString *_name;
    NSString *_identifier;
    NSURL *_httpCloneURL;
    NSURL *_sshCloneURL;
    XCSourceControlHostOwner *_owner;
    unsigned long long _stargazersCount;
    NSArray *_languages;
    NSURL *_homepage;
    NSString *_desc;
    unsigned long long _forkCount;
    NSDate *_lastPushDate;
    NSDate *_lastUpdatedDate;
    NSDate *_createdDate;
    NSURL *_readmeURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *readmeURL; // @synthesize readmeURL=_readmeURL;
@property(readonly, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(readonly, nonatomic) unsigned long long forkCount; // @synthesize forkCount=_forkCount;
@property(nonatomic) BOOL starred; // @synthesize starred=_starred;
@property(readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) NSURL *homepage; // @synthesize homepage=_homepage;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) unsigned long long stargazersCount; // @synthesize stargazersCount=_stargazersCount;
@property(readonly, nonatomic) XCSourceControlHostOwner *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSURL *sshCloneURL; // @synthesize sshCloneURL=_sshCloneURL;
@property(readonly, nonatomic) NSURL *httpCloneURL; // @synthesize httpCloneURL=_httpCloneURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *htmlURL; // @synthesize htmlURL=_htmlURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 httpCloneURL:(id)arg3 sshCloneURL:(id)arg4 owner:(id)arg5 stargazersCount:(unsigned long long)arg6 languages:(id)arg7 homepage:(id)arg8 description:(id)arg9 htmlURL:(id)arg10 forkCount:(unsigned long long)arg11 lastPushDate:(id)arg12 lastUpdatedDate:(id)arg13 createdDate:(id)arg14 readmeURL:(id)arg15;

@end

