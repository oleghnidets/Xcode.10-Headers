//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractUserGuide.h"

@class NSView;

@interface IBSystemGuide : IBAbstractUserGuide
{
    NSView *_view;
    unsigned long long _affinity;
    double _location;
}

@property(nonatomic) double location; // @synthesize location=_location;
@property(nonatomic) unsigned long long affinity; // @synthesize affinity=_affinity;
@property(retain) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isVisible;
- (struct CGPoint)endInView:(id)arg1;
- (struct CGPoint)startInView:(id)arg1;
- (CDStruct_f6143a38)lineInView:(id)arg1;
- (BOOL)isVertical;
- (struct CGRect)containerAreaInView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 location:(double)arg2 andAffinity:(unsigned long long)arg3;

@end
