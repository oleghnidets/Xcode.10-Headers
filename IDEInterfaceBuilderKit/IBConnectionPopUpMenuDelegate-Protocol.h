//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBConnectionPopUpMenuView, NSMenuItem, NSSet;

@protocol IBConnectionPopUpMenuDelegate <NSObject>
- (void)connectionMenu:(IBConnectionPopUpMenuView *)arg1 willDeselectItems:(NSSet *)arg2;
- (void)connectionMenu:(IBConnectionPopUpMenuView *)arg1 willSelectItems:(NSSet *)arg2;
- (void)connectionMenu:(IBConnectionPopUpMenuView *)arg1 willHighlightItem:(NSMenuItem *)arg2;
@end

