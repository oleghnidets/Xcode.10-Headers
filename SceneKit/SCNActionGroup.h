//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionGroup : SCNAction
{
    void *_mycaction;
    NSArray *_actions;
}

+ (id)groupWithActions:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)finished;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setupWithActions:(id)arg1;
- (BOOL)isCustom;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
