//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIGestureRecognizer.h>

#import "IBDocumentArchiving.h"

@class NSNumber, NSString;

@interface IBUIPanGestureRecognizer : IBUIGestureRecognizer <IBDocumentArchiving>
{
    NSNumber *_minimumNumberOfTouches;
    NSNumber *_maximumNumberOfTouches;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfTouchesDefault;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy) NSNumber *maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(copy) NSNumber *minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibSegueTriggers;
@property(readonly) NSNumber *ibInspectedNumberOfTouchesDefault;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

