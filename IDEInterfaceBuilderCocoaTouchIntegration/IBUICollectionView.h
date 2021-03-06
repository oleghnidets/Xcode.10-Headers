//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIScrollView.h>

#import "IBDocumentArchiving.h"

@class IBUICollectionReusableView, IBUICollectionViewFlowLayout, IBUICollectionViewLayout, IBUIView, NSArray, NSDictionary, NSMutableDictionary, NSString, NSValue;

@interface IBUICollectionView : IBUIScrollView <IBDocumentArchiving>
{
    id <DVTCancellable> _cellObservingToken;
    NSDictionary *_cachedCellFramesByPrototype;
    NSMutableDictionary *_compiledPrototypeNIBs;
    BOOL _prefetchingEnabled;
    BOOL _separatingPrototypeChildrenForCompilation;
    BOOL _springLoaded;
    long long _dataMode;
    IBUICollectionViewLayout *_collectionViewLayout;
    NSArray *_cells;
    IBUIView *_backgroundView;
    IBUICollectionReusableView *_sectionHeaderView;
    IBUICollectionReusableView *_sectionFooterView;
    NSArray *_cachedCellFrames;
    NSArray *_cachedSectionHeaderViewFrames;
    NSArray *_cachedSectionFooterViewFrames;
    NSValue *_cachedBackgroundViewFrame;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingHasFlowLayout;
+ (id)keyPathsForValuesAffectingIbInspectedScrollDirection;
+ (id)keyPathsForValuesAffectingIbInspectedSectionInsetReference;
+ (id)keyPathsForValuesAffectingIbInspectedSectionInsetMaxY;
+ (id)keyPathsForValuesAffectingIbInspectedSectionInsetMaxX;
+ (id)keyPathsForValuesAffectingIbInspectedSectionInsetMinY;
+ (id)keyPathsForValuesAffectingIbInspectedSectionInsetMinX;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumInteritemSpacing;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumLineSpacing;
+ (id)keyPathsForValuesAffectingIbInspectedItemSize;
+ (id)keyPathsForValuesAffectingIbInspectedHasSectionFooterView;
+ (id)keyPathsForValuesAffectingIbInspectedHasSectionHeaderView;
+ (id)keyPathsForValuesAffectingIbInspectedFooterReferenceSize;
+ (id)keyPathsForValuesAffectingIbInspectedHeaderReferenceSize;
+ (id)keyPathsForValuesAffectingIbInspectedLayoutMode;
+ (id)keyPathsForValuesAffectingIbAllowsSettingNumberOfCellsFromInspector;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfCells;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSDictionary *compiledPrototypeNIBs; // @synthesize compiledPrototypeNIBs=_compiledPrototypeNIBs;
@property(copy, nonatomic) NSValue *cachedBackgroundViewFrame; // @synthesize cachedBackgroundViewFrame=_cachedBackgroundViewFrame;
@property(copy, nonatomic) NSArray *cachedSectionFooterViewFrames; // @synthesize cachedSectionFooterViewFrames=_cachedSectionFooterViewFrames;
@property(copy, nonatomic) NSArray *cachedSectionHeaderViewFrames; // @synthesize cachedSectionHeaderViewFrames=_cachedSectionHeaderViewFrames;
@property(copy, nonatomic) NSArray *cachedCellFrames; // @synthesize cachedCellFrames=_cachedCellFrames;
@property(nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property BOOL separatingPrototypeChildrenForCompilation; // @synthesize separatingPrototypeChildrenForCompilation=_separatingPrototypeChildrenForCompilation;
@property(nonatomic) BOOL prefetchingEnabled; // @synthesize prefetchingEnabled=_prefetchingEnabled;
@property(retain, nonatomic) IBUICollectionReusableView *sectionFooterView; // @synthesize sectionFooterView=_sectionFooterView;
@property(retain, nonatomic) IBUICollectionReusableView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(retain, nonatomic) IBUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) IBUICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
- (void).cxx_destruct;
- (BOOL)ibShouldMarshallCollectionViewLayoutWithContext:(id)arg1;
- (id)customCellSizes;
- (id)localExtraMarshalledAttributesKeyPaths;
- (BOOL)canFitCellOfSize:(struct CGSize)arg1;
- (struct CGPoint)maxContentPoint;
- (struct CGSize)sizeOfCellsArea;
- (struct CGSize)sizeOfCellsAreaForSectionInset:(CDStruct_c519178c)arg1;
- (void)shrinkCellsToFitWithSectionInset:(CDStruct_c519178c)arg1;
@property(readonly) CDStruct_c519178c sectionInset;
@property(readonly) BOOL hasFlowLayout;
- (id)cellTouchingRightOfCell:(id)arg1;
- (id)cellTouchingLeftOfCell:(id)arg1;
- (id)cellTouchingBottomOfCell:(id)arg1;
- (id)cellTouchingTopOfCell:(id)arg1;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (id)cellFrames;
- (struct CGRect)frameForPrototypeCell:(id)arg1;
- (id)sectionFooterViewFrames;
- (id)sectionHeaderViewFrames;
- (struct CGRect)prototypeSectionFooterViewFrame;
- (struct CGRect)prototypeSectionHeaderViewFrame;
- (struct CGRect)backgroundViewFrame;
- (BOOL)computesContentSize;
- (void)layoutSubviews;
- (void)verifyFramesInSyncForViewsForAutoresizingMasks;
- (BOOL)isContainedPrototypeObject:(id)arg1;
- (BOOL)isContainedSectionHeaderOrFooterView:(id)arg1;
- (BOOL)isContainedCell:(id)arg1;
- (void)registerPrototypeNIBData:(id)arg1 forRelationship:(id)arg2 reuseIdentifier:(id)arg3;
- (void)collectionViewFlowLayoutScrollDirectionDidChange:(id)arg1;
- (void)collectionViewLayoutItemSizeDidChange:(id)arg1;
- (void)collectionViewLayoutGeometryDidChange:(id)arg1;
- (void)populateGeometryMarshallingContext:(id)arg1;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)collectionViewCellDidChangeCustomSize:(id)arg1;
- (void)collectionReusableViewDidChangeBackgroundColor:(id)arg1;
- (void)collectionReusableViewDidChangeSize:(id)arg1;
- (void)drawBackground;
- (void)drawRect:(struct CGRect)arg1;
- (void)configurePlaceholderDrawingAttributes:(id)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (unsigned long long)collectionViewBorderSides;
- (BOOL)prefersCachedImageBasedDrawing;
- (id)bezierPathForShadowClip;
@property(readonly, nonatomic) IBUICollectionViewFlowLayout *flowLayout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (id)ibPreviewingRegistrantSourceViewInDocument:(id)arg1;
- (id)ibPrefersMarginRelativeConstraintsToChildItem:(id)arg1;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (unsigned long long)ibBoundsIndicatorBorderSidesForCell:(id)arg1;
- (BOOL)ibShouldDrawRightBoundsIndicatorBorderSideForCell:(id)arg1;
- (BOOL)ibShouldDrawLeftBoundsIndicatorBorderSideForCell:(id)arg1;
- (BOOL)ibShouldDrawBottomBoundsIndicatorBorderSideForCell:(id)arg1;
- (BOOL)ibShouldDrawTopBoundsIndicatorBorderSideForCell:(id)arg1;
- (BOOL)ibIsRightOfCellTouchingSectionFooterView:(id)arg1;
- (BOOL)ibIsBottomOfCellTouchingSectionFooterView:(id)arg1;
- (BOOL)ibIsLeftOfCellTouchingSectionHeaderView:(id)arg1;
- (BOOL)ibIsTopOfCellTouchingSectionHeaderView:(id)arg1;
- (struct CGRect)ibFrameForCellIfNotNil:(id)arg1;
- (BOOL)ibIsCellTouchingSectionFooterView:(id)arg1;
- (BOOL)ibIsCellTouchingSectionHeaderView:(id)arg1;
- (void)ibCaptureStoryboardCompilationResult:(id)arg1 fromCompilationUnit:(id)arg2;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (struct CGSize)preferredSectionHeaderOrFooterViewSize:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateIssuesAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibCanAcceptBackgroundViewFromPasteboard:(id)arg1 inDocument:(id)arg2 targetChildGroupInOut:(id *)arg3;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibAllowsScrollingInEditor;
- (id)ibPasteboardTypes;
- (id)ibLabelQualifierForChild:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (void)setIbInspectedScrollDirection:(int)arg1;
- (int)ibInspectedScrollDirection;
- (long long)ibInspectedSectionInsetReference;
- (void)setIbInspectedSectionInsetReference:(long long)arg1;
- (void)setIbInspectedSectionInset:(CDStruct_c519178c)arg1;
- (void)setIbInspectedSectionInsetMaxY:(double)arg1;
- (double)ibInspectedSectionInsetMaxY;
- (void)setIbInspectedSectionInsetMaxX:(double)arg1;
- (double)ibInspectedSectionInsetMaxX;
- (void)setIbInspectedSectionInsetMinY:(double)arg1;
- (double)ibInspectedSectionInsetMinY;
- (void)setIbInspectedSectionInsetMinX:(double)arg1;
- (double)ibInspectedSectionInsetMinX;
- (void)setIbInspectedMinimumInteritemSpacing:(double)arg1;
- (double)ibInspectedMinimumInteritemSpacing;
- (void)setIbInspectedMinimumLineSpacing:(double)arg1;
- (double)ibInspectedMinimumLineSpacing;
- (void)setIbInspectedItemSize:(struct CGSize)arg1;
- (struct CGSize)ibInspectedItemSize;
@property(nonatomic) BOOL ibInspectedHasSectionFooterView;
@property(nonatomic) BOOL ibInspectedHasSectionHeaderView;
- (void)setIbInspectedHasSectionHeaderOrFooterView:(BOOL)arg1 relationshipKeyPath:(id)arg2;
- (BOOL)ibInspectedHasSectionHeaderOrFooterView:(id)arg1;
- (struct CGSize)ibDefaultSectionHeaderOrFooterViewReferenceSize;
- (void)setIbInspectedFooterReferenceSize:(struct CGSize)arg1;
- (struct CGSize)ibInspectedFooterReferenceSize;
- (void)setIbInspectedHeaderReferenceSize:(struct CGSize)arg1;
- (struct CGSize)ibInspectedHeaderReferenceSize;
- (void)setIbInspectedLayoutMode:(long long)arg1;
- (long long)ibInspectedLayoutMode;
@property(nonatomic) long long ibInspectedNumberOfCells;
- (BOOL)ibAllowsSettingNumberOfCellsFromInspector;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
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

