//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKShaderAttributeTypeDescription : NSObject
{
    id _defaultValue;
    NSString *_name;
    long long _uniformType;
}

+ (id)customAttributeType:(long long)arg1 name:(id)arg2 defaultValue:(id)arg3;
@property(readonly) long long uniformType; // @synthesize uniformType=_uniformType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 name:(id)arg2 defaultValue:(id)arg3;

@end

