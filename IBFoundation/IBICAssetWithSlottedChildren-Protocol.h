//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICAbstractCatalogItem, IBICSlot;

@protocol IBICAssetWithSlottedChildren <NSObject>
+ (id)defaultInstanceWithChildSlots:(id <IBCollection>)arg1;
+ (Class)slotClass;
- (BOOL)shouldMutateChild:(IBICAbstractCatalogItem *)arg1 byCopyingContentToNewSlot:(IBICSlot *)arg2;
- (void)setConflictState:(unsigned long long)arg1 forChild:(IBICAbstractCatalogItem *)arg2;
- (BOOL)isChildMinimallyFitForCompiling:(IBICAbstractCatalogItem *)arg1;
- (Class)expectedChildClassForSlot:(IBICSlot *)arg1;
- (IBICAbstractCatalogItem *)conflictFreeChildForSlot:(IBICSlot *)arg1;
- (IBICSlot *)slotForChild:(IBICAbstractCatalogItem *)arg1;
- (unsigned long long)conflictStateForChild:(IBICAbstractCatalogItem *)arg1;
@end

