//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNNode;

@interface SCNManipulableItem : NSObject
{
    double _screenSize;
    SCNNode *node;
    id component;
    unsigned long long elementIndex;
}

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;
@property(nonatomic) unsigned long long elementIndex; // @synthesize elementIndex;
@property(retain, nonatomic) id component; // @synthesize component;
@property(retain, nonatomic) SCNNode *node; // @synthesize node;
- (void)validateClone;
- (id)cloneForManipulators;
@property(readonly, nonatomic) struct SCNVector3 elementPosition;
- (id)parentItem;
- (void)setPosition:(struct SCNVector3)arg1;
- (struct SCNVector3)scale;
@property(nonatomic) struct CATransform3D worldTransform;
@property(nonatomic) struct CATransform3D transform;
- (BOOL)isNodeManipulator;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (double)screenSize;
- (void)setScreenSize:(double)arg1;

@end

