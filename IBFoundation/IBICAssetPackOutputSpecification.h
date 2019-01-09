//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSSet, NSString;

@interface IBICAssetPackOutputSpecification : NSObject <IBBinaryArchiving>
{
    NSSet *_tags;
    NSString *_bundleIdentifier;
    NSString *_outputPath;
}

+ (id)outputSpecificationsKeyedByTagSetsFromCommandlinePlist:(id)arg1 makePathsAbsolute:(BOOL)arg2 error:(id *)arg3;
+ (id)outputSpecificationFromCommandlinePlistRecord:(id)arg1 makePathAbsolute:(BOOL)arg2 error:(id *)arg3;
@property(readonly) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSSet *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (id)englishNameForTagSet;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAssetPackOutputSpecification:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTags:(id)arg1 bundleIdentifier:(id)arg2 outputPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

