//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorColorProperty.h"

@interface IBNamedColorInspectorProperty : IDEInspectorColorProperty
{
    BOOL _hideRevealInEditorButton;
}

@property BOOL hideRevealInEditorButton; // @synthesize hideRevealInEditorButton=_hideRevealInEditorButton;
- (id)colorPicker:(id)arg1 effectiveRecentColors:(id)arg2;
- (void)revealLocationInEditor:(id)arg1;
- (id)documentLocationForValue;
- (id)ibResourceManager;
- (void)refresh;
- (id)inspectedDocument;
- (id)inspectorController;

@end

