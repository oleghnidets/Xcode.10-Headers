//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSArrayController, NSPopUpButton;

@interface SKInspectorNodeFileProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSPopUpButton *_popUpButton;
    NSArrayController *_availableNodeFilenames;
}

+ (id)scannedSceneFiles;
@property(retain) NSArrayController *availableNodeFilenames; // @synthesize availableNodeFilenames=_availableNodeFilenames;
@property(retain) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)viewDidLoad;

@end
