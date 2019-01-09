//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKNode;

__attribute__((visibility("hidden")))
@interface IKLink : NSObject
{
    float _angleInitial;
    float _angle;
    float _length;
    SKNode *_node;
    union _GLKVector2 _position;
    union _GLKVector2 _size;
}

@property(nonatomic) union _GLKVector2 size; // @synthesize size=_size;
@property(nonatomic) float length; // @synthesize length=_length;
@property(readonly, nonatomic) float angle; // @synthesize angle=_angle;
@property(nonatomic) float angleInitial; // @synthesize angleInitial=_angleInitial;
@property(nonatomic) union _GLKVector2 position; // @synthesize position=_position;
@property(retain, nonatomic) SKNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)rotateByAngle:(float)arg1;
- (double)normalizeAngle:(double)arg1;
- (id)initWithNode:(id)arg1;

@end
