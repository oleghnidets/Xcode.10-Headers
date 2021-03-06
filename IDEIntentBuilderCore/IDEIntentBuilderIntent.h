//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntentGroupItem.h>

#import "IDEIntentBuilderDictionaryConvertible.h"

@class IDEIntentBuilderIntentCategory, IDEIntentBuilderIntentParameterCombination, IDEIntentBuilderIntentResponse, NSArray, NSString;

@interface IDEIntentBuilderIntent : IDEIntentBuilderIntentGroupItem <IDEIntentBuilderDictionaryConvertible>
{
    NSString *_originalCategoryName;
    NSString *_originalCategoryVerb;
    BOOL _userConfirmationRequired;
    NSString *_defaultImageName;
    NSString *_intentTitle;
    NSString *_intentTitleID;
    NSString *_intentDescription;
    NSString *_intentDescriptionID;
    NSString *_classPrefix;
    IDEIntentBuilderIntentCategory *_category;
    long long _type;
    IDEIntentBuilderIntentResponse *_response;
    IDEIntentBuilderIntentParameterCombination *_primaryParameterCombination;
    long long _restrictions;
    NSArray *_parameterCombinations;
}

+ (id)keyPathsForValuesAffectingParameterCombinations;
@property(copy, nonatomic) NSArray *parameterCombinations; // @synthesize parameterCombinations=_parameterCombinations;
@property(nonatomic) long long restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) IDEIntentBuilderIntentParameterCombination *primaryParameterCombination; // @synthesize primaryParameterCombination=_primaryParameterCombination;
@property(readonly, nonatomic) IDEIntentBuilderIntentResponse *response; // @synthesize response=_response;
@property(nonatomic, getter=isUserConfirmationRequired) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) IDEIntentBuilderIntentCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *classPrefix; // @synthesize classPrefix=_classPrefix;
@property(copy, nonatomic, setter=_setIntentDescriptionID:) NSString *intentDescriptionID; // @synthesize intentDescriptionID=_intentDescriptionID;
@property(copy, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property(copy, nonatomic, setter=_setIntentTitleID:) NSString *intentTitleID; // @synthesize intentTitleID=_intentTitleID;
@property(copy, nonatomic) NSString *intentTitle; // @synthesize intentTitle=_intentTitle;
@property(copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
- (void).cxx_destruct;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)primitiveInvalidate;
- (id)init;
- (id)intent;
@property(readonly, nonatomic) IDEIntentBuilderIntentParameterCombination *initialEmptyParameterCombination;
- (id)parameterCombinationWithIdentifier:(id)arg1;
- (void)removeParameterCombination:(id)arg1;
- (void)addParameterCombination:(id)arg1;
- (void)removeParameter:(id)arg1;
- (void)addState;
- (id)codegen_importStatementsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_enumsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_className;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

