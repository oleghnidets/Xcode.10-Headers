//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"

@class NSString;

@interface IBUIPickerView : IBUIView <IBDocumentArchiving>
{
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)defaultBackgroundColor;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)ibCustomizeForInsertionIntoIBUIViewController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGRect)ibSquashedXcode7InitialFrameFromAddingToNonAnyAny;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGSize)ibMinimumSizeForCustomizationForTargetRuntime:(id)arg1;
- (id)ibWidgetType;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

