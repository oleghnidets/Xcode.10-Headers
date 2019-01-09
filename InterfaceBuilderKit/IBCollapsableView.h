//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBAutoLayoutView.h>

#import "IBConstrainedContainer.h"

@class NSString, NSView;

@interface IBCollapsableView : IBAutoLayoutView <IBConstrainedContainer>
{
    NSView *contentView;
    NSView *titleView;
    NSString *defaultsName;
    BOOL expanded;
    BOOL tracksContentViewSize;
}

- (void)makeRectVisible:(struct CGRect)arg1 ofView:(id)arg2;
- (void)setTracksContentViewSize:(BOOL)arg1;
- (BOOL)tracksContentViewSize;
- (void)contentViewFrameChanged:(id)arg1;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGSize)contentSize;
- (void)setContentSize:(struct CGSize)arg1;
- (BOOL)isExpanded;
- (void)setExpanded:(BOOL)arg1;
- (id)defaultsName;
- (void)setDefaultsName:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (id)initWithContentView:(id)arg1 andTitleView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

