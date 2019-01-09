//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOCAGEnvironmentManager, LOCITSRulesFile, NSArray, NSMutableDictionary, NSString;

@interface LOCAGProjectManager : NSObject
{
    LOCAGEnvironmentManager *_environmentManager;
    NSString *_sourceLocale;
    NSString *_targetLocale;
    NSArray *_customBundles;
    NSArray *_customIBPlugins;
    NSArray *_nibFilterPatterns;
    NSArray *_locSetList;
    NSArray *_componentNames;
    NSString *_currentComponentName;
    NSString *_projectName;
    NSMutableDictionary *_itsRulesObjects;
    LOCITSRulesFile *_builtInITSrules;
    LOCITSRulesFile *_searchTermsITSrules;
    LOCITSRulesFile *_packageDescriptionITSrules;
    NSMutableDictionary *_dntTermList;
}

@property(retain) NSMutableDictionary *dntTermList; // @synthesize dntTermList=_dntTermList;
@property(retain) LOCITSRulesFile *packageDescriptionITSrules; // @synthesize packageDescriptionITSrules=_packageDescriptionITSrules;
@property(retain) LOCITSRulesFile *searchTermsITSrules; // @synthesize searchTermsITSrules=_searchTermsITSrules;
@property(retain) LOCITSRulesFile *builtInITSrules; // @synthesize builtInITSrules=_builtInITSrules;
@property(retain) NSMutableDictionary *itsRulesObjects; // @synthesize itsRulesObjects=_itsRulesObjects;
@property(retain) NSString *projectName; // @synthesize projectName=_projectName;
@property(retain) NSString *currentComponentName; // @synthesize currentComponentName=_currentComponentName;
@property(retain) NSArray *componentNames; // @synthesize componentNames=_componentNames;
@property(retain) NSArray *locSetList; // @synthesize locSetList=_locSetList;
@property(retain) NSArray *nibFilterPatterns; // @synthesize nibFilterPatterns=_nibFilterPatterns;
@property(retain) NSArray *customIBPlugins; // @synthesize customIBPlugins=_customIBPlugins;
@property(retain) NSArray *customBundles; // @synthesize customBundles=_customBundles;
@property(retain) NSString *targetLocale; // @synthesize targetLocale=_targetLocale;
@property(retain) NSString *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(retain) LOCAGEnvironmentManager *environmentManager; // @synthesize environmentManager=_environmentManager;
- (void).cxx_destruct;
- (id)dntTermListForCurrentComponent;
- (id)dntFilePathForComponentName:(id)arg1;
- (id)itsRulesObjectForCurrentComponent;
- (id)previousXLIFFfilePathForComponentName:(id)arg1;
- (id)xliffFilePathForComponentName:(id)arg1;
- (id)itsFilePathForComponentName:(id)arg1;
- (void)load;
- (void)save;
- (id)projectFilePath;
- (id)initWithEnvironmentManager:(id)arg1;

@end
