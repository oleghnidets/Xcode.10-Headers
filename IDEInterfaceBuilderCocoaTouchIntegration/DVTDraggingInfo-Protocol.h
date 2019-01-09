//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDraggingInfo.h"

@class DVTDraggedImageState, NSDictionary, NSValue;

@protocol DVTDraggingInfo <NSDraggingInfo>
@property(nonatomic) unsigned long long draggingModifierFlags;
@property(retain, nonatomic) NSValue *draggingSnapSuggestedOrigin;
@property(nonatomic) BOOL draggedImageStateNeedsUpdate;
- (void)invalidateObjectAtEndOfDragLoop:(id <DVTInvalidation>)arg1;
- (struct CGPoint)draggingLocationOnScreen;
- (NSDictionary *)draggingSourceContext;
- (DVTDraggedImageState *)draggedImageState;
@end

