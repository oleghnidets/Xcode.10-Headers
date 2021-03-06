//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEAssistant.h"

@class NSArray, NSSet;

@interface IDEIntentBuilderIntentAssistant : IDEAssistant
{
    NSArray *_availableIntentItems;
    NSSet *_selectedIntentItems;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain) NSSet *selectedIntentItems; // @synthesize selectedIntentItems=_selectedIntentItems;
@property(retain) NSArray *availableIntentItems; // @synthesize availableIntentItems=_availableIntentItems;
- (void).cxx_destruct;
- (void)_setContextForTemplateInstantiation;
- (void)_setupAvailableIntentItems;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)intentItemsChanged:(id)arg1;
- (void)viewDidInstall;
- (id)nibBundle;
- (id)nibName;

@end

