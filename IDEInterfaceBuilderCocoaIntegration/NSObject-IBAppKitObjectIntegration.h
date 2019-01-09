//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSObject (IBAppKitObjectIntegration)
+ (id)ibStandInRuntimeClassName;
+ (BOOL)ibSupportsAccessibility;
+ (id)ibEffectiveAppearanceFromAppearanceType:(long long)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedAppearanceType;
+ (id)ibNameForAppearanceType:(long long)arg1;
+ (long long)ibAppearanceTypeForAppearance:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedAppearancePopupDefaultTitles;
+ (id)keyPathsForValuesAffectingIbInspectedAppearance;
+ (void)ibPopulateAdditionalCocoaSearchableAttributeKeyPaths:(id)arg1 forInspectorCategory:(id)arg2;
+ (void)ibPopulateAdditionalCocoaInspectorSlices:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibInitializesWithInitWhenUsingClassSwapper;
- (id)ibFallbackClassNameForClassSwapper;
- (BOOL)ibShouldUseClassSwapper;
- (id)ibParentForFoldingDownstreamControllerFromRelationshipSegue:(id)arg1;
- (void)ibDidCopyObjectForLayoutEngine:(id)arg1;
- (void)ibWillCopyObjectForLayoutEngine:(id)arg1;
- (void)ibDidAddToCocoaDocument:(id)arg1 phase:(unsigned long long)arg2;
- (BOOL)ibIsValidCocoaEmbedSegueDestination;
- (BOOL)ibCanBeValidRelationshipDestination;
- (BOOL)ibCanBeValidPopoverSegueDestination;
- (BOOL)ibCanBeValidPopoverSegueSource;
- (BOOL)ibCanBeValidSheetSegueDestination;
- (BOOL)ibCanBeValidSheetSegueSource;
- (BOOL)ibCanBeValidTriggerSegueDestination;
- (BOOL)ibCanBeValidTriggerSegueSource;
- (void)ibCaptureDownstreamStoryboardPlaceholderTable:(id)arg1;
@property(copy) NSString *ibExternalAccessibilityIdentifier;
@property(copy) NSString *ibExternalAccessibilityHelp;
@property(copy) NSString *ibExternalAccessibilityDescription;
- (BOOL)ibIsInTouchBar;
- (id)ibSuggestedAutomaticUserInterfaceItemIdentifier;
- (id)ibSuggestUserInterfaceItemIdentifierForObject:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPrepareCocoaDocumentViewsWithTranslatesAutoresizingMaskIntoConstraintsForCompiling:(id)arg1 withContext:(id)arg2;
@property(copy) NSString *ibExternalUserInterfaceItemIdentifier;
- (id)ibEffectiveUserInterfaceItemIdentifier;
- (BOOL)ibIdentifierPropertyCanConflictsWithObject:(id)arg1;
- (BOOL)ibUsesStandardIdentifierPropertySlice;
- (BOOL)ibCanSupportIdentifierProperty;
- (void)ibUnarchiveAppearanceType:(id)arg1;
- (void)ibArchiveAppearanceType:(id)arg1;
@property(nonatomic) long long ibInspectedAppearanceType;
- (id)ibInspectedAppearancePopupExtendedValues;
- (id)ibInspectedAppearancePopupExtendedTitles;
- (BOOL)ibHasInspectedAppearanceExtendedEntries;
- (id)ibInspectedAppearancePopupValues;
- (id)ibInspectedAppearancePopupTitles;
- (id)ibInspectedAppearancePopupDefaultValues;
- (id)ibInspectedAppearancePopupDefaultTitles;
- (void)ibInitializeWithStartingAppearanceWhenAddingToDocument;
- (BOOL)ibIsUsingSystemAppearance;
- (void)setIbShadowedAppearance:(id)arg1;
- (id)ibShadowedAppearance;
- (id)ibInspectedInheritedAppearance;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibSwizzledLocalNonreplaceableAttributeKeyPaths;
- (id)ibSwizzledLocalSearchableConnectionArrayAttributeKeyPaths;
- (id)ibSearchableBindingConnections;
- (CDUnknownBlockType)ibPatchObjectBeforeBindingRemovalReturningUnpatchBlock;
- (id)ibExpectedClassNameForBinding:(id)arg1;
- (id)ibResolvedTypeNameForControllerKey:(id)arg1;
- (id)ibControlledObjectClassKey;
- (id)ibControlledObjectClassName;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (id)ibControllerKeys;
- (void)ibSwizzledNSObject_ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSwizzledNSObject_ibPopulateIssues:(id)arg1 forUserDefinedRuntimeAttributes:(id)arg2 forDocument:(id)arg3 withComputationContext:(id)arg4;
- (BOOL)ibSwizzledNSObject_ibCouldPopulateIssuesForUserDefinedRuntimeAttributesForDocument:(id)arg1;
- (void)ibSwizzledNSObject_ibInvalidateIssuesAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)ibSwizzledNSObject_ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibSwizzledNSObjectLocalLocalizableStringsAttributeKeyPaths;
- (id)ibSwizzledNSObjectLocalAttributeKeyPaths;
@end
