//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEAssistant.h"

@class NSArray, NSSet;

@interface IDEIntentBuilderIntentDataModelAssistant : IDEAssistant
{
    NSArray *_availableFileItems;
    NSSet *_selectedFileItems;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain) NSSet *selectedFileItems; // @synthesize selectedFileItems=_selectedFileItems;
@property(retain) NSArray *availableFileItems; // @synthesize availableFileItems=_availableFileItems;
- (void).cxx_destruct;
- (void)_setupAvailableFileItems;
- (void)_setContextForTemplateInstantiation;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)viewDidInstall;
- (void)filesChanged:(id)arg1;
- (id)nibBundle;
- (id)nibName;

@end
