//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol GTFActionCreateDelegate <NSObject>
- (void)actionCreatePopoverDidClose;
- (void)actionCreatePopoverCreateActionForSelectedTarget;
- (void)actionCreatePopoverCreateActionNamed:(NSString *)arg1 forFile:(NSURL *)arg2 createNewFile:(BOOL)arg3;
@end

