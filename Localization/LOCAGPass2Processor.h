//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCAGProcessor.h>

@class NSDictionary;

@interface LOCAGPass2Processor : LOCAGProcessor
{
    NSDictionary *_translationChangedFiles;
}

@property(retain) NSDictionary *translationChangedFiles; // @synthesize translationChangedFiles=_translationChangedFiles;
- (void).cxx_destruct;
- (id)splitNibGlossary:(id)arg1;
- (BOOL)cleanUp;
- (id)createLOCXLIFFDocumentFromXLIFFatPath:(id)arg1;
- (id)findTranslationChangesFromXLIFFs;
- (BOOL)preProcessNibs;
- (void)updateNibsWithNewTranslation;
- (void)updateFilesWithNewTranslation;

@end

