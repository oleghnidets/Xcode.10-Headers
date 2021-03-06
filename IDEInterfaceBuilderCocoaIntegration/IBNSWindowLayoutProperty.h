//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

#import "IBWindowLayoutViewDelegate.h"

@class IBWindowLayoutView, IDEInspectorKeyPath, NSString;

@interface IBNSWindowLayoutProperty : IDEInspectorProperty <IBWindowLayoutViewDelegate>
{
    IDEInspectorKeyPath *_strutsKeyPath;
    IDEInspectorKeyPath *_screenFrameKeyPath;
    IDEInspectorKeyPath *_contentRectKeyPath;
    IBWindowLayoutView *_layoutView;
}

@property(retain) IBWindowLayoutView *layoutView; // @synthesize layoutView=_layoutView;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)windowLayoutViewDidChangeWindowContentRect:(id)arg1;
- (void)windowLayoutViewDidChangeWindowStruts:(id)arg1;
- (double)baseline;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

