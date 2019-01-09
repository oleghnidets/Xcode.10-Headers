//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewController.h>

#import "NSMenuDelegate.h"

@class DVTObservingToken, IDEIntentBuilderResourceManager, NSArray, NSArrayController, NSButton, NSComboBox, NSPopUpButton, NSString, NSTextField;

@interface IDEIntentBuilderEditorIntentCapsuleViewController : IDEIntentBuilderEditorCapsuleViewController <NSMenuDelegate>
{
    NSArray *_availableImageNames;
    struct NSObject *_resourcesKVOToken;
    IDEIntentBuilderResourceManager *_resourceManager;
    DVTObservingToken *_defaultImageObservingToken;
    NSPopUpButton *_categoryPopUpButton;
    NSArrayController *_categoriesArrayController;
    NSTextField *_intentTitleTextField;
    NSTextField *_intentDescriptionTextField;
    NSButton *_confirmationCheckboxButton;
    NSComboBox *_defaultImageComboBox;
    NSButton *_revealDefaultImageLocationInEditorButton;
}

@property __weak NSButton *revealDefaultImageLocationInEditorButton; // @synthesize revealDefaultImageLocationInEditorButton=_revealDefaultImageLocationInEditorButton;
@property __weak NSComboBox *defaultImageComboBox; // @synthesize defaultImageComboBox=_defaultImageComboBox;
@property __weak NSButton *confirmationCheckboxButton; // @synthesize confirmationCheckboxButton=_confirmationCheckboxButton;
@property __weak NSTextField *intentDescriptionTextField; // @synthesize intentDescriptionTextField=_intentDescriptionTextField;
@property __weak NSTextField *intentTitleTextField; // @synthesize intentTitleTextField=_intentTitleTextField;
@property __weak NSArrayController *categoriesArrayController; // @synthesize categoriesArrayController=_categoriesArrayController;
@property __weak NSPopUpButton *categoryPopUpButton; // @synthesize categoryPopUpButton=_categoryPopUpButton;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_defaultImageDocumentLocation;
- (void)_updateRevealDefaultImageLocationInEditorButton;
- (void)_updateDefaultImageComboBox;
- (void)_beginObservingWorkspaceImageResources;
- (void)_bindEnabledState;
- (void)_bindValues;
- (void)_unbindEnabledState;
- (void)_unbindValues;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)menuNeedsUpdate:(id)arg1;
- (void)loadView;
- (void)revealDefaultImageLocationInEditorButtonPressed:(id)arg1;
- (void)categoryPopUpButtonChangedValue:(id)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

