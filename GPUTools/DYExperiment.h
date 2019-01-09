//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString;

@interface DYExperiment : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_captureArchivePath;
    NSMutableDictionary *_results;
    unsigned int _repeatCount;
    unsigned int _warmupCount;
    BOOL _enabled;
    BOOL _enableExperimentFinish;
    BOOL _enablePerFrameTiming;
    NSString *_name;
    unsigned int _frameTimeArraySize;
    unsigned int _frameTimeVariationArraySize;
    double _frameTimeVariationLimit1;
    double _frameTimeVariationLimit2;
    double _frameTimeVariationRangeMax;
    BOOL _allowEarlyTermination;
    int _traceMode;
    unsigned long long _profilingFlags;
    BOOL _usingModifiedArchive;
    CDUnknownBlockType _messageHandler;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) BOOL usingModifiedArchive; // @synthesize usingModifiedArchive=_usingModifiedArchive;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) BOOL allowEarlyTermination; // @synthesize allowEarlyTermination=_allowEarlyTermination;
@property(nonatomic) double frameTimeVariationRangeMax; // @synthesize frameTimeVariationRangeMax=_frameTimeVariationRangeMax;
@property(nonatomic) double frameTimeVariationLimit2; // @synthesize frameTimeVariationLimit2=_frameTimeVariationLimit2;
@property(nonatomic) double frameTimeVariationLimit1; // @synthesize frameTimeVariationLimit1=_frameTimeVariationLimit1;
@property(nonatomic) unsigned int frameTimeVariationArraySize; // @synthesize frameTimeVariationArraySize=_frameTimeVariationArraySize;
@property(nonatomic) unsigned int frameTimeArraySize; // @synthesize frameTimeArraySize=_frameTimeArraySize;
@property(nonatomic) unsigned long long profilingFlags; // @synthesize profilingFlags=_profilingFlags;
@property(nonatomic) int traceMode; // @synthesize traceMode=_traceMode;
@property(readonly, retain, nonatomic) NSString *captureArchivePath; // @synthesize captureArchivePath=_captureArchivePath;
@property(nonatomic) BOOL enablePerFrameTiming; // @synthesize enablePerFrameTiming=_enablePerFrameTiming;
@property(nonatomic) BOOL enableExperimentFinish; // @synthesize enableExperimentFinish=_enableExperimentFinish;
@property(nonatomic) unsigned int warmupCount; // @synthesize warmupCount=_warmupCount;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(readonly, retain, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isPresentFrameEnabled;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;
- (id)init;

@end

