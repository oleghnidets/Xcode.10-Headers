//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface NSButton (IBNSButtonIntegration)
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (id)ibPotentiallyProblematicWidthConstraints;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (void)ibVerifyFrameToControlSizeConsistency;
- (id)ibQualifyingInfoForDefaultLabel;
- (double)ibHIRecommededMinimumWidth;
- (BOOL)ibIgnoreFixedWidthConstraintsForLocalizationWarnings;
- (BOOL)ibShouldBeProcessedForLocalizationWarnings;
@property(copy, nonatomic) NSColor *ibExternalContentTintColor;
- (id)ibLocalAttributeKeyPaths;
- (id)ibInitialConnectionLabelSearchTerm;
@end

