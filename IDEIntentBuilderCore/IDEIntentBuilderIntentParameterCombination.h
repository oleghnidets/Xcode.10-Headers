//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEIntentBuilderDictionaryConvertible.h"
#import "NSCopying.h"

@class DVTStackBacktrace, IDEIntentBuilderIntent, NSArray, NSString, NSUUID;

@interface IDEIntentBuilderIntentParameterCombination : NSObject <NSCopying, DVTInvalidation, IDEIntentBuilderDictionaryConvertible>
{
    BOOL _supportsBackgroundExecution;
    BOOL _isRemoved;
    NSUUID *_identifier;
    NSArray *_parameters;
    NSString *_title;
    NSString *_titleID;
    NSString *_subtitle;
    NSString *_subtitleID;
    IDEIntentBuilderIntent *_intent;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingParametersString;
+ (id)stateParameterCombinationWithParameter:(id)arg1;
@property(nonatomic, setter=_setRemoved:) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic, setter=_setIntent:) __weak IDEIntentBuilderIntent *intent; // @synthesize intent=_intent;
@property(copy, nonatomic, setter=_setSubtitleID:) NSString *subtitleID; // @synthesize subtitleID=_subtitleID;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic, setter=_setTitleID:) NSString *titleID; // @synthesize titleID=_titleID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL supportsBackgroundExecution; // @synthesize supportsBackgroundExecution=_supportsBackgroundExecution;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_registerUndoBlockForFoundIntentParameterCombination:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isDuplicate) BOOL duplicate;
@property(readonly, nonatomic) NSString *parametersString;
@property(nonatomic, getter=isPrimary) BOOL primary;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

