//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCopying.h"

@class IBICDeviceThinningTraits, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString;

@interface IBICCatalogCompilerOptions : NSObject <IBBinaryArchiving, NSCopying>
{
    NSMutableSet *_impliedIdiomIdentifiers;
    BOOL _compressPNGs;
    BOOL _enableOnDemandResources;
    BOOL _appIconAsPNGOnly;
    BOOL _enableIncrementalDistill;
    BOOL _workaroundRadar17523681;
    BOOL _thinArtwork;
    BOOL _dumpAssets;
    BOOL _supportsResizableImages;
    BOOL _supportsTemplateRenderingIntent;
    BOOL _targetingV1CARFormat;
    long long _optimization;
    NSString *_issueTextForUnavailableOnDemandResourcesBuildSupport;
    NSString *_outputDirectory;
    NSString *_commonAssetRepositoryFileName;
    NSString *_brandAssetCollectionName;
    NSString *_appIconName;
    NSString *_launchImageName;
    NSString *_minimumDeploymentTarget;
    NSString *_targetPlatform;
    NSNumber *_platformCoreUIValue;
    NSString *_targetName;
    NSSet *_targetDevices;
    NSDictionary *_assetPackOutputSpecifications;
    NSDictionary *_extendedParameters;
    NSString *_stickerPackIdentifierPrefix;
    NSDictionary *_stringFilesByStickerPackAndLanguage;
    NSString *_productType;
    NSDictionary *_additionalEnvironment;
    NSDictionary *_buildEnvironment;
    NSString *_sourceGenerationOutputDirectory;
    NSString *_sourceGenerationLanguages;
    NSString *_sourceGenerationVersion;
    NSDictionary *_appearanceSpecificationToPlatformAppearanceMapping;
    NSDictionary *_referenceColorNamesToIBICColorMap;
    NSString *_issueTextForResizableImage;
    NSString *_issueTextForTemplateRenderingIntent;
    IBICDeviceThinningTraits *_filterForDeviceTraits;
    NSMutableDictionary *_masksByName;
    NSMutableDictionary *_failureIssuesByName;
}

@property(retain, nonatomic) NSMutableDictionary *failureIssuesByName; // @synthesize failureIssuesByName=_failureIssuesByName;
@property(retain, nonatomic) NSMutableDictionary *masksByName; // @synthesize masksByName=_masksByName;
@property(copy) IBICDeviceThinningTraits *filterForDeviceTraits; // @synthesize filterForDeviceTraits=_filterForDeviceTraits;
@property BOOL targetingV1CARFormat; // @synthesize targetingV1CARFormat=_targetingV1CARFormat;
@property(copy) NSString *issueTextForTemplateRenderingIntent; // @synthesize issueTextForTemplateRenderingIntent=_issueTextForTemplateRenderingIntent;
@property BOOL supportsTemplateRenderingIntent; // @synthesize supportsTemplateRenderingIntent=_supportsTemplateRenderingIntent;
@property(copy) NSString *issueTextForResizableImage; // @synthesize issueTextForResizableImage=_issueTextForResizableImage;
@property BOOL supportsResizableImages; // @synthesize supportsResizableImages=_supportsResizableImages;
@property(retain, nonatomic) NSDictionary *referenceColorNamesToIBICColorMap; // @synthesize referenceColorNamesToIBICColorMap=_referenceColorNamesToIBICColorMap;
@property(copy, nonatomic) NSDictionary *appearanceSpecificationToPlatformAppearanceMapping; // @synthesize appearanceSpecificationToPlatformAppearanceMapping=_appearanceSpecificationToPlatformAppearanceMapping;
@property(copy) NSString *sourceGenerationVersion; // @synthesize sourceGenerationVersion=_sourceGenerationVersion;
@property(copy) NSString *sourceGenerationLanguages; // @synthesize sourceGenerationLanguages=_sourceGenerationLanguages;
@property(copy) NSString *sourceGenerationOutputDirectory; // @synthesize sourceGenerationOutputDirectory=_sourceGenerationOutputDirectory;
@property(copy, nonatomic) NSDictionary *buildEnvironment; // @synthesize buildEnvironment=_buildEnvironment;
@property(copy, nonatomic) NSDictionary *additionalEnvironment; // @synthesize additionalEnvironment=_additionalEnvironment;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSDictionary *stringFilesByStickerPackAndLanguage; // @synthesize stringFilesByStickerPackAndLanguage=_stringFilesByStickerPackAndLanguage;
@property(copy, nonatomic) NSString *stickerPackIdentifierPrefix; // @synthesize stickerPackIdentifierPrefix=_stickerPackIdentifierPrefix;
@property(nonatomic) BOOL dumpAssets; // @synthesize dumpAssets=_dumpAssets;
@property(retain, nonatomic) NSDictionary *extendedParameters; // @synthesize extendedParameters=_extendedParameters;
@property(copy) NSDictionary *assetPackOutputSpecifications; // @synthesize assetPackOutputSpecifications=_assetPackOutputSpecifications;
@property BOOL thinArtwork; // @synthesize thinArtwork=_thinArtwork;
@property(readonly) NSSet *impliedIdiomIdentifiers; // @synthesize impliedIdiomIdentifiers=_impliedIdiomIdentifiers;
@property(copy) NSSet *targetDevices; // @synthesize targetDevices=_targetDevices;
@property(copy, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(copy, nonatomic) NSNumber *platformCoreUIValue; // @synthesize platformCoreUIValue=_platformCoreUIValue;
@property(copy) NSString *targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property(copy) NSString *minimumDeploymentTarget; // @synthesize minimumDeploymentTarget=_minimumDeploymentTarget;
@property(copy) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy) NSString *appIconName; // @synthesize appIconName=_appIconName;
@property(copy) NSString *brandAssetCollectionName; // @synthesize brandAssetCollectionName=_brandAssetCollectionName;
@property(copy) NSString *commonAssetRepositoryFileName; // @synthesize commonAssetRepositoryFileName=_commonAssetRepositoryFileName;
@property(copy) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
@property BOOL workaroundRadar17523681; // @synthesize workaroundRadar17523681=_workaroundRadar17523681;
@property(copy) NSString *issueTextForUnavailableOnDemandResourcesBuildSupport; // @synthesize issueTextForUnavailableOnDemandResourcesBuildSupport=_issueTextForUnavailableOnDemandResourcesBuildSupport;
@property(nonatomic) long long optimization; // @synthesize optimization=_optimization;
@property(nonatomic) BOOL enableIncrementalDistill; // @synthesize enableIncrementalDistill=_enableIncrementalDistill;
@property BOOL appIconAsPNGOnly; // @synthesize appIconAsPNGOnly=_appIconAsPNGOnly;
@property BOOL enableOnDemandResources; // @synthesize enableOnDemandResources=_enableOnDemandResources;
@property BOOL compressPNGs; // @synthesize compressPNGs=_compressPNGs;
- (void).cxx_destruct;
- (id)uuidForCoreThemeDocument;
- (id)failureIssueTextForName:(id)arg1;
- (void)setFailureIssueText:(id)arg1 forName:(id)arg2;
- (id)maskForName:(id)arg1;
- (void)setMask:(id)arg1 forName:(id)arg2;
@property(readonly) NSSet *targetIdioms;
- (void)addImpliedIdiom:(id)arg1;
- (BOOL)isDeployingToAtLeast:(id)arg1;
- (BOOL)isTargetingDeploymentTargetsPriorTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCatalogCompilerOptions:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)stringRepresentationOfStringFilesByStickerPackAndLanguage;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

