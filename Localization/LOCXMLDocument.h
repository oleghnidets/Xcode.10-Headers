//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXMLDocument.h"

@interface LOCXMLDocument : NSXMLDocument
{
    id reserved1;
    id reserved2;
    id reserved3;
    id reserved4;
    id reserved5;
    id reserved6;
    id reserved7;
    id reserved8;
}

- (void).cxx_destruct;
- (void)replaceTabAndNewLineEscapeSequencesWithActualCharactersInAttributeNode:(struct _xmlNode *)arg1 xmlDoc:(struct _xmlDoc *)arg2;
- (id)XPathByAddingprefixForDefaultNamespace:(id)arg1;
- (id)findAttributeValuesContainingTabAndNewlineCharactersXPathForAttribute:(id)arg1 namespaces:(id)arg2 targetNSXMLDocument:(id)arg3;
- (id)invertedDictionary:(id)arg1;
- (void)replaceEscapeSequencesWithActualfindElementsContainingCharacterPatternsCausingSerializingProblemXPathForElementssInElementTextNode:(void *)arg1 xmlDoc:(void *)arg2 unescapeDictionary:(id)arg3;
- (id)patternsCausingSerializationProblems;
- (id)findElementsContainingCharacterPatternsCausingSerializingProblemXPathForNodes:(id)arg1 withEscapeDictionary:(id)arg2 namespaces:(id)arg3 targetNSXMLDocument:(id)arg4;
- (BOOL)writeAfterFixingNSXMLSerializationProblems:(id)arg1 targetNSXMLDocument:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)setNewNodeContent:(struct _xmlNode *)arg1 withReplacementTextEntryDictionaryArray:(id)arg2 xmlDoc:(struct _xmlDoc *)arg3;
- (void)namespacePrefixAndURIUsedByXPathToFindElementsInDOM:(struct _xmlDoc *)arg1 namespaces:(id)arg2 prefixForElement:(id *)arg3 prefixForAttribute:(id *)arg4 uri:(char **)arg5;
- (void)fixNSXMLNodes:(id)arg1;
- (id)findCharRefLikeStringHandlingProblemElements:(id)arg1 namespaces:(id)arg2 libxml2DocPtr:(struct _xmlDoc *)arg3;
- (id)findWhiteSpaceOnlyTextNodeElements:(id)arg1 namespaces:(id)arg2 libxml2DocPtr:(void *)arg3;
- (void)freeLibxml2Doc:(void *)arg1;
- (struct _xmlDoc *)createLibxml2DocFromData:(id)arg1 error:(id *)arg2;
- (struct _xmlDoc *)createLibxml2DocFromData:(id)arg1;
- (struct _xmlDoc *)createLibxml2Doc;
- (void)registerEXSLT;
- (id)objectByApplyingXSLTAtURL:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLTString:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)objectByApplyingXSLT:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (void)setVersion:(id)arg1;
- (void)setURI:(id)arg1;
- (id)version;
- (void)setStandalone:(BOOL)arg1;
- (BOOL)isStandalone;
- (void)setMIMEType:(id)arg1;
- (id)MIMEType;
- (void)setDTD:(id)arg1;
- (id)DTD;
- (void)setDocumentContentKind:(unsigned long long)arg1;
- (unsigned long long)documentContentKind;
- (void)setCharacterEncoding:(id)arg1;
- (id)characterEncoding;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)setChildren:(id)arg1;
- (id)rootElement;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

