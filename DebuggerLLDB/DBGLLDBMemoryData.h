//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEMemoryData.h"

@class NSData;

@interface DBGLLDBMemoryData : IDEMemoryData
{
    NSData *_shadowMemoryData;
}

@property(copy, nonatomic) NSData *shadowMemoryData; // @synthesize shadowMemoryData=_shadowMemoryData;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)gatherAdditionalInformationForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;

@end

