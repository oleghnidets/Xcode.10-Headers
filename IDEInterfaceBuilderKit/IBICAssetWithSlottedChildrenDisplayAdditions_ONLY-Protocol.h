//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IBICAbstractCatalogDocument, IBICAbstractCatalogItem, IBICSlot;

@protocol IBICAssetWithSlottedChildrenDisplayAdditions_ONLY
- (IBICAbstractCatalogItem *)createDefaultChildForNewSlot:(IBICSlot *)arg1 byModifyingSlot:(IBICSlot *)arg2;
- (IBICAbstractCatalogItem *)mutateByAddingNewChild:(IBICAbstractCatalogItem *)arg1 forSlot:(IBICSlot *)arg2 inDocument:(IBICAbstractCatalogDocument *)arg3;
- (IBICAbstractCatalogItem *)mutateByAddingCopyOfChild:(IBICAbstractCatalogItem *)arg1 usingSlot:(IBICSlot *)arg2 inDocument:(IBICAbstractCatalogDocument *)arg3;
@end

