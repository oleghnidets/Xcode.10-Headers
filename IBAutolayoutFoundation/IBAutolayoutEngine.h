//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBAutolayoutArbitrationUnit, IBLayoutConstraint, IBMutableIdentityDictionary, NSArray, NSISEngine, NSMapTable, NSMutableSet, NSObject<IBAutolayoutItem>, NSSet;

@interface IBAutolayoutEngine : NSObject
{
    IBMutableIdentityDictionary *_representedConstraintToRealConstraintMap;
    IBMutableIdentityDictionary *_realConstraintToRepresentedConstraintMap;
    NSMutableSet *_customLayoutViewsThatStartedWithAmbiguousLayout;
    IBLayoutConstraint *_systemRequiredBorderViewHeightConstraint;
    IBLayoutConstraint *_systemRequiredBorderViewWidthConstraint;
    IBMutableIdentityDictionary *_representedViewToRealViewMap;
    IBMutableIdentityDictionary *_realViewToRepresentedViewMap;
    NSSet *_additionalRepresentedConstraintsRequiredToCopyViewHierarchy;
    NSSet *_realConstraintsForViewsRequiringAdditionalEngineConstraints;
    NSMapTable *_constraintContainingViewsByView;
    NSObject<IBAutolayoutItem> *_topLevelRealView;
    IBMutableIdentityDictionary *_spacerItemsByTag;
    unsigned long long _nextSpacerItemTag;
    NSMutableSet *_mutuallyExclusiveConstraintsRemovedDuringBootstrapping;
    BOOL _haveUpdatedTopLevelSystemRequiredConstraintsForTheFirstTime;
    BOOL _allowsResizingTopLevelView;
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
    unsigned long long _options;
}

