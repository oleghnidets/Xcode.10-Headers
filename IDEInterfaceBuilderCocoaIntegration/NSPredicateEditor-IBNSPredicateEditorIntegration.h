//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditor.h"

@interface NSPredicateEditor (IBNSPredicateEditorIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedRowTemplates;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void)completeUnarchivingAfterChildrenAreUnarchived:(id)arg1;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibHasSingleCell;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (BOOL)ibIsUserMovable;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)setIbInspectedRowTemplates:(long long)arg1;
- (long long)ibInspectedRowTemplates;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (void)ibCompleteFinalSetup;
- (BOOL)ibSwizzledForceUseDelegate;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
@end

