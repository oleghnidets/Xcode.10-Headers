//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import "DVTOutlineViewDelegate.h"

@class DVTBorderedView, DVTImageAndTextColumn, IDEDMEditor, IDEDMIndentationAdjustingOutlineView, NSArray, NSString, NSTextFieldCell, NSTreeController;

@interface IDEDMEditorSourceListController : IDEDMEditorController <DVTOutlineViewDelegate>
{
    IDEDMEditor *parentEditor;
    DVTImageAndTextColumn *primaryColumn;
    IDEDMIndentationAdjustingOutlineView *sourceListOutlineView;
    DVTBorderedView *borderedView;
    NSArray *_allSourceListSections;
    NSArray *_shownSourceListSections;
    NSArray *_selectedSourceListIndexPaths;
    NSTextFieldCell *_sourceListTitleCell;
    NSTextFieldCell *_sourceListItemCell;
    NSTreeController *_sourceListTreeController;
}

+ (id)keyPathsForValuesAffectingSelection;
+ (id)keyPathsForValuesAffectingSelectedTopLevelObjects;
+ (id)keyPathsForValuesAffectingModelRoot;
@property(readonly) NSTreeController *sourceListTreeController; // @synthesize sourceListTreeController=_sourceListTreeController;
@property(readonly) NSTextFieldCell *sourceListTitleCell; // @synthesize sourceListTitleCell=_sourceListTitleCell;
@property(readonly) NSTextFieldCell *sourceListItemCell; // @synthesize sourceListItemCell=_sourceListItemCell;
@property(retain) NSArray *selectedSourceListIndexPaths; // @synthesize selectedSourceListIndexPaths=_selectedSourceListIndexPaths;
@property(retain) NSArray *shownSourceListSections; // @synthesize shownSourceListSections=_shownSourceListSections;
@property(retain) NSArray *allSourceListSections; // @synthesize allSourceListSections=_allSourceListSections;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)editNameForModelObject:(id)arg1;
- (BOOL)deleteTopLevelObjects:(id)arg1;
- (void)editNameForTopLevelModelObject:(id)arg1;
- (id)selection;
- (id)selectedTopLevelObjectsWithClass:(Class)arg1;
- (id)selectedTopLevelObjects;
- (void)selectTopLevelObjects:(id)arg1;
- (void)takeFocus;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)_modelChanged;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)refreshOutlineView;
- (void)_setupBorderedView;
- (void)_childrenKeyPathChanged;
- (id)treeControllerChildrenKeyPath;
- (void)_configureShownSections;
- (void)setupSourceListSections;
- (id)createSourceListSections;
- (id)shownSourceListSectionIdentifiers;
- (void)setupSourceListAndCells;
- (void)setupContextualMenu;
- (id)createSourceListItemCell;
- (id)createSourceListTitleCell;
- (id)modelRoot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

