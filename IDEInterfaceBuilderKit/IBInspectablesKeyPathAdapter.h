//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IBInspectablesKeyPathAdapter : NSObject
{
    NSObject *_object;
}

+ (id)userDefinedRuntimeAttributeKeyForAdapterKey:(id)arg1 expectedType:(long long *)arg2;
+ (id)adapterKeyForUserDefinedRuntimeAttribute:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)userDefinedRuntimeAttributeForKey:(id)arg1;
- (id)userDefinedRuntimeAttributeForKey:(id)arg1 index:(unsigned long long *)arg2;
- (id)userDefinedRuntimeAttributeForKey:(id)arg1 in:(id)arg2 index:(unsigned long long *)arg3;
- (id)initWithObject:(id)arg1;

@end
