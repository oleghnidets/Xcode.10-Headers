//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileHandle, NSObject<OS_os_log>, NSURL;

@interface XRXMLValidator : NSObject
{
    NSURL *_url;
    NSURL *_schemaURL;
    NSArray *_errorReplacements;
    NSFileHandle *_errorFile;
    NSFileHandle *_diagnosticFile;
    NSObject<OS_os_log> *_log;
}

@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSFileHandle *diagnosticFile; // @synthesize diagnosticFile=_diagnosticFile;
@property(retain) NSFileHandle *errorFile; // @synthesize errorFile=_errorFile;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)findErrorMessageForErrorPtr:(struct _xmlError *)arg1;
- (id)initWithSourceURL:(id)arg1 schemaURL:(id)arg2;

@end

