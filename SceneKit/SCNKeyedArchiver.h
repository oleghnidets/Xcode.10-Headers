//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSKeyedArchiver.h"

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver
{
    NSDictionary *options;
}

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
- (void)dealloc;

@end

