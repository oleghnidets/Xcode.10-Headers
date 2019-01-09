//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSError, NSString;

@interface LOCIBToolOperation : NSObject
{
    NSString *ibFilePath;
    NSString *toolPath;
    NSArray *toolOptions;
    NSDictionary *miscellaneousOptions;
    NSDictionary *environmentVariables;
    NSDictionary *ibtoolOutputPlistDictionary;
    NSString *ibtoolStandardOutputString;
    NSString *stringsFilePath;
    NSData *stringsFileContentsData;
    NSDictionary *stringsFileContentsDictionary;
    NSDictionary *stringsFileKeyCommentDictionary;
    NSError *ibtoolException;
    NSError *ibtoolOutputPlistParseError;
    NSError *ibtoolOutputStringsFileParseError;
    NSDictionary *ibfileChecksums;
    int ibtoolExitCode;
    NSString *ibtoolCommandString;
    BOOL suppressIbtoolError;
    BOOL coreDumpSizelimitHasChanged;
    unsigned long long previousLimit;
}

+ (id)ibtoolVersionInfoWithIBToolPath:(id)arg1;
+ (id)ibtoolOutputPlistDictionaryFromCacheFile:(id)arg1;
+ (id)universalCacheFilePathInCacheDirectory:(id)arg1 ibfilePath:(id)arg2 checksums:(id *)arg3;
+ (id)ibfilePathFromCacheFile:(id)arg1;
+ (BOOL)validateCacheFile:(id)arg1 forIbfile:(id)arg2;
+ (id)constructCacheFileNameFromChecksums:(id)arg1;
+ (id)obtainIbfileChecksumFromCacheFile:(id)arg1;
+ (void)populateDictionary:(id)arg1 withFilesInNib:(id)arg2;
+ (id)obtainChecksumForIbfile:(id)arg1;
+ (id)defaultIBToolOptionsWithLoadModules:(id)arg1 IBToolPath:(id)arg2;
+ (id)defaultIBToolOptionsWithIBToolPath:(id)arg1;
+ (id)appleGlotIBExportPlistPath;
+ (id)appleGlotIBBundlePath;
+ (id)attributeTextFromExportSection:(id)arg1;
@property unsigned long long previousLimit; // @synthesize previousLimit;
@property BOOL coreDumpSizelimitHasChanged; // @synthesize coreDumpSizelimitHasChanged;
@property BOOL suppressIbtoolError; // @synthesize suppressIbtoolError;
@property(retain) NSString *ibtoolCommandString; // @synthesize ibtoolCommandString;
@property int ibtoolExitCode; // @synthesize ibtoolExitCode;
@property(retain) NSDictionary *ibfileChecksums; // @synthesize ibfileChecksums;
@property(retain) NSError *ibtoolOutputStringsFileParseError; // @synthesize ibtoolOutputStringsFileParseError;
@property(retain) NSError *ibtoolOutputPlistParseError; // @synthesize ibtoolOutputPlistParseError;
@property(retain) NSError *ibtoolException; // @synthesize ibtoolException;
@property(retain) NSDictionary *stringsFileKeyCommentDictionary; // @synthesize stringsFileKeyCommentDictionary;
@property(retain) NSDictionary *stringsFileContentsDictionary; // @synthesize stringsFileContentsDictionary;
@property(retain) NSData *stringsFileContentsData; // @synthesize stringsFileContentsData;
@property(retain) NSString *stringsFilePath; // @synthesize stringsFilePath;
@property(retain) NSString *ibtoolStandardOutputString; // @synthesize ibtoolStandardOutputString;
@property(retain) NSDictionary *ibtoolOutputPlistDictionary; // @synthesize ibtoolOutputPlistDictionary;
@property(retain) NSDictionary *environmentVariables; // @synthesize environmentVariables;
@property(retain) NSDictionary *miscellaneousOptions; // @synthesize miscellaneousOptions;
@property(retain) NSArray *toolOptions; // @synthesize toolOptions;
@property(retain) NSString *toolPath; // @synthesize toolPath;
@property(retain) NSString *ibFilePath; // @synthesize ibFilePath;
- (void).cxx_destruct;
- (void)restoreCoreDumpLimit;
- (void)disableCoreDump;
- (void)searchForCacheFileAndValidateItForIbfile:(id)arg1 cacheDirectory:(id)arg2 validatedPlist:(id *)arg3 validatedStrings:(id *)arg4;
- (id)populateUniversalCacheDictionary;
- (void)createUniversalCacheInDirectory:(id)arg1;
- (void)createALAFLILegacyCacheAtCacheInDirectory:(id)arg1 glotDirectory:(id)arg2 projectName:(id)arg3;
- (void)addOptionsTo:(id)arg1 fromOptDictionary:(id)arg2;
- (id)defaultIBToolPath;
- (void)addGenerateStringsFileOptionsTo:(id)arg1;
- (id)exception;
- (id)timeStamp;
- (id)checkSumDictionary;
- (id)ibtoolEnvironmentVariablesString;
- (void)createLegacyGlotCache;
- (void)createCacheAndDieSoonWithOptions:(id)arg1;
- (void)launchIBTool:(id)arg1;
- (unsigned long long)objectCount;
- (BOOL)successfulIBToolExecutionWithErrorReport:(id *)arg1;
- (void)launch;
- (void)releaseAllObjects;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5 addExportStringsFileOptions:(BOOL)arg6;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolLoadModuleOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5;

@end

