//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@class NSString;

@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser
{
    NSString *_type;
    long long _start;
    long long _end;
}

+ (id)_elementNameToClassMap;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_handleCompletion;

@end

