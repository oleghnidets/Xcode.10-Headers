//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTFActionEditorClientDocument.h"

@class GTFActionLibrary, GTFActionTimelineModel, NSString;

@protocol GTFActionDocument <GTFActionEditorClientDocument>
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (NSString *)addActionTimeline:(GTFActionTimelineModel *)arg1 withName:(NSString *)arg2;
@end

