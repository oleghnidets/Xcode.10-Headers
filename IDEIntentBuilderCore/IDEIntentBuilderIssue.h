//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDEIntentBuilderIssue : NSObject
{
    unsigned long long _category;
    NSString *_message;
    id <IDEIntentBuilderIssueGenerator> _origin;
}

@property(nonatomic) __weak id <IDEIntentBuilderIssueGenerator> origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)initWithCategory:(unsigned long long)arg1 message:(id)arg2 origin:(id)arg3;

@end

