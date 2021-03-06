//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface XCSourceControlHostRepositoryLanguage : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_description;
    unsigned long long _languageType;
    double _usage;
}

+ (BOOL)supportsSecureCoding;
+ (id)languageFromString:(id)arg1 usage:(double)arg2;
+ (unsigned long long)languageTypeFromString:(id)arg1;
@property(readonly, nonatomic) double usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) unsigned long long languageType; // @synthesize languageType=_languageType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLanguageType:(unsigned long long)arg1 usage:(double)arg2;

@end

