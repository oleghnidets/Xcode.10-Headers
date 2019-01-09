//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 anchorA;
        struct SCNVector3 anchorB;
    } _definition;
    struct btPoint2PointConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

+ (id)jointWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;
+ (id)jointWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
@property(nonatomic) struct SCNVector3 anchorB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
- (id)initWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;
- (id)initWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
- (void)dealloc;

@end
