//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLSimpleStringElementParser.h>

@class NSMutableArray, XRConstantEngineeringValue;

@interface XRConstantEngineeringValueElementParser : XRXMLSimpleStringElementParser
{
    NSMutableArray *_fields;
    XRConstantEngineeringValue *_parsedValue;
}

+ (id)_elementNameToClassMap;
@property(readonly, nonatomic) XRConstantEngineeringValue *parsedValue; // @synthesize parsedValue=_parsedValue;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)setValue:(id)arg1 forElementName:(id)arg2;

@end

