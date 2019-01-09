//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICIdiom, IBICMipmapLevel, IBICPlatform, IBICRole, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IBICSchema : NSObject
{
    BOOL _isConstructing;
    NSMutableSet *_catalogItemClasses;
    NSMutableDictionary *_catalogItemClassesToReferenceTypeNames;
    NSMutableDictionary *_referenceTypeNamesToCatalogItemClasses;
    NSMutableDictionary *_catalogItemClassesByDirectoryExtension;
    NSMutableSet *_slotComponentClasses;
    NSMutableSet *_slotComponents;
    NSMutableDictionary *_slotsComponentsByClassThenIdentifier;
    NSMutableDictionary *_compilerResultAmendersBySlot;
    NSMutableDictionary *_slotsComponentsByClass;
    NSMutableDictionary *_slotsComponentsBySlotClassThenComponentClass;
    NSMutableSet *_slotClasses;
    NSMutableDictionary *_slotFilterPerSlotClass;
    NSMutableDictionary *_slotsToLabels;
    NSMutableDictionary *_slotFilterPerPlatformPerSlotClass;
    NSMutableDictionary *_slotMaskSetsBySlotByPlatform;
    NSMutableDictionary *_slotCollectionsByIdentifier;
    NSMutableSet *_deprecatedSlots;
    NSMutableSet *_slotsToIgnoreSubtype;
    NSMutableSet *_slotFiltersForSlotsToContinueWriting;
    NSMutableDictionary *_hiddenSlotsFilterPerSlotClass;
    NSMutableDictionary *_impliedCounterpartSlots;
    NSMutableDictionary *_impliedCounterpartSlotComponentsBySlotClass;
    NSMutableDictionary *_suggestionSetsBySlotClass;
    NSMutableSet *_imageSetIdiomEditingSuggestionSets;
    NSMutableSet *_componentsExcludedFromAutomaticSuggestionSets;
    NSMutableDictionary *_suggestionSetGroupsBySlotClassThenIdentifier;
    NSMutableDictionary *_suggestionSetGroupsBySlotClass;
    NSMutableDictionary *_suggestionSetsBySlotClassThenGroupID;
    NSMutableDictionary *_suggestionSetSectionsBySlotClassThenIdentifier;
    NSMutableDictionary *_suggestionSetSectionsBySlotClass;
    NSMutableDictionary *_suggestionSetGroupsBySlotClassThenSectionID;
    NSMutableDictionary *_assetClassesToDetailFooterPathsToTitleGenerators;
    NSMutableDictionary *_issueProvidersPerClass;
    NSMutableDictionary *_validationRecordsBySlotClass;
    NSMutableDictionary *_slotValidationRecordsBySlot;
    NSMutableSet *_fileTypes;
    NSMutableDictionary *_allowedFileTypesByItemClass;
    NSMutableDictionary *_slotClassesToFilterFileTypePairs;
    NSMutableArray *_thinningFilters;
    NSMutableDictionary *_defaultMatchingContextBySlotClassAndPlatform;
    NSMutableSet *_variantSlotClasses;
    NSMutableDictionary *_stickersIconBundleDestinationsBySlot;
    NSMutableDictionary *_shouldIncludeOrientationInLaunchImageNameBySlot;
    NSMutableDictionary *_pixelSizesByLaunchImageSlots;
    NSMutableDictionary *_brandAssetCollectionSlotChildClasses;
    NSMutableDictionary *_brandAssetCollectionChildSlotsForSlot;
    NSMutableSet *_bundleIconSlotsRequiringIdiomSuffixesInFileName;
    NSMutableDictionary *_idiomsToMarketingIdioms;
    NSMutableSet *_launchImageSlotsRequiringIdiomSuffixesInFileName;
    IBICIdiom *_universalIdiom;
    IBICPlatform *_iOSPlatform;
    IBICPlatform *_OSXPlatform;
    IBICMipmapLevel *_baseMipmapLevel;
    IBICRole *_masterRole;
    IBICRole *_detailRole;
    IBICRole *_assignedRole;
    IBICRole *_unassignedRole;
}

