//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface DYOverviewMeasurementsPerSample : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _timestamp;
    unsigned long long _framesDuration;
    unsigned long long _cpuTime;
    unsigned long long _cpuIdleTime;
    unsigned int _frameIndex;
    unsigned int _numFrames;
    unsigned long long _inGLTime;
    unsigned long long _totalPlatformTime;
    unsigned long long _inVertexProcessTime;
    unsigned long long _inStateChangeTime;
    unsigned long long _inTextureUploadTime;
    unsigned long long _caWaitTime;
    unsigned int _tilerUtilizationPercent;
    unsigned int _rendererUtilizationPercent;
    unsigned int _deviceUtilizationPercent;
    unsigned int _performanceBits;
    unsigned int _sampleIndex;
    unsigned long long _graphicsCommandNum;
    NSDictionary *_drawCommandStatistics;
}

+ (BOOL)supportsSecureCoding;
+ (id)frameDurationStatistics:(id)arg1;
+ (double)averageFPS:(id)arg1;
@property(readonly, nonatomic) NSDictionary *drawCommandStatistics; // @synthesize drawCommandStatistics=_drawCommandStatistics;
@property(nonatomic) unsigned long long graphicsCommandNum; // @synthesize graphicsCommandNum=_graphicsCommandNum;
@property(nonatomic) unsigned long long caWaitTime; // @synthesize caWaitTime=_caWaitTime;
@property(nonatomic) unsigned int performanceBits; // @synthesize performanceBits=_performanceBits;
@property(nonatomic) unsigned int deviceUtilizationPercent; // @synthesize deviceUtilizationPercent=_deviceUtilizationPercent;
@property(nonatomic) unsigned int rendererUtilizationPercent; // @synthesize rendererUtilizationPercent=_rendererUtilizationPercent;
@property(nonatomic) unsigned int tilerUtilizationPercent; // @synthesize tilerUtilizationPercent=_tilerUtilizationPercent;
@property(nonatomic) unsigned long long inTextureUploadTime; // @synthesize inTextureUploadTime=_inTextureUploadTime;
@property(nonatomic) unsigned long long inStateChangeTime; // @synthesize inStateChangeTime=_inStateChangeTime;
@property(nonatomic) unsigned long long inVertexProcessTime; // @synthesize inVertexProcessTime=_inVertexProcessTime;
@property(nonatomic) unsigned long long totalPlatformTime; // @synthesize totalPlatformTime=_totalPlatformTime;
@property(nonatomic) unsigned long long inGLTime; // @synthesize inGLTime=_inGLTime;
@property(nonatomic) unsigned int numFrames; // @synthesize numFrames=_numFrames;
@property(nonatomic) unsigned int frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) unsigned long long cpuIdleTime; // @synthesize cpuIdleTime=_cpuIdleTime;
@property(nonatomic) unsigned long long cpuTime; // @synthesize cpuTime=_cpuTime;
@property(nonatomic) unsigned long long framesDuration; // @synthesize framesDuration=_framesDuration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int sampleIndex; // @synthesize sampleIndex=_sampleIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL waitOnGPU;
- (void)log;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

