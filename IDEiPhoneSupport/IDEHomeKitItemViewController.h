//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProjectItemViewController.h"

@class IDEHomeKitItemModel, NSTextField;

@interface IDEHomeKitItemViewController : IDEProjectItemViewController
{
    NSTextField *_downloadLabel;
}

@property(nonatomic) __weak NSTextField *downloadLabel; // @synthesize downloadLabel=_downloadLabel;
- (void).cxx_destruct;
- (void)punchOutToDownloadWebPage:(id)arg1;
- (void)viewDidInstall;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) IDEHomeKitItemModel *model; // @dynamic model;

@end

