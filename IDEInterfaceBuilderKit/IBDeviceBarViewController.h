//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "IBDeviceBarGroupViewControllerDelegate.h"
#import "IBDeviceTraitPickerPopoverViewControllerDelegate.h"
#import "NSPopoverDelegate.h"

@class DVTObservingToken, IBDeviceBarBranchModeButton, IBDeviceBarGroupViewController, IBDeviceConfiguration, IBDeviceOrientation, IBDocument, IBMemberConfiguration, NSArray, NSMutableDictionary, NSPopover, NSSet, NSStackView, NSString, _IBDeviceBarStackDividerView;

@interface IBDeviceBarViewController : DVTViewController <NSPopoverDelegate, IBDeviceBarGroupViewControllerDelegate, IBDeviceTraitPickerPopoverViewControllerDelegate>
{
    IBDocument *_document;
    NSStackView *_configurationsStackView;
    NSArray *_outerStackViewPinningConstraints;
    _IBDeviceBarStackDividerView *_devicesOrientationsStackDivider;
    _IBDeviceBarStackDividerView *_orientationsAdaptationsStackDivider;
    IBDeviceOrientation *_downstreamSelectedOrientation;
    NSString *_downstreamSelectedAdaptationIdentifier;
    IBMemberConfiguration *_derivedMemberConfiguration;
    IBDeviceConfiguration *_deviceConfigurationBeforeCustomizing;
    IBDeviceBarBranchModeButton *_customizeButton;
    NSPopover *_customizePopover;
    id _deviceImageGenerationContext;
    NSMutableDictionary *_deviceConfigurationsToDeviceImagesMap;
    NSMutableDictionary *_deviceConfigurationsToPopUpDeviceImagesMap;
    struct CGSize _devicesGroupConfiguredSize;
    DVTObservingToken *_usesConfigurationsObservingToken;
    BOOL _customizing;
    CDUnknownBlockType _deviceConfigurationChangedCallback;
    CDUnknownBlockType _customizationModeChangedStateCallback;
    IBDeviceConfiguration *_selectedDeviceConfiguration;
    NSSet *_deviceSubtypes;
    IBDeviceConfiguration *_deviceConfiguration;
    IBDeviceBarGroupViewController *_devicesGroup;
    IBDeviceBarGroupViewController *_orientationsGroup;
    IBDeviceBarGroupViewController *_adaptationsGroup;
    IBDeviceBarGroupViewController *_devicesGroupForBranchMode;
}

@property(retain, nonatomic) IBDeviceBarGroupViewController *devicesGroupForBranchMode; // @synthesize devicesGroupForBranchMode=_devicesGroupForBranchMode;
@property(retain, nonatomic) IBDeviceBarGroupViewController *adaptationsGroup; // @synthesize adaptationsGroup=_adaptationsGroup;
@property(retain, nonatomic) IBDeviceBarGroupViewController *orientationsGroup; // @synthesize orientationsGroup=_orientationsGroup;
@property(retain, nonatomic) IBDeviceBarGroupViewController *devicesGroup; // @synthesize devicesGroup=_devicesGroup;
@property(retain, nonatomic) IBDeviceConfiguration *deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
@property(readonly, nonatomic) NSSet *deviceSubtypes; // @synthesize deviceSubtypes=_deviceSubtypes;
@property(nonatomic, getter=isCustomizing) BOOL customizing; // @synthesize customizing=_customizing;
@property(retain, nonatomic) IBDeviceConfiguration *selectedDeviceConfiguration; // @synthesize selectedDeviceConfiguration=_selectedDeviceConfiguration;
@property(copy, nonatomic) CDUnknownBlockType customizationModeChangedStateCallback; // @synthesize customizationModeChangedStateCallback=_customizationModeChangedStateCallback;
@property(copy, nonatomic) CDUnknownBlockType deviceConfigurationChangedCallback; // @synthesize deviceConfigurationChangedCallback=_deviceConfigurationChangedCallback;
- (void).cxx_destruct;
- (id)groupViewController:(id)arg1 popUpImageForDeviceConfiguration:(id)arg2;
- (id)_customizationSessionSummaryWithDeviceConfigurations:(id)arg1 memberConfiguration:(id)arg2 selectedConfigurationDevice:(id)arg3;
- (void)_customizationStateChanged;
- (void)_fireCustomizationModeCallback:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_changeCustomizeButtonToDoneButton;
- (void)customize:(id)arg1;
- (void)deviceTraitPickerPopoverViewController:(id)arg1 didSelectTraits:(id)arg2;
- (void)userSelectedTraitsForBranching:(id)arg1;
- (id)_deviceConfigurationsMatchingMemberConfiguration:(id)arg1;
- (void)finishCustomizing:(id)arg1;
- (void)_resetAndReconfigure;
- (void)_addCustomizationsButton;
- (void)_updateCustomizeButtonTitle;
- (void)_updateDerivedMemberConfiguration;
- (id)_sortedSelectionButtonsForButtons:(id)arg1;
- (id)buttonForDevice:(id)arg1 adaptation:(id)arg2 accessibilityIdentifier:(id)arg3 displayName:(id)arg4 forBranchMode:(BOOL)arg5;
- (id)buttonForConfiguration:(id)arg1 accessibilityIdentifier:(id)arg2 displayName:(id)arg3 forBranchMode:(BOOL)arg4;
- (id)_addStackDividerToStackView:(id)arg1;
- (void)_makeConfigurationsStackView;
- (void)restoreConfiguration:(id)arg1 resetAll:(BOOL)arg2;
- (id)defaultDevice;
- (id)selectedConfigurationDevice;
- (id)selectedConfigurationOrientation;
- (id)sizeClassFieldsFont;
- (id)labelFont;
- (id)labelColor;
- (id)customizationModeBackgroundColor;
- (id)defaultBackgroundColor;
- (id)_adaptationGroupButtons;
- (id)_orientationGroupButtons;
- (id)_deviceGroupButtonsForBranchMode:(BOOL)arg1;
- (void)_selectButtonsMatchingSelectedConfiguration;
- (id)applyDownstreamSelectionsToConfiguration:(id)arg1;
- (void)_configureGroupViewControllers;
- (void)_addAdaptationsGroupIfSupported;
- (void)_removeAdaptationsGroup;
- (void)_addOrientationsGroupIfSupported;
- (void)_removeOrientationsGroup;
- (void)_makeDevicesStackForCustomizingMode:(BOOL)arg1;
- (BOOL)isShowingAdaptationsGroup;
- (BOOL)isShowingOrientationsGroup;
- (BOOL)isShowingDevicesGroup;
- (void)addGroupViewController:(id)arg1 toStack:(id)arg2 heightConstraintValue:(double)arg3;
- (void)_configureBar;
- (void)_relayoutStacksAsNeeded;
- (void)primitiveInvalidate;
- (void)viewWillAppear;
- (id)devicePickerView;
- (void)_resetForDocumentUsesConfigurationsChanged;
- (void)_createDeviceImageGenerationContext;
- (id)_deviceConfigurationsForDocument;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

