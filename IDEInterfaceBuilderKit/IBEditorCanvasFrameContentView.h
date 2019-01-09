//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSceneUpdateContentView.h>

@class IBSceneSpaceView, NSView;

@interface IBEditorCanvasFrameContentView : IBSceneUpdateContentView
{
    BOOL _showSceneMask;
    int _horizontalContentResizingMode;
    int _verticalContentResizingMode;
    IBSceneSpaceView *_sceneSpaceView;
    NSView *_documentView;
    NSView *_wrapperView;
}

@property(nonatomic) int verticalContentResizingMode; // @synthesize verticalContentResizingMode=_verticalContentResizingMode;
@property(nonatomic) int horizontalContentResizingMode; // @synthesize horizontalContentResizingMode=_horizontalContentResizingMode;
@property(retain, nonatomic) NSView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) NSView *documentView; // @synthesize documentView=_documentView;
@property(retain, nonatomic) IBSceneSpaceView *sceneSpaceView; // @synthesize sceneSpaceView=_sceneSpaceView;
@property(nonatomic) BOOL showSceneMask; // @synthesize showSceneMask=_showSceneMask;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (BOOL)wantsToDrawMask;
- (void)layoutTopDown;
- (struct CGSize)frameSizeForDocumentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

