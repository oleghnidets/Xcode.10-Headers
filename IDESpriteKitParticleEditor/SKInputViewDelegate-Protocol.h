//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSEvent, SKInputView;

@protocol SKInputViewDelegate <NSObject>

@optional
- (void)inputView:(SKInputView *)arg1 didPerformDragOperation:(NSDictionary *)arg2 atLocation:(struct CGPoint)arg3;
- (void)inputView:(SKInputView *)arg1 draggingEntered:(NSArray *)arg2;
- (NSArray *)inputViewAcceptedDraggedTypes:(SKInputView *)arg1;
- (void)inputViewDidUpdate:(SKInputView *)arg1;
- (void)inputViewWillRenderContent:(SKInputView *)arg1;
- (void)inputView:(SKInputView *)arg1 multiTouchEnded:(NSEvent *)arg2 location:(struct CGPoint)arg3;
- (void)inputView:(SKInputView *)arg1 multiTouchMoved:(NSEvent *)arg2 location:(struct CGPoint)arg3;
- (void)inputView:(SKInputView *)arg1 multiTouchBegan:(NSEvent *)arg2 location:(struct CGPoint)arg3;
- (void)inputView:(SKInputView *)arg1 rotate:(NSEvent *)arg2;
- (void)inputView:(SKInputView *)arg1 magnify:(NSEvent *)arg2;
- (void)inputView:(SKInputView *)arg1 scrollWheel:(NSEvent *)arg2;
- (void)inputView:(SKInputView *)arg1 rightMouseUp:(NSEvent *)arg2;
- (void)inputView:(SKInputView *)arg1 rightMouseDown:(NSEvent *)arg2;
- (void)inputView:(SKInputView *)arg1 touchHoverMovedAtLocation:(struct CGPoint)arg2;
- (void)inputView:(SKInputView *)arg1 touchEnded:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)inputView:(SKInputView *)arg1 touchMoved:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)inputView:(SKInputView *)arg1 touchBegan:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;
@end

