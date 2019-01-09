//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSNumber, NSString;

@interface SKNode (InspectorAdditions)
+ (id)keyPathsForValuesAffectingSk_hasPhysicsBody;
+ (id)keyPathsForValuesAffectingSk_zRotationDeg;
+ (id)keyPathsForValuesAffectingSk_parentRef_commit;
+ (id)keyPathsForValuesAffectingSk_name;
@property(nonatomic) float sk_physicsMass;
@property(nonatomic) double sk_physicsBodyInitialVelocityY;
@property(nonatomic) double sk_physicsBodyInitialVelocityX;
@property(nonatomic) double sk_physicsBodyAngularDamping;
@property(nonatomic) double sk_physicsBodyLinearDamping;
@property(nonatomic) double sk_physicsBodyRestitution;
@property(nonatomic) double sk_physicsBodyFriction;
@property(nonatomic) BOOL sk_physicsBodyAffectedByGravity;
@property(nonatomic) BOOL sk_physicsBodyPinned;
@property(nonatomic) BOOL sk_physicsBodyAllowsRotation;
@property(nonatomic) BOOL sk_physicsBodyDynamicType;
@property(retain, nonatomic) NSNumber *sk_fieldMask;
@property(retain, nonatomic) NSNumber *sk_contactMask;
@property(retain, nonatomic) NSNumber *sk_collisionMask;
@property(retain, nonatomic) NSNumber *sk_categoryMask;
@property(nonatomic) int sk_physicsBodyType;
- (void)sk_refreshPhysicsBody;
@property(readonly, nonatomic) BOOL sk_hasPhysicsBody;
- (struct CGSize)sk_representedSizeInView:(id)arg1;
- (struct CGRect)sk_representedFrameInView:(id)arg1;
@property(readonly, nonatomic) BOOL sk_isIconRepresented;
- (void)sk_restoreLegacyCustomClassInfo;
- (void)sk_migrateLegacyCustomClassInfo;
@property(retain, nonatomic) NSString *sk_legacyCustomModuleName;
@property(retain, nonatomic) NSString *sk_legacyCustomClassName;
- (id)sk_CustomClassPlaceholderName;
@property(retain, nonatomic) NSString *sk_customModuleName;
- (BOOL)_isValidCustomSublcass:(id)arg1 inModule:(id)arg2;
- (Class)_swiftClassFromString:(id)arg1 moduleName:(id)arg2;
@property(retain, nonatomic) NSString *sk_customClassName;
@property(nonatomic) double sk_zRotationDeg;
@property(retain, nonatomic) SKNode *sk_parentRef_commit;
@property(readonly, nonatomic) __weak SKNode *sk_selfRef;
@property(retain, nonatomic) NSString *sk_name;
@end
