//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTGradientImagePopUpButton.h"

@class CALayer, NSMenuItem, NSObject<OS_dispatch_queue>, NSTimer, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface GPUCaptureLongClickPopUpButton : DVTGradientImagePopUpButton
{
    NSObject<OS_dispatch_queue> *_longClickQueue;
    NSTimer *_longClickTimer;
    BOOL _isMouseDown;
    BOOL _isLongClick;
    double _longClickDelayTime;
    NSMenuItem *_defaultTopItem;
    CALayer *_animationLayer;
    CALayer *_disclosureLayer;
    NSTrackingArea *_mouseEnteredAndExitedTrackingArea;
    BOOL _enableMenuWithOnlyMultipleItems;
    BOOL _menuEnabled;
    SEL _clickAction;
    id <GPUCaptureLongClickPopUpButtonDelegate> _delegate;
    unsigned long long _captureButtonState;
}

@property(getter=isMenuEnabled) BOOL menuEnabled; // @synthesize menuEnabled=_menuEnabled;
@property(nonatomic) unsigned long long captureButtonState; // @synthesize captureButtonState=_captureButtonState;
@property BOOL enableMenuWithOnlyMultipleItems; // @synthesize enableMenuWithOnlyMultipleItems=_enableMenuWithOnlyMultipleItems;
@property(retain) id <GPUCaptureLongClickPopUpButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property SEL clickAction; // @synthesize clickAction=_clickAction;
- (void).cxx_destruct;
- (void)layout;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownAndHold:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)_isLongClickMenuAvailable;
- (unsigned long long)activeItemsCount;
- (void)_updateContent;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetMenu;
- (double)_HILongClickDelayTime;

@end

