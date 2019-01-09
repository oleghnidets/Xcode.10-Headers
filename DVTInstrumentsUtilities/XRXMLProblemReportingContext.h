//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSObject<OS_os_log>, NSURL;

@interface XRXMLProblemReportingContext : NSObject
{
    BOOL _passed;
    NSFileHandle *_errorFile;
    NSObject<OS_os_log> *_log;
    NSURL *_urlBeingParsed;
}

@property(nonatomic) BOOL passed; // @synthesize passed=_passed;
@property(copy, nonatomic) NSURL *urlBeingParsed; // @synthesize urlBeingParsed=_urlBeingParsed;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSFileHandle *errorFile; // @synthesize errorFile=_errorFile;
- (void).cxx_destruct;
- (void)reportWarningWithElement:(id)arg1 failure:(id)arg2;
- (void)reportProblemWithElement:(id)arg1 failure:(id)arg2;
- (id)init;

@end

