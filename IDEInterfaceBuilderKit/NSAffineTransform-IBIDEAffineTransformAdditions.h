//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAffineTransform.h"

@interface NSAffineTransform (IBIDEAffineTransformAdditions)
+ (id)ib_transformForFlippingRect:(double)arg1 aroundPoint:(struct CGPoint)arg2;
+ (id)ib_transformForFlippingRect:(struct CGRect)arg1;
+ (id)ib_transformWithRotateByRadians:(double)arg1;
+ (id)ib_transformWithTranslateXBy:(double)arg1 yBy:(double)arg2;
+ (id)ib_transformWithScaleXBy:(double)arg1 yBy:(double)arg2;
+ (id)ib_transformWithScale:(double)arg1;
- (struct CGRect)ib_transformRect:(struct CGRect)arg1;
@end

