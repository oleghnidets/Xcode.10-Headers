//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorViewController.h>

#import "IDECapsuleViewController.h"
#import "IDECapsuleViewDelegate.h"

@class NSColor, NSImage, NSString;

@interface IDEIntentBuilderEditorCapsuleViewController : IDEIntentBuilderEditorViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
}

@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *titleForDisplay;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

