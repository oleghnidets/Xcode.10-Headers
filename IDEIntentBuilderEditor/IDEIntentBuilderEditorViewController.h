//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "IDEIntentBuilderEditorViewController.h"

@class IDEIntentBuilderEditor, IDEIntentBuilderModel, NSString;

@interface IDEIntentBuilderEditorViewController : IDEViewController <IDEIntentBuilderEditorViewController>
{
    IDEIntentBuilderEditor *_parentEditor;
}

@property __weak IDEIntentBuilderEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) IDEIntentBuilderModel *model;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

