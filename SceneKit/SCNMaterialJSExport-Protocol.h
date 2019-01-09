//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class CAAnimation, MDLMaterial, NSArray, NSString, SCNMaterial, SCNMaterialProperty, SCNProgram;

@protocol SCNMaterialJSExport <JSExport>
+ (id)materialWithMDLMaterial:(MDLMaterial *)arg1;
+ (id)material;
@property(retain, nonatomic) SCNProgram *program;
@property(readonly, nonatomic) SCNMaterial *presentationMaterial;
@property(nonatomic) BOOL avoidsOverLighting;
@property(nonatomic) double indexOfRefraction;
@property(nonatomic) long long blendMode;
@property(nonatomic) double fresnelExponent;
@property(nonatomic) BOOL readsFromDepthBuffer;
@property(nonatomic) long long colorBufferWriteMask;
@property(nonatomic) BOOL writesToDepthBuffer;
@property(nonatomic) BOOL locksAmbientWithDiffuse;
@property(nonatomic) long long transparencyMode;
@property(nonatomic) long long cullMode;
@property(nonatomic) unsigned long long fillMode;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property(nonatomic, getter=isLitPerPixel) BOOL litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) double transparency;
@property(nonatomic) double shininess;
@property(readonly, nonatomic) SCNMaterialProperty *roughness;
@property(readonly, nonatomic) SCNMaterialProperty *metalness;
@property(readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property(readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property(readonly, nonatomic) SCNMaterialProperty *displacement;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(copy, nonatomic) NSString *name;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@end

