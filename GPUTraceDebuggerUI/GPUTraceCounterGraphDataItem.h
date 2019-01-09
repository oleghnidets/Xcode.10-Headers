//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYPPerformanceAnalyzerDelegate.h"
#import "GPUTimelineGraphDataColumn.h"

@class DYPPerformanceAnalysisResult, DYShaderProfilerDrawCallInfo, GPUTraceAPIItem, NSArray;

@interface GPUTraceCounterGraphDataItem : NSObject <DYPPerformanceAnalyzerDelegate, GPUTimelineGraphDataColumn>
{
    BOOL _isEmptyEncoder;
    unsigned long long _index;
    DYShaderProfilerDrawCallInfo *_drawCallInfo;
    GPUTraceAPIItem *_apiItem;
    NSArray *_traceInfomation;
    unsigned long long _groupIndex;
    NSArray *_values;
    NSArray *_valuesBase;
    NSArray *_valuesForAnalysis;
    DYPPerformanceAnalysisResult *_performanceAnalysisResult;
}

@property(readonly, nonatomic) DYPPerformanceAnalysisResult *performanceAnalysisResult; // @synthesize performanceAnalysisResult=_performanceAnalysisResult;
@property(retain, nonatomic) NSArray *valuesForAnalysis; // @synthesize valuesForAnalysis=_valuesForAnalysis;
@property(retain, nonatomic) NSArray *valuesBase; // @synthesize valuesBase=_valuesBase;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(retain, nonatomic) NSArray *traceInfomation; // @synthesize traceInfomation=_traceInfomation;
@property(nonatomic) __weak GPUTraceAPIItem *apiItem; // @synthesize apiItem=_apiItem;
@property(nonatomic) __weak DYShaderProfilerDrawCallInfo *drawCallInfo; // @synthesize drawCallInfo=_drawCallInfo;
@property(nonatomic) BOOL isEmptyEncoder; // @synthesize isEmptyEncoder=_isEmptyEncoder;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)runPerformanceAnalysis:(id)arg1;
- (void)clearAnalysisResult;
- (void)performanceAnalyzer:(id)arg1 finish:(id)arg2;
- (void)performanceAnalyzer:(id)arg1 exportContext:(id)arg2;
- (id)representedObject;
- (id)initWithDrawCallInfo:(id)arg1 andIndex:(unsigned long long)arg2;

@end

