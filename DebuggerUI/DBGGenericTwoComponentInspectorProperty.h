//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSString, NSTextField, NSView;

@interface DBGGenericTwoComponentInspectorProperty : IDEInspectorProperty
{
    NSTextField *_xTitleTextField;
    NSTextField *_yTitleTextField;
    NSTextField *_xComponentTextField;
    NSTextField *_yComponentTextField;
    NSView *_xComponentContainer;
    NSView *_yComponentContainer;
    NSTextField *_placeholderTextField;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_valueType;
}

@property(retain) NSString *valueType; // @synthesize valueType=_valueType;
@property(retain) IDEInspectorKeyPath *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property __weak NSTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property __weak NSView *yComponentContainer; // @synthesize yComponentContainer=_yComponentContainer;
@property __weak NSView *xComponentContainer; // @synthesize xComponentContainer=_xComponentContainer;
@property __weak NSTextField *yComponentTextField; // @synthesize yComponentTextField=_yComponentTextField;
@property __weak NSTextField *xComponentTextField; // @synthesize xComponentTextField=_xComponentTextField;
@property __weak NSTextField *yTitleTextField; // @synthesize yTitleTextField=_yTitleTextField;
@property __weak NSTextField *xTitleTextField; // @synthesize xTitleTextField=_xTitleTextField;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)_setPlaceholderString:(id)arg1;
- (void)_configureForNilValue;
- (void)refresh;
- (BOOL)_updateValuesForInspectorValue:(id)arg1;
- (void)loadView;

@end

