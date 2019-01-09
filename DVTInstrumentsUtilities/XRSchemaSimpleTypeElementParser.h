//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

#import "XRSchemaAnnotationTextValuesDelegate.h"
#import "XRSchemaRegexPatternDetectionDelegate.h"

@class NSString;

@interface XRSchemaSimpleTypeElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate, XRSchemaRegexPatternDetectionDelegate>
{
    XRXMLElementParser *_patternParser;
    NSString *_parsedRegex;
    NSString *_errorMessage;
    NSString *_identifier;
    id <XRSchemaAnnotationPropertyReportingDelegate> _delegate;
}

+ (id)_elementNameToClassMap;
@property(nonatomic) __weak id <XRSchemaAnnotationPropertyReportingDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;
- (void)finishedParsingPatternWithParser:(id)arg1 patternValue:(id)arg2;
- (void)checkForAnnotationAndPatternAvailable;

@end
