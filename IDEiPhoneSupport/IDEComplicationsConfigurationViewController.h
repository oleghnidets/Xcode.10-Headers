//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDETargetEditorSectionViewController.h"

@class DVTDelayedInvocation, DVTGradientImageButton, DVTObservingToken, IDEiOSTargetEditor, NSPopUpButton, NSSet, Xcode3InfoEditorClassNamesConformingToProtocolProvider, Xcode3TargetEditor;

@interface IDEComplicationsConfigurationViewController : IDETargetEditorSectionViewController
{
    NSPopUpButton *_complicationsAssetCatalogPopUpButton;
    DVTGradientImageButton *_assetCatalogGoToButton;
    IDEiOSTargetEditor *_targetEditor;
    Xcode3TargetEditor *_innerTargetEditor;
    DVTObservingToken *_innerTargetEditorObserver;
    DVTObservingToken *_infoPlistCoordinatorObserver;
    id <DVTInvalidation> _infoPlistCoordinatorDidChangeObserver;
    Xcode3InfoEditorClassNamesConformingToProtocolProvider *_conformingProtocolProvider;
    NSSet *_complications;
    DVTDelayedInvocation *_delayedUpdateInvocation;
}

+ (id)keyPathsForValuesAffectingComplicationsController;
+ (id)keyPathsForValuesAffectingComplicationsFamilyGraphicRectangular;
+ (id)keyPathsForValuesAffectingComplicationsFamilyGraphicCircular;
+ (id)keyPathsForValuesAffectingComplicationsFamilyGraphicBezel;
+ (id)keyPathsForValuesAffectingComplicationsFamilyGraphicCorner;
+ (id)keyPathsForValuesAffectingComplicationsFamilyExtraLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyCircularSmall;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianSmallFlat;
+ (id)keyPathsForValuesAffectingComplicationsFamilyUtilitarianSmall;
+ (id)keyPathsForValuesAffectingComplicationsFamilyModularLarge;
+ (id)keyPathsForValuesAffectingComplicationsFamilyModularSmall;
@property(retain, nonatomic) DVTDelayedInvocation *delayedUpdateInvocation; // @synthesize delayedUpdateInvocation=_delayedUpdateInvocation;
@property(retain, nonatomic) NSSet *complications; // @synthesize complications=_complications;
@property(retain) Xcode3InfoEditorClassNamesConformingToProtocolProvider *conformingProtocolProvider; // @synthesize conformingProtocolProvider=_conformingProtocolProvider;
@property(retain) id <DVTInvalidation> infoPlistCoordinatorDidChangeObserver; // @synthesize infoPlistCoordinatorDidChangeObserver=_infoPlistCoordinatorDidChangeObserver;
@property(retain) DVTObservingToken *infoPlistCoordinatorObserver; // @synthesize infoPlistCoordinatorObserver=_infoPlistCoordinatorObserver;
@property(retain) DVTObservingToken *innerTargetEditorObserver; // @synthesize innerTargetEditorObserver=_innerTargetEditorObserver;
@property(retain) Xcode3TargetEditor *innerTargetEditor; // @synthesize innerTargetEditor=_innerTargetEditor;
@property(retain, nonatomic) IDEiOSTargetEditor *targetEditor; // @synthesize targetEditor=_targetEditor;
@property __weak DVTGradientImageButton *assetCatalogGoToButton; // @synthesize assetCatalogGoToButton=_assetCatalogGoToButton;
@property __weak NSPopUpButton *complicationsAssetCatalogPopUpButton; // @synthesize complicationsAssetCatalogPopUpButton=_complicationsAssetCatalogPopUpButton;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)titleForDisplay;
- (void)selectAssetCatalogSet:(id)arg1;
- (void)refreshAssetCatalogPopUpButton;
- (void)goToAssetCatalogSet:(id)arg1;
- (id)classesConformingToProtocol;
- (id)complicationsController;
- (void)setComplicationsController:(id)arg1;
@property(nonatomic) BOOL complicationsFamilyGraphicRectangular; // @dynamic complicationsFamilyGraphicRectangular;
- (void)_setComplicationsFamilyGraphicRectangular:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyGraphicCircular; // @dynamic complicationsFamilyGraphicCircular;
- (void)_setComplicationsFamilyGraphicCircular:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyGraphicBezel; // @dynamic complicationsFamilyGraphicBezel;
- (void)_setComplicationsFamilyGraphicBezel:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyGraphicCorner; // @dynamic complicationsFamilyGraphicCorner;
- (void)_setComplicationsFamilyGraphicCorner:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyExtraLarge; // @dynamic complicationsFamilyExtraLarge;
- (void)_setComplicationsFamilyExtraLarge:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyCircularSmall; // @dynamic complicationsFamilyCircularSmall;
- (void)_setComplicationsFamilyCircularSmall:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyUtilitarianLarge; // @dynamic complicationsFamilyUtilitarianLarge;
- (void)_setComplicationsFamilyUtilitarianLarge:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyUtilitarianSmallFlat; // @dynamic complicationsFamilyUtilitarianSmallFlat;
- (void)_setComplicationsFamilyUtilitarianSmallFlat:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyUtilitarianSmall; // @dynamic complicationsFamilyUtilitarianSmall;
- (void)_setComplicationsFamilyUtilitarianSmall:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyModularLarge; // @dynamic complicationsFamilyModularLarge;
- (void)_setComplicationsFamilyModularLarge:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL complicationsFamilyModularSmall; // @dynamic complicationsFamilyModularSmall;
- (void)_setComplicationsFamilyModularSmall:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)removeEnabledComplication:(id)arg1;
- (void)addEnabledComplication:(id)arg1;
- (BOOL)isEnabledComplication:(id)arg1;
- (void)readInfoPlist;
- (void)viewDidLoad;
- (id)initWithTargetEditor:(id)arg1;

@end

