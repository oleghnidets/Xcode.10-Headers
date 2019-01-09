//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IBUIViewCachedGeometryInfo : NSObject
{
    NSString *_cachedKeyPath;
    NSString *_requestedKeyPath;
    long long _processingRequestPhase;
}

@property(nonatomic) long long processingRequestPhase; // @synthesize processingRequestPhase=_processingRequestPhase;
@property(readonly) NSString *requestedKeyPath; // @synthesize requestedKeyPath=_requestedKeyPath;
@property(readonly) NSString *cachedKeyPath; // @synthesize cachedKeyPath=_cachedKeyPath;
- (void).cxx_destruct;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)initWithCachedKeyPath:(id)arg1 andRequestedKeyPath:(id)arg2;
- (id)init;

@end

