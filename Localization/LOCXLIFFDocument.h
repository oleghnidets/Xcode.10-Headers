//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCXMLDocument.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface LOCXLIFFDocument : LOCXMLDocument
{
    NSMutableSet *originalPaths;
    NSMutableArray *originalPathOrder;
    NSMutableDictionary *glossaries;
    NSMutableDictionary *debugInfo;
    NSMutableDictionary *warningInfo;
    NSMutableDictionary *xliffNamespaces;
    NSMutableArray *xliffNamespaceOrder;
    NSMutableDictionary *xliffAttributes;
    NSMutableArray *xliffAttributeOrder;
    BOOL initializedFromGlossary;
    NSString *preferredXLIFFNamespace;
    BOOL legacyNotValidXLIFF;
    id reserved102;
    id reserved103;
    id reserved104;
    id reserved105;
    id reserved106;
    id reserved107;
    id reserved108;
    NSDictionary *_toolInfo;
}

@property(retain) NSDictionary *toolInfo; // @synthesize toolInfo=_toolInfo;
@property BOOL legacyNotValidXLIFF; // @synthesize legacyNotValidXLIFF;
@property(retain) NSString *preferredXLIFFNamespace; // @synthesize preferredXLIFFNamespace;
@property BOOL initializedFromGlossary; // @synthesize initializedFromGlossary;
@property(retain) NSMutableArray *xliffAttributeOrder; // @synthesize xliffAttributeOrder;
@property(retain) NSMutableDictionary *xliffAttributes; // @synthesize xliffAttributes;
@property(retain) NSMutableArray *xliffNamespaceOrder; // @synthesize xliffNamespaceOrder;
@property(retain) NSMutableDictionary *xliffNamespaces; // @synthesize xliffNamespaces;
@property(retain) NSMutableDictionary *warningInfo; // @synthesize warningInfo;
@property(retain) NSMutableDictionary *debugInfo; // @synthesize debugInfo;
@property(retain) NSMutableDictionary *glossaries; // @synthesize glossaries;
@property(retain) NSMutableArray *originalPathOrder; // @synthesize originalPathOrder;
@property(retain) NSMutableSet *originalPaths; // @synthesize originalPaths;
- (void).cxx_destruct;
- (void)addNamespaceToXLIFFElementWithName:(id)arg1 stringValue:(id)arg2;
- (void)fixNamespaceForXPaths:(id)arg1;
- (BOOL)needToFixNamespaceIssueOfNSXMLDocument;
- (void)diffWithXLIFF:(id)arg1 newFiles:(id *)arg2 obsoleteFiles:(id *)arg3 identicalFiles:(id *)arg4;
- (id)xliffStringWithLibxml2Doc:(struct _xmlDoc *)arg1 encoding:(unsigned long long)arg2 encodingString:(id)arg3 format:(int)arg4 error:(id *)arg5;
- (id)xliffDataWithLibxml2Doc:(struct _xmlDoc *)arg1 encodingString:(id)arg2 format:(int)arg3 error:(id *)arg4;
- (id)integrityNeedsToBeEnsuredLeafElements;
- (unsigned long long)libxml2XPathNamespacePrefixForElement:(id *)arg1 attribute:(id *)arg2;
- (void)nsxmlXPathNamespacePrefixIncludingColonForElement:(id *)arg1 attribute:(id *)arg2;
- (BOOL)refreshWithUpdatedInternalGlossariesWithError:(id *)arg1;
- (BOOL)writeTMXToFile:(id)arg1 atomically:(BOOL)arg2 refresh:(BOOL)arg3 error:(id *)arg4;
- (BOOL)writeGMXVToFile:(id)arg1 atomically:(BOOL)arg2 projectIdentifier:(id)arg3 refresh:(BOOL)arg4 error:(id *)arg5;
- (id)serializeAfterFixingNSXMLSerializationProblemsWithIdNodesToBeFixed:(id)arg1 elementNodesToBeFixed:(id)arg2 unescapeDictionaryForElement:(id)arg3 error:(id *)arg4;
- (id)xliffStringWithRefresh:(BOOL)arg1 error:(id *)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 refresh:(BOOL)arg3 error:(id *)arg4;
- (id)createXLIFFDocumentFromGlossariesWithError:(id *)arg1;
- (id)allGlossariesWithError:(id *)arg1;
- (id)glossaryForOriginalPath:(id)arg1 error:(id *)arg2;
- (id)fileNodeForOriginalPath:(id)arg1 error:(id *)arg2;
- (id)allFileNodesWithError:(id *)arg1;
- (id)allOriginalPaths;
- (BOOL)createDOMFromGlossariesWithError:(id *)arg1;
- (BOOL)finishedRemovingGlossariesWithError:(id *)arg1;
- (void)removeGlossariesForOriginalPaths:(id)arg1;
- (void)removeGlossaryForOriginalPath:(id)arg1;
- (BOOL)finishedAddingGlossariesWithError:(id *)arg1;
- (void)addGlossaries:(id)arg1;
- (void)addGlossary:(id)arg1;
- (id)initWithInternalGlossaries:(id)arg1 options:(unsigned long long)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)initWithInternalGlossaries:(id)arg1 toolInfo:(id)arg2 options:(unsigned long long)arg3 parameters:(id)arg4 error:(id *)arg5;
- (id)initWithInternalGlossary:(id)arg1 options:(unsigned long long)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)initWithRootElement:(id)arg1;
- (id)init;
- (id)configureForXLIFFWithError:(id *)arg1;
- (id)xmlSchemaFileName;
- (int)validateXLIFF:(struct _xmlDoc *)arg1 withXMLSchemaContents:(id)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 schemaString:(id)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 schemaString:(id)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

