//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@class IBUIMetricRepresentation;

@interface IBUISimulatedToolbarOverrideMetricChain : IBUISimulatedMetricChain
{
    IBUIMetricRepresentation *_toolbar;
}

@property(readonly, nonatomic) IBUIMetricRepresentation *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (BOOL)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithToolbar:(id)arg1 precedingMetric:(id)arg2;

@end

