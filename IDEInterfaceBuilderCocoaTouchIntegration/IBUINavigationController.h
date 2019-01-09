//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import "IBDocumentArchiving.h"

@class IBUINavigationBar, IBUIToolbar, NSArray, NSString;

@interface IBUINavigationController : IBUIViewController <IBDocumentArchiving>
{
    NSArray *_viewControllers;
    BOOL _navigationBarHidden;
    BOOL _toolbarHidden;
    BOOL _hidesBarsWhenKeyboardAppears;
    BOOL _hidesBarsOnSwipe;
    BOOL _hidesBarsWhenVerticallyCompact;
    BOOL _hidesBarsOnTap;
    IBUINavigationBar *_navigationBar;
    IBUIToolbar *_toolbar;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)keyPathsForValuesAffectingSimulatedBottomBarMetrics;
+ (id)keyPathsForValuesAffectingSimulatedTopBarMetrics;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL hidesBarsOnTap; // @synthesize hidesBarsOnTap=_hidesBarsOnTap;
@property(nonatomic) BOOL hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact=_hidesBarsWhenVerticallyCompact;
@property(nonatomic) BOOL hidesBarsOnSwipe; // @synthesize hidesBarsOnSwipe=_hidesBarsOnSwipe;
@property(nonatomic) BOOL hidesBarsWhenKeyboardAppears; // @synthesize hidesBarsWhenKeyboardAppears=_hidesBarsWhenKeyboardAppears;
@property(getter=isToolbarHidden) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(retain) IBUIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(retain) IBUINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)innateSimulatedMetricsForPipeline;
- (id)simulatedMetricsForPipeline;
- (id)displayedChildViewController;
@property(retain) IBUIViewController *rootViewController;
- (BOOL)displaysContentView;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (BOOL)ownsBottomBar;
- (BOOL)ownsTopBar;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (id)ibExplanatoryTextForEditor;
- (BOOL)ibCanBePushedOnNavigationController;
- (BOOL)ibToolbarShouldArchiveItems:(id)arg1;
- (void)setIbInspectedSimulatedBottomBarMetrics:(id)arg1;
- (void)setIbInspectedSimulatedTopBarMetrics:(id)arg1;
- (void)setIbSimulatedBottomBarMetricsWithSideEffects:(id)arg1;
- (void)setIbSimulatedTopBarMetricsWithSideEffects:(id)arg1;
- (id)ibMetricChainForDownstreamController:(id)arg1 viaSegue:(id)arg2 succeedingMetric:(id)arg3;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibImageForOwnedScene;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (void)instantiateToolbarIfNecessary;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibToManyRelationSupportsReplacement:(id)arg1;
- (BOOL)ibToManyRelationSupportsInsertion:(id)arg1;
- (void)ibWillAcceptPastedObjects:(id)arg1 atIndexes:(id)arg2 intoToManyRelation:(id)arg3 inDocument:(id)arg4 insertionContext:(id)arg5;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)setIbInspectedToolbarHidden:(BOOL)arg1;
- (BOOL)ibInspectedToolbarHidden;
- (void)setIbInspectedNavigationBarHidden:(BOOL)arg1;
- (BOOL)ibInspectedNavigationBarHidden;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (BOOL)ibRequiresNavigationItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresNavigationItemForChildViewController:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibClipsChild:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLeafMetricForValidationWithPrecedingMetric:(id)arg1;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (Class)ibEditorViewClass;
- (Class)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

