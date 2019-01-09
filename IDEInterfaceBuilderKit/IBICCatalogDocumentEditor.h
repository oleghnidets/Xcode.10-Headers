//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DVTStatefulObject.h"
#import "IBICCatalogItemObserver.h"
#import "IBSelectionChannelApplicator.h"

@class DVTSplitView, IBICAbstractCatalogDetailController, IBICCatalogOverviewController, IBICCatalogSlicingController, IBICCatalogSourceListController, IBSelectionChannel, IDEFilePickerPanel, NSArray, NSMutableArray, NSSet, NSString;

@interface IBICCatalogDocumentEditor : IDEEditor <IBICCatalogItemObserver, IBSelectionChannelApplicator, DVTStatefulObject>
{
    NSSet *_itemsInfluencingOrderOfDisplayedCatalogItems;
    id <IBInvalidation> _catalogObservation;
    NSString *_lastFocusedArea;
    id <DVTCancellable> _mainViewControllerToken;
    IDEFilePickerPanel *_importFilePickerPanel;
    NSMutableArray *_importableItems;
    NSSet *_selectedCatalogItems;
    IBSelectionChannel *_selectionChannel;
    NSSet *_sourceItems;
    NSArray *_displayedCatalogItems;
    NSArray *_currentSelectedItems;
    DVTSplitView *_splitView;
    IBICAbstractCatalogDetailController *_currentDetailController;
    IBICCatalogSourceListController *_sourceListController;
    IBICCatalogOverviewController *_overviewController;
    IBICCatalogSlicingController *_slicingController;
}

+ (id)displayOrderedCatalogItemsForDetailViewFromItems:(id)arg1;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(readonly, nonatomic) IBICCatalogSlicingController *slicingController; // @synthesize slicingController=_slicingController;
@property(readonly, nonatomic) IBICCatalogOverviewController *overviewController; // @synthesize overviewController=_overviewController;
@property(readonly, nonatomic) IBICCatalogSourceListController *sourceListController; // @synthesize sourceListController=_sourceListController;
@property(readonly, nonatomic) IBICAbstractCatalogDetailController *currentDetailController; // @synthesize currentDetailController=_currentDetailController;
@property(retain, nonatomic) DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(readonly, copy, nonatomic) NSArray *displayedCatalogItems; // @synthesize displayedCatalogItems=_displayedCatalogItems;
@property(copy, nonatomic) NSSet *sourceItems; // @synthesize sourceItems=_sourceItems;
@property(readonly, nonatomic) IBSelectionChannel *selectionChannel; // @synthesize selectionChannel=_selectionChannel;
@property(copy, nonatomic) NSSet *selectedCatalogItems; // @synthesize selectedCatalogItems=_selectedCatalogItems;
- (void).cxx_destruct;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (id)itemsFromDocumentLocations:(id)arg1;
- (void)warnAboutBogusDocumentLocations:(id)arg1;
- (void)addAssetTagsToProject:(id)arg1;
- (void)addAssetTagsToProjectForItem:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canPopulateAssetCatalogSlot:(id)arg1;
- (void)populateAssetCatalogSlot:(id)arg1;
- (BOOL)validateDeviceSlotMenuItem:(id)arg1 actionContext:(id)arg2;
- (id)imageSetsForActionContext:(id)arg1;
- (void)convertDarkSuffixedAssets:(id)arg1;
- (void)openImageCatalogItemsInExternalEditor:(id)arg1;
- (void)showImageCatalogItemsInFinder:(id)arg1;
- (void)removeImageCatalogItemsBasedOnSelectionContext:(id)arg1;
- (void)showSlicingControllerInDetailArea:(id)arg1;
- (void)showOverviewControllerInDetailArea:(id)arg1;
- (void)switchToAlternateDetailController:(id)arg1;
- (void)setCurrentDetailController:(id)arg1;
- (BOOL)canConvertDarkSuffixedAssets;
- (BOOL)canImportImageCatalogContentWithActionContext:(id)arg1;
- (BOOL)canRemoveItemsWithActionContext:(id)arg1;
- (BOOL)canOpenImageCatalogItemsInExternalEditorWithActionContext:(id)arg1;
- (BOOL)canShowImageCatalogItemsInFinderWithActionContext:(id)arg1;
- (void)toggleDeviceSpecificImageRepSlots:(id)arg1 toValue:(BOOL)arg2 actionContext:(id)arg3;
- (void)_finishImportingImageCatalogContent;
- (void)_importImageCatalogContentWithActionContext:(id)arg1;
- (void)importImageCatalogContentFromProjectWithActionContext:(id)arg1;
- (id)_importFilePickerProjectFileReferences;
- (id)_importFilePickerImportableNavigableItemPredicate;
- (void)importImageCatalogContentWithActionContext:(id)arg1;
- (void)openImageCatalogItemsInExternalEditorWithActionContext:(id)arg1;
- (void)showImageCatalogItemsInFinderWithActionContext:(id)arg1;
- (id)imageCatalogItemURLsForShowingInFinderForActionContext:(id)arg1;
- (id)imageCatalogItemURLsForOpenningInExternalEditorForActionContext:(id)arg1;
- (id)orderedURLsForItems:(id)arg1;
- (void)applyAssetInstantiationCommand:(id)arg1 inActionContext:(id)arg2;
- (BOOL)canApplyAssetInstantiationCommand:(id)arg1 inActionContext:(id)arg2;
- (void)removeItemsWithActionContext:(id)arg1;
- (id)parentForInsertingItemOfClass:(Class)arg1 givenContext:(id)arg2 targetIndexes:(id *)arg3;
- (id)insertionAnchorGivenContext:(id)arg1;
- (id)defaultSelectionContextForAddedItemWithActionContext:(id)arg1;
- (id)defaultSelectionContextForAddedItem;
- (id)actionContextFromSelection;
- (void)imageCatalogItemDiskContentsDidChange:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)imageCatalogItemDidChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItem:(id)arg1 willChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (void)userDidSelectObjectsViaGenericIDEMechanism:(id)arg1;
- (id)orderedSelectedItems;
- (id)validateSelection:(id)arg1;
- (void)replaceSelectionOfItems:(id)arg1 withItem:(id)arg2;
- (id)regenerateOutputSelection;
- (void)selectionChannel:(id)arg1 applySelection:(id)arg2 previousSelection:(id)arg3 context:(id)arg4;
- (void)setDisplayedCatalogItems:(id)arg1;
- (BOOL)itemInfluencesDisplayOrderOfDetailItems:(id)arg1;
- (id)catalog;
- (id)document;
- (void)takeFocus;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)childControllers;
- (void)refreshDetailView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

