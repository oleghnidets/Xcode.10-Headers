//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Localization/LOCHandler.h>

@interface LOCXclocHandler : LOCHandler
{
}

- (id)_findLocalizableFilesIn:(id)arg1 nonxliffableOnly:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_findXliff:(id)arg1 xliffPath:(id *)arg2 error:(id *)arg3;
- (id)_compareNonxliffableFilesInPath:(id)arg1 withProjectFiles:(id)arg2;
- (void)_prepareForImportOfDocument:(id)arg1 toFiles:(id)arg2 xliffPath:(id *)arg3 importAll:(BOOL)arg4 error:(id *)arg5;
- (void)importFromXcloc:(id)arg1 ITSRulesPath:(id)arg2 projDirPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (Class)exportRequestClass;

@end
