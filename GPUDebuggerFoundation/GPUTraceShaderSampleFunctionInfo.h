//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GPUTraceShaderSampleFunctionInfo : NSObject
{
    int _lineIndex;
    NSString *_displayName;
    NSString *_function;
    NSString *_filePath;
}

@property(nonatomic) int lineIndex; // @synthesize lineIndex=_lineIndex;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned long long)hashWithoutLine;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithInlineBlockInfo:(id)arg1;

@end

