//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTextAnnotationDelegate.h"

@class DVTMessageBubbleAnnotation, NSEvent, NSView;

@protocol DVTMessageBubbleAnnotationDelegate <DVTTextAnnotationDelegate>

@optional
- (void)didClickMessageBubbleForAnnotation:(DVTMessageBubbleAnnotation *)arg1 onIcon:(BOOL)arg2 inView:(NSView *)arg3 event:(NSEvent *)arg4;
@end
