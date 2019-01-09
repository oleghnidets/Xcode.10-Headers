//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTSysmonTapRecordDecoder, NSArray;

@interface DTSysmonRecordEnumerator : NSObject
{
    unsigned long long _heartbeatTime;
    DTSysmonTapRecordDecoder *_recordDecoder;
    NSArray *_samples;
}

@property(retain, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(retain, nonatomic) DTSysmonTapRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithHeartbeatTime:(unsigned long long)arg1;

@end

