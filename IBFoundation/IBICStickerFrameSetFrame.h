//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class NSData, NSString;

@interface IBICStickerFrameSetFrame : IBICAbstractCatalogItem
{
    NSData *_assetData;
    NSString *_uniqueIdentifier;
}

+ (BOOL)itemNameIsFileNameWithoutCatalogExtension;
+ (id)keyPathsForValuesAffectingIbInspectedItemName;
+ (Class)requiredParentClass;
+ (BOOL)fileNameIsIdentifier;
+ (id)catalogItemFileExtension;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)createDefaultInstancesForUnitTesting;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pixelSize;
- (id)imageIOProperties;
- (BOOL)matchesFileType:(id)arg1;
- (id)fileType;
- (void)setItemName:(id)arg1;
- (id)itemName;
- (id)parent;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (void)setAssetData:(id)arg1;
- (id)assetData;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)identifier;
- (void)generateUniqueID;
- (id)init;

@end
