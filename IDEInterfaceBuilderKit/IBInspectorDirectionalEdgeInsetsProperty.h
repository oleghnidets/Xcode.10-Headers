//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSStepper, NSTextField;

@interface IBInspectorDirectionalEdgeInsetsProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_topTextField;
    NSTextField *_leadingTextField;
    NSStepper *_topStepper;
    NSStepper *_leadingStepper;
    NSTextField *_topLabel;
    NSTextField *_leadingLabel;
    NSTextField *_bottomTextField;
    NSTextField *_trailingTextField;
    NSStepper *_bottomStepper;
    NSStepper *_trailingStepper;
    NSTextField *_bottomLabel;
    NSTextField *_trailingLabel;
}

@property(retain, nonatomic) NSTextField *trailingLabel; // @synthesize trailingLabel=_trailingLabel;
@property(retain, nonatomic) NSTextField *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) NSStepper *trailingStepper; // @synthesize trailingStepper=_trailingStepper;
@property(retain, nonatomic) NSStepper *bottomStepper; // @synthesize bottomStepper=_bottomStepper;
@property(retain, nonatomic) NSTextField *trailingTextField; // @synthesize trailingTextField=_trailingTextField;
@property(retain, nonatomic) NSTextField *bottomTextField; // @synthesize bottomTextField=_bottomTextField;
@property(retain, nonatomic) NSTextField *leadingLabel; // @synthesize leadingLabel=_leadingLabel;
@property(retain, nonatomic) NSTextField *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) NSStepper *leadingStepper; // @synthesize leadingStepper=_leadingStepper;
@property(retain, nonatomic) NSStepper *topStepper; // @synthesize topStepper=_topStepper;
@property(retain, nonatomic) NSTextField *leadingTextField; // @synthesize leadingTextField=_leadingTextField;
@property(retain, nonatomic) NSTextField *topTextField; // @synthesize topTextField=_topTextField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)userDidEnterTrailing:(id)arg1;
- (void)userDidEnterBottom:(id)arg1;
- (void)userDidEnterLeading:(id)arg1;
- (void)userDidEnterTop:(id)arg1;
- (void)userDidIncrementTrailing:(id)arg1;
- (void)userDidIncrementBottom:(id)arg1;
- (void)userDidIncrementLeading:(id)arg1;
- (void)userDidIncrementTop:(id)arg1;
- (void)applyUserEdgeInsetsFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;

@end
