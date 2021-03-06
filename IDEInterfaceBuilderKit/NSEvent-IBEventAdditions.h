//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEvent.h"

@interface NSEvent (IBEventAdditions)
- (struct CGPoint)subPixelLocationOnScreen;
- (struct CGPoint)locationOnScreen;
- (struct CGPoint)subPixelLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (BOOL)isIntentionalRightDragWithRespectTo:(id)arg1;
- (BOOL)isIntentionalLeftDragWithRespectTo:(id)arg1;
- (BOOL)isSpaceKeyDown;
- (BOOL)isNewlineTypeKeyDown;
- (BOOL)isCommandKeyOnlyModiferDown;
- (BOOL)isEscapeKeyDown;
- (BOOL)isSingleRightMouseDown;
- (BOOL)isSingleRightMouseUp;
- (BOOL)isSingleLeftMouseUp;
- (BOOL)isSingleLeftMouseDown;
- (BOOL)isDoubleLeftMouseDown;
- (BOOL)isDoubleLeftMouseUp;
- (BOOL)isArrowKeyDown;
- (BOOL)isBackTabKeyDown;
- (BOOL)isOptionFlagged;
- (BOOL)isTabKeyDown;
- (id)facingRectEdgeForArrowKey;
- (BOOL)isLeftArrowKeyUp;
- (BOOL)isRightArrowKeyUp;
- (BOOL)isDownArrowKeyUp;
- (BOOL)isUpArrowKeyUp;
- (BOOL)isLeftArrowKeyDown;
- (BOOL)isRightArrowKeyDown;
- (BOOL)isDownArrowKeyDown;
- (BOOL)isUpArrowKeyDown;
- (BOOL)isDeleteOrDeleteFunctionKeyDown;
- (BOOL)isRightMouseDragged;
- (BOOL)isLeftMouseDragged;
- (BOOL)isKeyDown;
- (BOOL)isKeyUp;
- (BOOL)isKeyEvent;
- (BOOL)isMouseEvent;
- (BOOL)isApplicationDeactivateEvent;
- (id)screen;
@end

