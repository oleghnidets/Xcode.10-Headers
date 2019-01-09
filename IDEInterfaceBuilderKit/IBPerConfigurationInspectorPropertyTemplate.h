//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IBImageButtonDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"

@class DVTStackBacktrace, IBAddPerConfigurationOverrideController, IBIdiom, IBInspectorViewController, NSArray, NSPopover, NSSet, NSString, NSXMLElement;

@interface IBPerConfigurationInspectorPropertyTemplate : NSObject <NSMenuDelegate, NSPopoverDelegate, IBImageButtonDelegate, DVTInvalidation>
{
    IBInspectorViewController *_inspector;
    NSSet *_currentConfigurations;
    NSString *_inspectedProperty;
    NSString *_accessibilityTitle;
    BOOL _showConfigurationOptions;
    NSArray *_currentSlivers;
    NSXMLElement *_originalProperty;
    NSXMLElement *_originalSliver;
    NSPopover *_popover;
    IBAddPerConfigurationOverrideController *_popoverContentController;
    NSString *_identifier;
    IBIdiom *_idiom;
}

+ (id)templateWithElement:(id)arg1 inspector:(id)arg2;
+ (void)initialize;
@property(retain) IBIdiom *idiom; // @synthesize idiom=_idiom;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)addVariationForConfigurationFromPopOver:(id)arg1;
- (void)addVariationForConfigurationFromMenuItem:(id)arg1;
- (void)turnOnConfiguration:(id)arg1;
- (BOOL)doesObjectHaveInspectedValue:(id)arg1 inConfiguration:(id)arg2;
- (void)removeValueForConfiguration:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)showAddPopover:(id)arg1;
- (void)disassociateWithPopover;
- (id)attributedSliverTitleForConfiguration:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)accessoryViewForConfiguration:(id)arg1;
- (id)accessibilityTitleForConfiguration:(id)arg1;
- (void)imageButton:(id)arg1 willShowMenu:(id)arg2;
- (void)imageButton:(id)arg1 willHandleMouseDown:(id)arg2;
- (id)headerMenuItemForConfigurationMenu;
- (BOOL)replaceCurrentElementsIfNeededForObjects:(id)arg1;
- (id)configurationsCoveredByObjects:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithElement:(id)arg1 inspector:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

