//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

#import "XRSchemaAnnotationPropertyReportingDelegate.h"

@class NSMutableDictionary;

@interface XRSchemaElementsRecursiveParser : XRXMLElementParser <XRSchemaAnnotationPropertyReportingDelegate>
{
    NSMutableDictionary *_errorReplacementsByKey;
}

- (void).cxx_destruct;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;
- (id)errorMessagesReplacements;
- (void)elementWithName:(id)arg1 parser:(id)arg2 key:(id)arg3 finishedWithErrorReplacement:(id)arg4;
- (void)_handleStart;

@end

