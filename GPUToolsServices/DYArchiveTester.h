//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DYArchiveTester : NSObject
{
}

+ (void)debugOutputArchiveTrace:(id)arg1 toPath:(id)arg2 withFunctionTracer:(id)arg3;
+ (BOOL)_diffAndTestTraceFile:(id)arg1 withTraceFile:(id)arg2 refArchiveName:(id)arg3;
+ (BOOL)_compareReferenceArchive:(id)arg1 refArchiveName:(id)arg2 withFunctionTracer:(id)arg3;
+ (BOOL)_generateReferenceArchive:(id)arg1 refArchiveName:(id)arg2 withFunctionTracer:(id)arg3;
+ (BOOL)testArchive:(id)arg1 refArchiveName:(id)arg2 withFunctionTracer:(id)arg3;
+ (id)openArchive:(id)arg1;
+ (id)openArchive:(id)arg1 suffix:(id)arg2 bundle:(id)arg3;
+ (id)openArchive:(id)arg1 bundle:(id)arg2;

@end