+ (void)xctest_resetSharedInstance;
+ (BOOL)xctest_hasSharedInstance;
+ (id)sharedInstance;
+ (void)setSuppressSchemaValidationAsserts:(BOOL)arg1;
+ (void)setSchemaProvidersPromise:(CDUnknownBlockType)arg1;
@property(readonly) IBICRole *unassignedRole; // @synthesize unassignedRole=_unassignedRole;
@property(readonly) IBICRole *assignedRole; // @synthesize assignedRole=_assignedRole;
@property(readonly) IBICRole *detailRole; // @synthesize detailRole=_detailRole;
@property(readonly) IBICRole *masterRole; // @synthesize masterRole=_masterRole;
@property(readonly) IBICMipmapLevel *baseMipmapLevel; // @synthesize baseMipmapLevel=_baseMipmapLevel;
@property(readonly) IBICPlatform *OSXPlatform; // @synthesize OSXPlatform=_OSXPlatform;
@property(readonly) IBICPlatform *iOSPlatform; // @synthesize iOSPlatform=_iOSPlatform;
@property(readonly) IBICIdiom *universalIdiom; // @synthesize universalIdiom=_universalIdiom;
- (void).cxx_destruct;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (id)fileTypeWithIdentifier:(id)arg1;
- (id)sizeWithPointSize:(struct CGSize)arg1;
- (id)scaleWithMultiple:(double)arg1;
- (id)roleWithIdentifier:(id)arg1;
- (id)sizeWithIdentifier:(id)arg1;
- (id)scaleWithIdentifier:(id)arg1;
- (id)idiomWithIdentifier:(id)arg1;
- (id)subtypeWithIdentifier:(id)arg1;
- (id)platformWithIdentifier:(id)arg1;
- (id)extentWithIdentifier:(id)arg1;
- (id)colorSpaceWithIdentifier:(id)arg1;
- (id)widthClassWithIdentifier:(id)arg1;
- (id)heightClassWithIdentifier:(id)arg1;
- (id)memoryClassWithIdentifier:(id)arg1;
- (id)languageDirectionWithIdentifier:(id)arg1;
- (id)deviceOrientationWithIdentifier:(id)arg1;
- (id)graphicsFeatureSetsWithIdentifier:(id)arg1;
- (id)roles;
- (id)sizes;
- (id)scales;
- (id)allPossibleValidIdiomIdentifiers;
- (id)idioms;
- (id)subtypes;
- (id)platforms;
- (id)extents;
- (id)colorSpaces;
- (id)widthClasses;
- (id)heightClasses;
- (id)memoryClasses;
- (id)languageDirections;
- (id)deviceOrientations;
- (id)graphicsFeatureSets;
- (id)variantSlotClasses;
- (void)addVariantSlotClass:(Class)arg1;
- (void)addVariantSlotClasses:(id)arg1;
- (id)defaultMatchingContextForSlotClass:(Class)arg1 onPlatform:(id)arg2;
- (void)registerDefaultMatchingContext:(id)arg1 forSlotClass:(Class)arg2 onPlatform:(id)arg3;
- (BOOL)shouldThinCatalogItem:(id)arg1 withOptions:(id)arg2;
- (id)thinningFilters;
- (void)registerThinningFilter:(CDUnknownBlockType)arg1;
- (id)allFileUTIsToAllowInUnstructuredImport;
- (id)allFileExtensionsToAllowInUnstructuredImport;
- (Class)catalogItemClassForDirectoryExtension:(id)arg1;
- (Class)itemClassForCatalogReferenceTypeName:(id)arg1;
- (id)catalogReferenceTypeNameForItemClass:(Class)arg1;
- (id)primaryChildClassesForParentClass:(Class)arg1;
- (id)catalogItemClasses;
- (void)registerCatalogItemClass:(Class)arg1;
- (void)addCatalogItemClasses:(id)arg1;
- (id)fileTypeForExtension:(id)arg1;
- (id)fileExtensionsForSlot:(id)arg1;
- (id)validFileUTIsForSlotClass:(Class)arg1;
- (id)validFileExtensionsForSlotClass:(Class)arg1;
- (id)allowedFileTypesForSlotClass:(Class)arg1;
- (id)fileTypesForSlotInPreferenceOrder:(id)arg1;
- (id)allowedFileTypesForSlot:(id)arg1;
- (BOOL)isValidFileExtension:(id)arg1 forSlotClass:(Class)arg2;
- (BOOL)isValidFileExtension:(id)arg1 forSlot:(id)arg2;
- (void)unionOverrideAllowedFileTypes:(id)arg1 forSlotsMatchingFilter:(id)arg2;
- (id)allowedFileTypesForCatalogItemClass:(Class)arg1;
- (BOOL)isAllowedFileType:(id)arg1 forCatalogItem:(id)arg2;
- (id)allowedFileTypesForCatalogItem:(id)arg1;
- (void)addAllowedFileTypes:(id)arg1 forCatalogItemClass:(Class)arg2;
- (id)fileTypes;
- (void)addFileTypes:(id)arg1;
- (void)addFileType:(id)arg1;
- (BOOL)platformSupportsLaunchImages:(id)arg1 forIdiom:(id)arg2;
- (void)addLaunchImageSlotsRequiringIdiomSuffixInFileName:(id)arg1;
- (BOOL)launchImageSlotShouldIncludeIdiomSuffixInFileName:(id)arg1;
- (void)setPixelSize:(id)arg1 forLaunchImageRepSlot:(id)arg2;
- (id)pixelSizeForLaunchImageRepSlot:(id)arg1;
- (void)setShouldIncludeOrientationInLaunchImageName:(BOOL)arg1 forSlot:(id)arg2;
- (BOOL)shouldIncludeOrientationInLaunchImageNameForSlot:(id)arg1;
- (id)idiomsForMarketingIdiom:(id)arg1;
- (id)marketingIdiomForIdiom:(id)arg1;
- (void)registerMarketingIdiom:(id)arg1 forIdiom:(id)arg2;
- (void)addBundleIconSlotsRequiringIdiomSuffixInFileName:(id)arg1;
- (BOOL)bundleIconSlotShouldIncludeIdiomSuffixInFileName:(id)arg1;
- (id)childSlotsForBrandAssetCollectionSlot:(id)arg1;
- (void)setChildSlots:(id)arg1 forBrandAssetCollectionSlot:(id)arg2;
- (void)setChildClass:(Class)arg1 forBrandAssetCollectionSlot:(id)arg2;
- (Class)childClassForBrandAssetCollectionSlot:(id)arg1;
- (id)issueProvidersForClass:(Class)arg1;
- (void)addCatalogItemIssueProviderForClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addCatalogItemIssueProvider:(id)arg1 forClass:(Class)arg2;
- (id)labelForSlot:(id)arg1;
- (void)setLabel:(id)arg1 forSlot:(id)arg2;
- (id)detailFooterTitleForDetailAreaGroupPath:(id)arg1 inGroupWithIdentifiers:(id)arg2 ofAssetClass:(Class)arg3;
- (void)setFooterTitle:(id)arg1 forDetailAreaGroupPath:(id)arg2 ofAssetClass:(Class)arg3;
- (void)setFooterTitleGenerator:(CDUnknownBlockType)arg1 forDetailAreaGroupPath:(id)arg2 ofAssetClass:(Class)arg3;
- (id)slotsImpliedBySlot:(id)arg1;
- (id)componentsImpliedByComponent:(id)arg1 forSlotClass:(Class)arg2;
- (void)markEnumeratedSlotAsAllImplyingEachOther:(id)arg1;
- (void)markEnumeratedSlotImplications:(id)arg1;
- (void)markEnumeratedSlot:(id)arg1 asImplying:(id)arg2;
- (void)markSlotComponent:(id)arg1 asImplying:(id)arg2 forSlotClass:(Class)arg3;
- (void)markSlotComponents:(id)arg1 asImplying:(id)arg2 forSlotClass:(Class)arg3;
- (void)markSlotComponentsAsImplyingEachOther:(id)arg1 forSlotClass:(Class)arg2;
- (id)suggestionSetGroupsForSection:(id)arg1;
- (id)suggestionSetSectionsForSlotClass:(Class)arg1;
- (id)suggestionSetSectionForIdentifier:(id)arg1 forSlotClass:(Class)arg2;
- (void)addSuggestionSetSection:(id)arg1;
- (id)suggestionSetsForGroup:(id)arg1;
- (id)allSuggestionSetGroups;
- (id)suggestionSetGroupForIdentifier:(id)arg1 forSlotClass:(Class)arg2;
- (void)addSuggestionSetGroup:(id)arg1;
- (id)slotComponentsExcludedFromAutomatedSuggestionSets;
- (void)excludeSlotComponentFromAutomatedSuggestionSets:(id)arg1;
- (id)displayOrderedSuggestionSetsForImageSetIdiomEditingMenus;
- (void)markSuggestionSetForInclusionInImageSetIdiomEditingMenus:(id)arg1;
- (id)suggestionSetWithIdentifier:(id)arg1 forSlotClass:(Class)arg2;
- (id)allSuggestionSets;
- (void)addSuggestionSets:(id)arg1 replaceExisting:(BOOL)arg2;
- (void)_removeSuggestionSet:(id)arg1 fromSet:(id)arg2;
- (void)addSuggestionSets:(id)arg1;
- (BOOL)shouldIgnoreSubtypeOnCompilationForSlot:(id)arg1;
- (void)ignoreSubtypeOnSlotsForCompilation:(id)arg1;
- (BOOL)isSlotDeprecated:(id)arg1;
- (void)markSlotsDeprecated:(id)arg1;
- (CDUnknownBlockType)compilerResultsAmenderForSlot:(id)arg1;
- (void)setSlot:(id)arg1 isAmendedBy:(CDUnknownBlockType)arg2;
- (long long)stickersIconBundleDestinationForSlot:(id)arg1;
- (void)setStickersIconBundleDestination:(long long)arg1 forSlots:(id)arg2;
- (void)setStickersIconBundleDestination:(long long)arg1 forSlot:(id)arg2;
- (id)validationRecordForSlot:(id)arg1;
- (id)slotsInCollectionWithIdentifier:(id)arg1;
- (void)addSlots:(id)arg1 toCollectionWithIdentifier:(id)arg2;
- (id)validationRecordsForSlotClass:(Class)arg1;
- (void)addSlotValidationRecord:(id)arg1;
- (BOOL)isValidSlot:(id)arg1 forPlatform:(id)arg2 idioms:(id)arg3;
- (BOOL)isValidSlot:(id)arg1;
- (id)allValidSlotsOfClass:(Class)arg1 withIdiom:(id)arg2;
- (id)allValidSlotsOfClass:(Class)arg1;
- (id)maskableSlotMasksOfClass:(Class)arg1 forIdioms:(id)arg2 onPlatform:(id)arg3;
- (void)markUniversalSlots:(id)arg1 asMaskedByDeviceSpecificSlots:(id)arg2 forPlatform:(id)arg3;
- (void)markUniversalSlot:(id)arg1 asMaskedBySlots:(id)arg2 forPlatform:(id)arg3;
- (id)slotClasses;
@property(readonly) IBICPlatform *tvOSPlatform;
@property(readonly) IBICPlatform *watchOSPlatform;
@property(readonly) IBICPlatform *universalPlatform;
- (id)idiomsForPlatform:(id)arg1;
- (id)platformForIdiom:(id)arg1;
- (BOOL)shouldContinueWritingAppIconUsingSlot:(id)arg1;
- (void)registerSlotFilterForAppIconsToContinueWriting:(id)arg1;
- (BOOL)isSlotAllowedForDefaultInstantiation:(id)arg1;
- (BOOL)isSlotHiddenForDefaultInstantiation:(id)arg1;
- (void)hideSlotsForDefaultInstantiation:(id)arg1;
- (id)validSlotFilterForClass:(Class)arg1;
- (id)validSlotFilterForClass:(Class)arg1 platform:(id)arg2;
- (void)subtractValidSlotsFilter:(id)arg1 forPlatform:(id)arg2;
- (void)unionValidSlotsFilter:(id)arg1 forPlatform:(id)arg2;
- (void)addAlternateIdentifier:(id)arg1 forSlotComponent:(id)arg2;
- (id)slotComponentsForAutomaticSuggestionSetsForSlotComponentClass:(Class)arg1 forSlot:(Class)arg2;
- (id)slotComponentsForSlotComponentClass:(Class)arg1 forSlot:(Class)arg2;
- (id)slotComponentsForSlotComponentClass:(Class)arg1;
- (id)slotComponentOfClass:(Class)arg1 withIdentifier:(id)arg2;
- (id)slotClassesWithComponentClass:(Class)arg1;
- (void)addSlotComponentsToAllApplicableSlotClasses:(id)arg1;
- (id)slotComponentClasses;
- (void)addSlotComponents:(id)arg1 toSlotClasses:(id)arg2;
- (void)addSlotComponentClasses:(id)arg1;
- (void)assignSlotComponentIDs;
- (void)assertSchemaValidity;
- (void)computeGlobalValidSlots;
- (void)importDataFromProviders:(id)arg1;
- (id)init;

@end

