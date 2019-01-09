//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint
{
    unsigned long long _freeAxes;
    BOOL _preserveScale;
}

+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)preserveScale;
- (void)setPreserveScale:(BOOL)arg1;
@property(nonatomic) unsigned long long freeAxes; // @synthesize freeAxes=_freeAxes;
- (id)init;

@end

