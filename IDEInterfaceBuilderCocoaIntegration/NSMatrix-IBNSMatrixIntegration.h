//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMatrix.h"

@interface NSMatrix (IBNSMatrixIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfColumns;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfRows;
+ (id)keyPathsForValuesAffectingCell;
- (void)unarchiveCells:(id)arg1;
- (void)archiveCells:(id)arg1;
- (void)unarchiveCell:(id)arg1;
- (void)archiveCell:(id)arg1;
- (BOOL)swapCell:(id)arg1 forEvent:(id)arg2;
- (void)setIbInspectedLineBreakMode:(long long)arg1;
- (long long)ibInspectedLineBreakMode;
- (void)setIbInspectedContinuous:(long long)arg1;
- (long long)ibInspectedContinuous;
- (void)setIbInspectedBaseWritingDirection:(long long)arg1;
- (long long)ibInspectedBaseWritingDirection;
- (void)setIbInspectedUserInterfaceLayoutDirection:(long long)arg1;
- (long long)ibInspectedUserInterfaceLayoutDirection;
- (void)setIbInspectedTruncatesLastVisibleLine:(long long)arg1;
- (long long)ibInspectedTruncatesLastVisibleLine;
- (void)setIbInspectedRefusesFirstResponder:(long long)arg1;
- (long long)ibInspectedRefusesFirstResponder;
- (long long)ibInspectedEnabled;
- (void)ibPopulateObjectsForFloatingPanels:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibHasSingleCell;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (BOOL)ibIsClippingContent;
- (struct CGSize)ibPreferredSize;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (void)ibWillSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (struct CGSize)ibPreferredCellSize;
- (unsigned long long)ibInspectedControlSize;
- (void)setIbInspectedControlSize:(unsigned long long)arg1;
- (void)setIbShadowedCellMatrix:(id)arg1;
- (id)ibShadowedCellMatrix;
- (id)ibShadowedCells;
- (void)setIbInspectedInterCellSpacingHeight:(double)arg1;
- (double)ibInspectedInterCellSpacingHeight;
- (void)setIbInspectedInterCellSpacingWidth:(double)arg1;
- (double)ibInspectedInterCellSpacingWidth;
- (void)setIbInspectedCellSizeHeight:(double)arg1;
- (double)ibInspectedCellSizeHeight;
- (void)setIbInspectedCellSizeWidth:(double)arg1;
- (double)ibInspectedCellSizeWidth;
- (void)setIbInspectedNumberOfColumns:(long long)arg1;
- (long long)ibInspectedNumberOfColumns;
- (void)setIbInspectedNumberOfRows:(long long)arg1;
- (long long)ibInspectedNumberOfRows;
- (void)setIbShadowedPrototype:(id)arg1;
- (id)ibShadowedPrototype;
- (void)ibSyncChildren;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibExposedElusiveDescendantsKeyPaths;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (Class)ibTrackerClass;
- (Class)ibEditorClass;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibToManyRelationSupportsReplacement:(id)arg1;
- (BOOL)ibToManyRelationSupportsInsertion:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (id)ibUndoKeyPathForToManyRelationshipKeyPath:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
@end
