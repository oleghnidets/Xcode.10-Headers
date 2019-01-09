//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEIntentBuilderDictionaryConvertible.h"
#import "IDEIntentBuilderIssueGenerator.h"
#import "NSCopying.h"

@class DVTStackBacktrace, IDEIntentBuilderIntentGroupItem, NSNumber, NSString, NSUUID;

@interface IDEIntentBuilderIntentParameter : NSObject <NSCopying, DVTInvalidation, IDEIntentBuilderDictionaryConvertible, IDEIntentBuilderIssueGenerator>
{
    BOOL _supportsMultipleValues;
    BOOL _isRemoved;
    id <IDEIntentBuilderIntentParameterType> _type;
    NSUUID *_identifier;
    NSString *_name;
    NSNumber *_displayPriorityRank;
    IDEIntentBuilderIntentParameter *_associatedImageParameter;
    IDEIntentBuilderIntentParameter *_associatedPrimaryParameter;
    long long _tag;
    IDEIntentBuilderIntentGroupItem *_intentGroupItem;
}

+ (void)initialize;
+ (id)stateParameterWithType:(id)arg1;
@property(nonatomic, setter=_setRemoved:) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic, setter=_setIntentGroupItem:) __weak IDEIntentBuilderIntentGroupItem *intentGroupItem; // @synthesize intentGroupItem=_intentGroupItem;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak IDEIntentBuilderIntentParameter *associatedPrimaryParameter; // @synthesize associatedPrimaryParameter=_associatedPrimaryParameter;
@property(retain, nonatomic) IDEIntentBuilderIntentParameter *associatedImageParameter; // @synthesize associatedImageParameter=_associatedImageParameter;
@property(copy, nonatomic) NSNumber *displayPriorityRank; // @synthesize displayPriorityRank=_displayPriorityRank;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL supportsMultipleValues; // @synthesize supportsMultipleValues=_supportsMultipleValues;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_setType:(id)arg1;
- (void)_bumpTag;
- (void)_registerUndoBlockForFoundIntentParamter:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) id <IDEIntentBuilderIntentParameterType> type; // @synthesize type=_type;
@property(nonatomic) BOOL hasAssociatedImage;
- (id)codegen_implementationForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2;
- (id)codegen_declarationForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2;
- (id)codegen_typeNameForSourceLanguage:(unsigned long long)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
