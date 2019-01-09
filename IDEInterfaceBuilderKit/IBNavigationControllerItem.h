//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEViewController, NSString;

@interface IBNavigationControllerItem : NSObject <DVTInvalidation>
{
    BOOL _wantsNavigationBar;
    BOOL _automaticallyInvalidatesWhenPopping;
    IDEViewController *_viewController;
    NSString *_explicitCurrentTitle;
    NSString *_explicitBackTitle;
}

+ (id)keyPathsForValuesAffectingEffectiveBackTitle;
+ (id)keyPathsForValuesAffectingEffectiveCurrentTitle;
+ (void)initialize;
@property(nonatomic) BOOL automaticallyInvalidatesWhenPopping; // @synthesize automaticallyInvalidatesWhenPopping=_automaticallyInvalidatesWhenPopping;
@property(copy, nonatomic) NSString *explicitBackTitle; // @synthesize explicitBackTitle=_explicitBackTitle;
@property(copy, nonatomic) NSString *explicitCurrentTitle; // @synthesize explicitCurrentTitle=_explicitCurrentTitle;
@property(nonatomic) BOOL wantsNavigationBar; // @synthesize wantsNavigationBar=_wantsNavigationBar;
@property(readonly, nonatomic) __weak IDEViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *effectiveBackTitle;
@property(readonly, nonatomic) NSString *effectiveCurrentTitle;
- (id)initWithViewController:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithViewController:(id)arg1 explicitCurrentTitle:(id)arg2 explicitBackTitle:(id)arg3 wantsNavigationBar:(BOOL)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

