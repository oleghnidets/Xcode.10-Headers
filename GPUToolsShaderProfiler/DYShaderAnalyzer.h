//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DYShaderAnalyzer : NSObject
{
    id <DYShaderAnalyzerDelegate> _delegate;
}

+ (BOOL)isDisassemblerAvailable;
+ (BOOL)supportRendererType:(int)arg1;
- (void).cxx_destruct;
- (id)platformShaderAnalyzer;
- (id)disassembleBinary:(id)arg1;
- (id)analyzeFragmentBinary:(id)arg1 uscSamples:(id)arg2 targetIndex:(int)arg3;
- (id)analyzeVertexBinary:(id)arg1 uscSamples:(id)arg2 targetIndex:(int)arg3;
- (id)analyzeBinary:(id)arg1 uscSamples:(id)arg2 targetIndex:(int)arg3 withTextSegment:(id)arg4 withKey:(id)arg5 withShaderSourcePath:(id)arg6 forDataMaster:(unsigned int)arg7 withPerDrawLimiterData:(id)arg8;
- (id)initWithDelegate:(id)arg1;

@end

