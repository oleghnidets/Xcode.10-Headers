//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@interface XRSchemaAnnotationElementParser : XRXMLElementParser
{
    id <XRSchemaAnnotationTextValuesDelegate> _delegate;
}

+ (id)_elementNameToClassMap;
@property(nonatomic) __weak id <XRSchemaAnnotationTextValuesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end

