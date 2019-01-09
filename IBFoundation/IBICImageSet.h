//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@interface IBICImageSet : IBICSlottedAsset
{
    BOOL _preservesVectorRepresentation;
    long long _templateRenderingIntent;
    long long _autoscalingType;
}

+ (BOOL)encodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceWithChildSlots:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (id)createInstanceNamed:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
@property(nonatomic) long long autoscalingType; // @synthesize autoscalingType=_autoscalingType;
@property(nonatomic) BOOL preservesVectorRepresentation; // @synthesize preservesVectorRepresentation=_preservesVectorRepresentation;
@property(nonatomic) long long templateRenderingIntent; // @synthesize templateRenderingIntent=_templateRenderingIntent;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateSizeProvidingItemsForValidatingBrandAssetCollection:(CDUnknownBlockType)arg1;
- (id)enclosingSpriteAtlas;
- (CDStruct_550fdc95)taggingSupport;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (id)initializeManifestArchivist;
- (void)createChildrenForSlots:(id)arg1 baseSize:(struct CGSize)arg2;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end

