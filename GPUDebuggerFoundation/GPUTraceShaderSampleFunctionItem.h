//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceShaderDataItem.h>

@class GPUTraceShaderSampleFunctionInfo;

@interface GPUTraceShaderSampleFunctionItem : GPUTraceShaderDataItem
{
    float _costPercentage;
    GPUTraceShaderSampleFunctionInfo *_functionInfo;
}

+ (id)buildTreeFromSampleInfo:(id)arg1 functionInfo:(id)arg2 shaderItem:(id)arg3 parentItem:(id)arg4;
+ (id)buildTreeFromSampleInfo:(id)arg1 functionInfo:(id)arg2 shaderItem:(id)arg3;
@property(readonly, nonatomic) GPUTraceShaderSampleFunctionInfo *functionInfo; // @synthesize functionInfo=_functionInfo;
@property(nonatomic) float costPercentage; // @synthesize costPercentage=_costPercentage;
- (void).cxx_destruct;
- (id)dataProvider;
- (id)APIItem;
- (void)addSampleInfo:(id)arg1;
- (id)initWithShaderItem:(id)arg1 functionInfo:(id)arg2 parent:(id)arg3;
- (id)navigableItem_subtitle;

@end

