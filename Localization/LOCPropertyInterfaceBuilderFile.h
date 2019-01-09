//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCProperty.h>

@class NSDictionary, NSMutableArray, NSURL;

@interface LOCPropertyInterfaceBuilderFile : LOCProperty
{
    NSURL *_stringsFilePath;
    NSDictionary *_outputPlist;
    NSDictionary *_outputStrings;
    NSDictionary *_keyCommentDictionary;
    NSDictionary *_metaInfoDictionary;
    NSMutableArray *_ibElements;
    NSURL *_ibFileURL;
}

@property(retain, nonatomic) NSURL *ibFileURL; // @synthesize ibFileURL=_ibFileURL;
@property(retain, nonatomic) NSMutableArray *ibElements; // @synthesize ibElements=_ibElements;
@property(retain) NSDictionary *metaInfoDictionary; // @synthesize metaInfoDictionary=_metaInfoDictionary;
@property(retain) NSDictionary *keyCommentDictionary; // @synthesize keyCommentDictionary=_keyCommentDictionary;
@property(retain) NSDictionary *outputStrings; // @synthesize outputStrings=_outputStrings;
@property(retain) NSDictionary *outputPlist; // @synthesize outputPlist=_outputPlist;
@property(retain) NSURL *stringsFilePath; // @synthesize stringsFilePath=_stringsFilePath;
- (void).cxx_destruct;
- (id)metainfoDictionaryForStrings;
- (void)setKeyCommentDictionary;
- (void)setStringsFileContentsDictionary;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)stringsInNibFile;
- (BOOL)generateContentWithError:(id *)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

@end
