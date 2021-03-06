//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class IBIdiom, IBMemberConfiguration, IBMutableIdentityDictionary, NSButton;

@interface IBAddPerConfigurationOverrideController : NSViewController
{
    IBIdiom *_idiom;
    IBMutableIdentityDictionary *_popUpsToMemberVariables;
    NSButton *_okButton;
    IBMemberConfiguration *_selectedConfiguration;
}

@property(retain, nonatomic) IBMemberConfiguration *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
@property(readonly) NSButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (void)refreshPopUpButtons;
- (void)userDidSelectVariableValue:(id)arg1;
- (void)loadView;
- (void)addConstraintsForContentView:(id)arg1 titleLabel:(id)arg2 labels:(id)arg3 popUpButtons:(id)arg4;
- (void)alignLeftEdgeOfView:(id)arg1 toLeftEdgeOfView:(id)arg2 andRightEdgeOfView:(id)arg3 inContainer:(id)arg4;
- (id)initWithIdiom:(id)arg1;

@end

