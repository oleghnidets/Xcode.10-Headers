//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCPropertyXMLFile.h>

@class NSDictionary;

@interface LOCPropertyIntentdefinitionFile : LOCPropertyXMLFile
{
    NSDictionary *_intentParameterCombinationTemplates;
    NSDictionary *_responseParameterCombinationTemplates;
    NSDictionary *_intentParameterToEnumDict;
    NSDictionary *_responseParameterToEnumDict;
    NSDictionary *_enumValuesDict;
    struct _xmlDoc *_xmlDocument;
}

@property struct _xmlDoc *xmlDocument; // @synthesize xmlDocument=_xmlDocument;
@property(retain) NSDictionary *enumValuesDict; // @synthesize enumValuesDict=_enumValuesDict;
@property(retain) NSDictionary *responseParameterToEnumDict; // @synthesize responseParameterToEnumDict=_responseParameterToEnumDict;
@property(retain) NSDictionary *intentParameterToEnumDict; // @synthesize intentParameterToEnumDict=_intentParameterToEnumDict;
@property(retain) NSDictionary *responseParameterCombinationTemplates; // @synthesize responseParameterCombinationTemplates=_responseParameterCombinationTemplates;
@property(retain) NSDictionary *intentParameterCombinationTemplates; // @synthesize intentParameterCombinationTemplates=_intentParameterCombinationTemplates;
- (void).cxx_destruct;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)allPossibleValueCombinationsForParameters:(id)arg1;
- (id)generateCombinationsFromTemplates:(id)arg1 parameters:(id)arg2 withError:(id *)arg3;
- (id)findStringsMatchingXpath:(id)arg1;
- (id)findStringMatchingXpath:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

@end

