//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@interface IBICCatalogCollection : NSObject
{
    NSArray *_catalogsOrderedByPath;
    NSSet *_catalogs;
}

+ (id)collectionWithCatalogPaths:(id)arg1 results:(id)arg2;
+ (id)catalogsFromPaths:(id)arg1 results:(id)arg2;
@property(readonly) NSSet *catalogs; // @synthesize catalogs=_catalogs;
@property(readonly) NSArray *catalogsOrderedByPath; // @synthesize catalogsOrderedByPath=_catalogsOrderedByPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *allTags;
- (id)itemsFromCatalogPathsToIdentifierPaths:(id)arg1;
- (id)catalogPathsToIdentifierPathsForItems:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)findEmptyPlaceholderForSlottedAssetOfPossibleClasses:(id)arg1 withName:(id)arg2 error:(id *)arg3;
- (id)allSlottedAssetsOfClass:(Class)arg1 withName:(id)arg2;
- (id)allCatalogItemsOfClass:(Class)arg1;
- (id)slottedAssetRepsForCompilingSlottedAssetsOfClass:(Class)arg1 options:(id)arg2 ignoringItems:(id)arg3 populatingIssues:(id)arg4 slottedAssetFilter:(CDUnknownBlockType)arg5;
- (id)catalogForAbsolutePath:(id)arg1;
- (id)initWithCatalogs:(id)arg1;
- (id)catalogCollectionByAddingCatalogsAtPaths:(id)arg1 results:(id)arg2;

@end
