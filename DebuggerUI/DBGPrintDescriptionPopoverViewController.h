//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "NSPopoverDelegate.h"

@class NSLayoutConstraint, NSPopover, NSProgressIndicator, NSScrollView, NSString, NSTextView;

@interface DBGPrintDescriptionPopoverViewController : IDEViewController <NSPopoverDelegate>
{
    NSString *_description;
    BOOL _popoverIsAnimatingIn;
    BOOL _updateDescriptionWasDeferred;
    NSPopover *_popover;
    NSTextView *_textView;
    NSScrollView *_textScrollView;
    NSProgressIndicator *_loadingIndicator;
    NSLayoutConstraint *_scrollViewWidthConstraint;
    NSLayoutConstraint *_scrollViewHeightConstraint;
}

@property(retain) NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property(retain) NSLayoutConstraint *scrollViewWidthConstraint; // @synthesize scrollViewWidthConstraint=_scrollViewWidthConstraint;
@property(retain) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain) NSScrollView *textScrollView; // @synthesize textScrollView=_textScrollView;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_updateDescription;
- (void)loadView;
- (id)initWithDataValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

