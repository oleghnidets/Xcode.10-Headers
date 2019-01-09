//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIFixedSimulatedSizeMetrics.h>

@class IBCocoaTouchIdiom, IBCocoaTouchOSVersion, NSDictionary, NSSet, NSString;

@interface IBUIScreenMetrics : IBUIFixedSimulatedSizeMetrics
{
    NSDictionary *_normalizedOrientationToSizeMap;
    NSString *_displayName;
    IBCocoaTouchIdiom *_idiom;
    NSString *_archiveIdentifier;
    NSSet *_legacyIdentifiersForMigration;
    IBCocoaTouchOSVersion *_minimumSupportedOSVersion;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)instantiateWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) IBCocoaTouchOSVersion *minimumSupportedOSVersion; // @synthesize minimumSupportedOSVersion=_minimumSupportedOSVersion;
@property(readonly, copy, nonatomic) NSSet *legacyIdentifiersForMigration; // @synthesize legacyIdentifiersForMigration=_legacyIdentifiersForMigration;
@property(readonly, copy, nonatomic) NSString *archiveIdentifier; // @synthesize archiveIdentifier=_archiveIdentifier;
- (id)idiom;
- (id)displayName;
- (void).cxx_destruct;
- (id)normalizedOrientationToSizeMap;
- (BOOL)isEqualToSimulatedSizeMetrics:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)pageSheetFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)formSheetFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)splitViewDetailFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)splitViewMasterFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)splitViewDetailSimulatedMemberConfigurationForOrientationMetrics:(id)arg1;
- (id)splitViewMasterSimulatedMemberConfigurationForOrientationMetrics:(id)arg1;
- (id)migratableSimulatedDestinationMetricsOrNil;
- (id)fixedSizeMetricsForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2 freeformSize:(struct CGSize)arg3;
- (BOOL)supportsMultipleOrientations;
- (BOOL)supportsOrientation:(long long)arg1;
- (struct CGSize)sizeForOrientation:(long long)arg1;
- (id)inheritableSplitViewMasterSizeMetricsForPlatform:(id)arg1;
- (id)inheritableSplitViewDetailSizeMetrics;
- (id)inheritableModalPageSheetSizeMetrics;
- (id)inheritableModalFormSheetSizeMetrics;
- (id)init;
- (id)_initWithIdiom:(id)arg1 displayName:(id)arg2 archiveIdentifier:(id)arg3 landscapeSize:(struct CGSize)arg4 portraitSize:(struct CGSize)arg5 minimumSupportedOSVersion:(id)arg6 legacyIdentifiersForMigration:(id)arg7;
- (id)initWithIdiom:(id)arg1 displayName:(id)arg2 archiveIdentifier:(id)arg3 landscapeSize:(struct CGSize)arg4 portraitSize:(struct CGSize)arg5 minimumSupportedOSVersion:(id)arg6 legacyIdentifiersForMigration:(id)arg7;
- (id)initWithIdiom:(id)arg1 displayName:(id)arg2 archiveIdentifier:(id)arg3 size:(struct CGSize)arg4 supportsMultipleOrientations:(BOOL)arg5 minimumSupportedOSVersion:(id)arg6;

@end

