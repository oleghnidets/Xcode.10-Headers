//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

#import "IBICVariantObject.h"

@class IBICSlot, NSData, NSString;

@interface IBICSlottedAssetRep : IBICAbstractCatalogItem <IBICVariantObject>
{
    NSData *_assetData;
    IBICSlot *_slot;
    unsigned long long _conflictState;
}

+ (id)keysThatImpactDisplayOrder;
+ (BOOL)fileNameIsIdentifier;
+ (id)keysThatImpactIdentifier;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)validSourceFileUTIs;
+ (id)validSourceFileNameExtensions;
+ (Class)requiredParentClass;
+ (id)assetRepIdentifiersForAssetReps:(id)arg1;
+ (BOOL)displayNameIsItemName;
+ (BOOL)itemNameIsFileNameWithoutCatalogExtension;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (Class)slotClass;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (BOOL)isAbstractCatalogItemClass;
@property(nonatomic) unsigned long long conflictState; // @synthesize conflictState=_conflictState;
@property(copy, nonatomic) IBICSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)languageComponentsRepresentedByConflictFreeSiblings;
- (long long)compareForVariantMatching:(id)arg1;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
- (BOOL)matchesFileType:(id)arg1;
- (id)fileType;
@property(readonly) NSString *fullyQualifiedRelativePathForFileWriter;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (BOOL)updateModificationDatesWithMutationResult:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)parent;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (BOOL)recursivelyContainsAssetData;
- (BOOL)isBrokenFileReference;
- (id)identifier;
- (id)structuredIdentifier;
- (id)fullyQualifiedRuntimeNameProvidingItemForCARCompiler;
- (id)effectiveNodeForIssueGenerationForCARCompiler;
- (id)effectiveModificationDateForCARCompiler;
- (BOOL)isMinimallyFitForCompiling;
- (BOOL)requiresKnownFileTypeToBeMinimallyFitForCompiling;
- (id)copyUsingSlot:(id)arg1 andFileName:(id)arg2;
- (id)copyUsingSlot:(id)arg1;
- (id)shortDisplayName;
- (id)displayName;
- (id)nameForIssues;
- (void)setAssetData:(id)arg1;
- (void)assetDataWillChange;
- (id)assetData;
- (void)setConflictStateComponent:(unsigned long long)arg1 toValue:(BOOL)arg2;
- (BOOL)hasUnknownSlot;
- (BOOL)isInConflictDueToUnknownIdiom;
- (BOOL)isExplicitlyUnassigned;
- (BOOL)isInConflict;
- (BOOL)isConflictFree;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

