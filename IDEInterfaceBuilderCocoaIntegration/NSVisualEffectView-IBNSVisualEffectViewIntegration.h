//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVisualEffectView.h"

@interface NSVisualEffectView (IBNSVisualEffectViewIntegration)
+ (BOOL)ibIsSupportsBackwardDeploymentPriorTo10_14;
+ (id)ibOverrideSupportsBackwardDeploymentPriorTo10_14;
+ (void)setIbOverrideSupportsBackwardDeploymentPriorTo10_14:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibEffectiveMaterialWhenDeployingPriorTo10_14;
- (id)ibEffectiveAppearanceWhenDeployingPriorTo10_14;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (BOOL)ibIsNSAppearanceContainer;
@property long long ibExternalMaterial;
- (BOOL)ibIsSupportingMaterial:(long long)arg1;
- (id)ibInspectedAppearancePopupExtendedValues;
- (id)ibInspectedAppearancePopupExtendedTitles;
- (BOOL)ibAllowsVibrantDarkAndVibrantLightAppearance;
- (id)ibInspectedAppearancePopupDefaultValues;
- (id)ibInspectedAppearancePopupDefaultTitles;
- (id)ibDesignableContentView;
- (id)ibLocalAttributeKeyPaths;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibSwizzledNSVisualEffectViewEncodeWithCoder:(id)arg1;
- (id)ibSwizzledNSVisualEffectViewInitWithCoder:(id)arg1;
- (id)ibInitialAppearanceTypeWhenAddedToDocument;
- (void)setIbInitialAppearanceTypeWhenAddedToDocument:(id)arg1;
@end
