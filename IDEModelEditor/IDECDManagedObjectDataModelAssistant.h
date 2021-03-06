//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEAssistant.h"

@class NSArray, NSSet;

@interface IDECDManagedObjectDataModelAssistant : IDEAssistant
{
    NSArray *_availableFiles;
    NSSet *_selectedFileItems;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain) NSSet *selectedFileItems; // @synthesize selectedFileItems=_selectedFileItems;
@property(retain) NSArray *availableFiles; // @synthesize availableFiles=_availableFiles;
- (void).cxx_destruct;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)viewDidInstall;
- (void)setupAvailableFiles;
- (void)filesChanged:(id)arg1;
- (void)setContextForTemplateInstantiation;
- (id)nibBundle;
- (id)nibName;

@end

