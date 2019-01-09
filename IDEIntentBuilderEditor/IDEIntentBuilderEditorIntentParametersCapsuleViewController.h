//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleTableViewController.h>

#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class DVTObservingToken, IDEIntentBuilderEditorImageButton, NSArrayController, NSLayoutConstraint, NSString, NSTableView;

@interface IDEIntentBuilderEditorIntentParametersCapsuleViewController : IDEIntentBuilderEditorCapsuleTableViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate>
{
    DVTObservingToken *_contentArrayObservationToken;
    DVTObservingToken *_selectionObserver;
    NSLayoutConstraint *_heightConstraint;
    NSTableView *_tableView;
    IDEIntentBuilderEditorImageButton *_addButton;
    IDEIntentBuilderEditorImageButton *_deleteButton;
    NSArrayController *_contentArrayController;
    NSArrayController *_typesArrayController;
}

@property __weak NSArrayController *typesArrayController; // @synthesize typesArrayController=_typesArrayController;
@property __weak NSArrayController *contentArrayController; // @synthesize contentArrayController=_contentArrayController;
@property __weak IDEIntentBuilderEditorImageButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property __weak IDEIntentBuilderEditorImageButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;
- (id)_parameterColumnTitle;
- (void)_addEnum;
- (void)_resize;
- (void)_bindContentViewController;
- (void)_setupBindings;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)primitiveInvalidate;
- (void)awakeFromNib;
- (void)loadView;
- (id)selectedObjects;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