+ (void)setGlobalAssertsOnRuntimeUnsatisfiableConstraints:(BOOL)arg1;
+ (BOOL)globalAssertsOnRuntimeUnsatisfiableConstraints;
+ (id)layoutConstraintEngineForViewHierarchyOfView:(id)arg1 layoutInfo:(id)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) NSSet *mutuallyExclusiveConstraintsRemovedDuringBootstrapping; // @synthesize mutuallyExclusiveConstraintsRemovedDuringBootstrapping=_mutuallyExclusiveConstraintsRemovedDuringBootstrapping;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
@property(readonly) NSObject<IBAutolayoutItem> *topMostView; // @synthesize topMostView=_topLevelRealView;
- (void).cxx_destruct;
- (void)exerciseAmbiguityInLayoutForView:(id)arg1;
- (void)_catchExceptionsToWorkaround13752578During:(CDUnknownBlockType)arg1;
- (id)constraintAbstractionsAffectingLayoutOfView:(id)arg1 forOrientation:(unsigned long long)arg2 maximumNumberOfConstraints:(id)arg3;
- (void)_populateConstraintAbstractions:(id)arg1 fromRepresentedConstraint:(id)arg2 maximumNumberOfConstraints:(id)arg3;
- (id)constraintAbstractionForRepresentedConstraint:(id)arg1 referencesDocumentViews:(BOOL)arg2;
- (void)setContentHuggingPriority:(float)arg1 onRepresentationOfView:(id)arg2 forOrientation:(unsigned long long)arg3;
- (void)setContentCompressionResistancePriority:(float)arg1 onRepresentationOfView:(id)arg2 forOrientation:(unsigned long long)arg3;
- (double)evaluatedConstantOfConstraint:(id)arg1;
- (void)withAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;
- (BOOL)constraintIsRedundant:(id)arg1;
- (id)candidateRedundantConstraints;
@property(readonly) NSArray *candidateRedundantRepresentedConstraints;
- (void)setConstant:(double)arg1 ofConstraint:(id)arg2;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 toView:(id)arg2;
- (unsigned long long)attemptToAddConstraint:(id)arg1 toView:(id)arg2 returningConstraintAbstractionsMakingSystemOverConstrained:(id *)arg3;
- (unsigned long long)attemptToAddConstraint:(id)arg1 toView:(id)arg2 returningConstraintsMakingSystemOverConstrained:(id *)arg3;
- (unsigned long long)_attemptToAddConstraint:(id)arg1 toView:(id)arg2 returningConstraintsOrConstraintAbstractionsMakingSystemOverConstrained:(id *)arg3 constraintsOrAbstractionsForRepresentedConstraintsBlock:(CDUnknownBlockType)arg4;
- (BOOL)shouldIgnoreRepresentedConstraint:(id)arg1;
- (void)updateTopLevelSystemRequiredConstraints;
- (void)removeSystemRequiredWidthAndHeightConstraintsOnRepresentedWindowBorderView;
- (void)addSystemRequiredWidthAndHeightConstraintsToRepresentedWindowBorderView;
@property(readonly) NSObject<IBAutolayoutItem> *viewForApplyingSystemRequiredConstraints;
- (void)addExplicitConstraintsForViewsRequiringAdditionalEngineConstraints;
- (void)iterateViewsAndGenerateRepresentedConstraintsAndMapToRealConstraints;
- (void)performEngineBootstrappingConstraintAdditionOperationForAddingConstraint:(id)arg1;
- (id)generateAndInstallTemporaryBootstrappingConstraints;
- (void)continuouslyPerformEngineBootstrappingOperationWithName:(id)arg1 untilSuccessWhileTrackingUnsatisfiableConstraintsDuring:(CDUnknownBlockType)arg2 withUnsatisfiableConstraintRemovedHandler:(CDUnknownBlockType)arg3;
- (BOOL)tryToAddConstraint:(id)arg1 toRepresentedView:(id)arg2 roundingAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (BOOL)internalTryToAddConstraint:(id)arg1 toRepresentedView:(id)arg2 roundingAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (id)addRepresentedConstraintForRealConstraint:(id)arg1;
- (id)representedConstraintBySubstitutingRealViewsForRepresentedViewsOfConstraint:(id)arg1;
- (id)_backingLayoutItemForSpacer:(unsigned long long)arg1;
- (void)removeSpacerItemWithTag:(unsigned long long)arg1;
- (unsigned long long)addSpacerItemMatchingCurrentLayoutFrameOfView:(id)arg1 generatingConstraintsForAttributes:(unsigned long long *)arg2 attributeCount:(unsigned long long)arg3;
- (unsigned long long)addSpacerItemInContainer:(id)arg1 initialLayoutFrame:(struct CGRect)arg2 generatingConstraintsForAttributes:(unsigned long long *)arg3 attributeCount:(unsigned long long)arg4;
- (CDUnknownBlockType)_spacerViewConstraintGenerationBlockForAttributes:(unsigned long long *)arg1 attributeCount:(unsigned long long)arg2;
- (unsigned long long)_addSpacerItemWithRepresentedSuperview:(id)arg1 initialLayoutFrame:(struct CGRect)arg2 constraintGenerationBlock:(CDUnknownBlockType)arg3;
- (void)invalidateConstraintsForRepresentedItems:(id)arg1;
- (void)updateConstraintsIfNeeded;
- (void)layoutIfNeeded;
- (void)setNeedsLayoutFixFor27106541;
@property(readonly) Class spacerItemClass;
- (id)debugDescription;
@property(readonly) NSISEngine *internalEngine;
@property(readonly) BOOL allowsDerivedDesignTimeDefaultIntrinsicContentSize;
@property(readonly) BOOL allowsResizingTopLevelView;
- (void)setAllowsResizingTopLevelView:(BOOL)arg1;
@property(readonly) NSSet *allRealConstraintsIncludingThoseRemovedDuringBootstrapping;
@property(readonly) NSSet *allRealConstraintsCurrentlyInEngine;
- (id)constraintsMakingSystemOverConstrainedBySettingLayoutFrame:(struct CGRect)arg1 ofView:(id)arg2;
- (struct CGSize)intrinsicContentSizeForView:(id)arg1;
- (BOOL)hasMismatchedFrameOrBoundsSizeForView:(id)arg1 expectedFrameOrBounds:(struct CGRect *)arg2 actualFrameOrBounds:(struct CGRect *)arg3;
- (struct CGRect)layoutBoundsForView:(id)arg1;
- (struct CGRect)layoutFrameForView:(id)arg1 inCoordinateSpaceOfView:(id)arg2;
- (struct CGRect)layoutFrameForView:(id)arg1;
- (BOOL)ambiguityIsAccurateForView:(id)arg1;
- (unsigned long long)ambiguityStatusForView:(id)arg1;
- (unsigned long long)ambiguityStatusForRepresentedView:(id)arg1;
- (BOOL)hasAmbiguousLayoutForView:(id)arg1;
- (id)realConstraintsFromCollectionOfRepresentedConstraints:(id)arg1;
- (BOOL)hasRepresentationOfConstraint:(id)arg1;
- (void)setRealConstraint:(id)arg1 forRepresentedConstraint:(id)arg2;
- (id)realConstraintForRepresentedConstraint:(id)arg1;
- (void)setRepresentedConstraint:(id)arg1 forRealConstraint:(id)arg2;
- (id)representedConstraintForRealConstraint:(id)arg1;
- (BOOL)hasRepresentationOfView:(id)arg1;
- (void)mapLayoutEngineView:(id)arg1 toCanvasView:(id)arg2;
- (id)realViewForRepresentedView:(id)arg1;
- (id)representedViewForRealView:(id)arg1;
- (id)representedItemsOrderedBreadthFirst;
@property(readonly) NSArray *realViewsOrderedBreadthFirst;
@property(readonly) id <IBAutolayoutInfoProvider> layoutInfo;
- (void)performInternalEngineModificationsAndAssertOnUnsatisfiableConstraintsIfNeededDuring:(CDUnknownBlockType)arg1 withUnsatisfiableConstraintsHandler:(CDUnknownBlockType)arg2;
- (BOOL)localAssertsOnRuntimeUnsatisfiableConstraints;
- (void)enumerateRealAndRepresentedViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)prepareViewHierarchyAndReturnAddedRepresentedConstraintsForRepresentedViews;
- (id)initWithArbitrationUnit:(id)arg1 options:(unsigned long long)arg2;

@end

