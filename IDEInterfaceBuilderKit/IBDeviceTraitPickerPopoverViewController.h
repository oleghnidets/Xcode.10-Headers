//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class IBMemberConfiguration, IBMutableIdentityDictionary, NSStackView, NSView;

@interface IBDeviceTraitPickerPopoverViewController : NSViewController
{
    IBMutableIdentityDictionary *_checkBoxToMemberConfigurationVariables;
    id <IBDeviceTraitPickerPopoverViewControllerDelegate> _delegate;
    NSView *_initialFirstResponder;
    NSStackView *_stackView;
    IBMemberConfiguration *_baseMemberConfiguration;
}

@property(retain, nonatomic) IBMemberConfiguration *baseMemberConfiguration; // @synthesize baseMemberConfiguration=_baseMemberConfiguration;
@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly) NSView *initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
@property(nonatomic) __weak id <IBDeviceTraitPickerPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHelp:(id)arg1;
- (void)toggleMemberConfigurationVariable:(id)arg1;
- (void)updateStackView;
- (void)loadView;
- (id)initWithBaseMemberConfiguration:(id)arg1;

@end

