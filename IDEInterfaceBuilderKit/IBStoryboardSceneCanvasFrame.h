//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBBorderlessEditorCanvasFrame.h>

@class IBSceneDockCenteringView, IBSceneDockViewController, IBStoryboardCanvasFrameTitleView;

@interface IBStoryboardSceneCanvasFrame : IBBorderlessEditorCanvasFrame
{
    IBSceneDockCenteringView *_dockCenteringView;
    IBSceneDockViewController *_dockViewController;
    BOOL _showingDock;
    IBStoryboardCanvasFrameTitleView *_titleView;
}

+ (BOOL)wantsHeaderView;
@property(readonly, nonatomic) IBStoryboardCanvasFrameTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic, getter=isShowingDock) BOOL showingDock; // @synthesize showingDock=_showingDock;
- (void).cxx_destruct;
- (struct CGPoint)pointForCanvasLink:(id)arg1 withIndex:(long long)arg2 inSeriesOfSeguesWithCount:(long long)arg3 atEdge:(unsigned long long)arg4;
- (CDStruct_f6143a38)spanForAttachingSeguesToEdge:(unsigned long long)arg1 inSeriesOfSeguesWithCount:(long long)arg2;
- (CDStruct_c519178c)contentInsetForAttachingSeguesToEdge:(unsigned long long)arg1 inSeriesOfSeguesWithCount:(long long)arg2;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (double)effectiveHeaderViewOffset;
- (void)setTitle:(id)arg1;
- (id)storyboardCanvasViewController;
- (void)willRemoveFromCanvas;
- (id)initWithFrame:(struct CGRect)arg1;

@end

