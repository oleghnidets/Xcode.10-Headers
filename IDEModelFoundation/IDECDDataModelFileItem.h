//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, NSString;

@interface IDECDDataModelFileItem : NSObject
{
    BOOL _shouldUse;
    DVTFilePath *_filePath;
}

@property BOOL shouldUse; // @synthesize shouldUse=_shouldUse;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly) NSString *name;
- (id)description;
- (id)initWithFilePath:(id)arg1 shouldUse:(BOOL)arg2;

@end

