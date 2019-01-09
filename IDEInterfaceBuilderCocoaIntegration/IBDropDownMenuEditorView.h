//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBMenuEditorView.h>

#import "IBEditorCanvasFrameShadowDelegate.h"

@class NSString;

@interface IBDropDownMenuEditorView : IBMenuEditorView <IBEditorCanvasFrameShadowDelegate>
{
    BOOL _isTopLevelMainMenu;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)borderlessEditorCanvasFrame:(id)arg1 drawUnshadowedBackgroundInRect:(struct CGRect)arg2;
- (id)createMenuItemEditorViewForMenuItem:(id)arg1;
- (Class)menuItemEditorViewClass;
- (int)layoutDirection;
- (id)distanceToDragToAddItem;
- (double)maxEdgeInset;
- (double)minEdgeInset;
- (double)itemPadding;
- (id)initWithMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
