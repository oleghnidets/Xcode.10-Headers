//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LOCImportComparisonDetail : NSObject
{
    BOOL _shouldImport;
    NSString *_importComparisonFile;
    NSString *_projectComparisonFile;
    NSString *_targetLocale;
    NSArray *_issues;
}

@property BOOL shouldImport; // @synthesize shouldImport=_shouldImport;
@property(readonly, copy) NSArray *issues; // @synthesize issues=_issues;
@property(readonly, copy) NSString *targetLocale; // @synthesize targetLocale=_targetLocale;
@property(readonly, copy) NSString *projectComparisonFile; // @synthesize projectComparisonFile=_projectComparisonFile;
@property(readonly, copy) NSString *importComparisonFile; // @synthesize importComparisonFile=_importComparisonFile;
- (void).cxx_destruct;
- (id)initWithIssues:(id)arg1 importComparisonFile:(id)arg2 projectComparisonFile:(id)arg3 targetLocale:(id)arg4 shouldImport:(BOOL)arg5;

@end

