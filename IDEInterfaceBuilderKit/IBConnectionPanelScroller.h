//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class IBImageButton, NSColor;

@interface IBConnectionPanelScroller : DVTLayoutView_ML
{
    IBImageButton *_maxScrollButton;
    IBImageButton *_minScrollButton;
    BOOL _enabled;
    BOOL _showsArrows;
    BOOL _trackingKnob;
    double _knobPortion;
    double _knobPosition;
    id _target;
    SEL _action;
    double _lineScroll;
    double _pageScroll;
    NSColor *_buttonFillColor;
    NSColor *_buttonPressedFillColor;
    NSColor *_buttonIconColor;
    NSColor *_buttonPressedIconColor;
    NSColor *_buttonDisabledIconColor;
    NSColor *_buttonDisabledFillColor;
    NSColor *_trackColor;
    NSColor *_knobColor;
    NSColor *_trackedKnobColor;
    NSColor *_backgroundColor;
    NSColor *_trackBorderColor;
}

@property(nonatomic, getter=isTrackingKnob) BOOL trackingKnob; // @synthesize trackingKnob=_trackingKnob;
@property(copy, nonatomic) NSColor *trackBorderColor; // @synthesize trackBorderColor=_trackBorderColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSColor *trackedKnobColor; // @synthesize trackedKnobColor=_trackedKnobColor;
@property(copy, nonatomic) NSColor *knobColor; // @synthesize knobColor=_knobColor;
@property(copy, nonatomic) NSColor *trackColor; // @synthesize trackColor=_trackColor;
@property(copy, nonatomic) NSColor *buttonDisabledFillColor; // @synthesize buttonDisabledFillColor=_buttonDisabledFillColor;
@property(copy, nonatomic) NSColor *buttonDisabledIconColor; // @synthesize buttonDisabledIconColor=_buttonDisabledIconColor;
@property(copy, nonatomic) NSColor *buttonPressedIconColor; // @synthesize buttonPressedIconColor=_buttonPressedIconColor;
@property(copy, nonatomic) NSColor *buttonIconColor; // @synthesize buttonIconColor=_buttonIconColor;
@property(copy, nonatomic) NSColor *buttonPressedFillColor; // @synthesize buttonPressedFillColor=_buttonPressedFillColor;
@property(copy, nonatomic) NSColor *buttonFillColor; // @synthesize buttonFillColor=_buttonFillColor;
@property(nonatomic) BOOL showsArrows; // @synthesize showsArrows=_showsArrows;
@property double pageScroll; // @synthesize pageScroll=_pageScroll;
@property double lineScroll; // @synthesize lineScroll=_lineScroll;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(nonatomic) double knobPosition; // @synthesize knobPosition=_knobPosition;
@property(nonatomic) double knobPortion; // @synthesize knobPortion=_knobPortion;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)effectiveTrackedKnobColor;
- (id)effectiveKnobColor;
- (id)effectiveTrackColor;
- (void)scrollWheel:(id)arg1;
- (void)scrollWithScrollWheelEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackKnobWithEvent:(id)arg1;
- (void)scrollMin:(id)arg1;
- (void)scrollMax:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)fire;
- (void)layoutBottomUp;
- (struct CGRect)knobRect;
- (struct CGRect)trackRect;
- (struct CGRect)maxScrollButtonRect;
- (struct CGRect)minScrollButtonRect;
- (BOOL)showsKnob;
- (BOOL)showsButtons;
- (double)length;
- (double)scrollerSize;
- (BOOL)isVertical;
- (double)borderWidth;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setKnobPosition:(double)arg1 knobProportion:(double)arg2;
- (void)refreshButtons;
- (struct CGRect)arrowBounds;
- (void)refreshButtonStates;
- (id)initWithFrame:(struct CGRect)arg1;

@end

