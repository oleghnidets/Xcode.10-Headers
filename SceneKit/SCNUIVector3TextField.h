//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNUIBindableView.h>

@class NSObject, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface SCNUIVector3TextField : SCNUIBindableView
{
    NSTextField *tx;
    NSTextField *ty;
    NSTextField *tz;
    NSObject *observer;
    NSString *observedKeyPath;
}

- (void).cxx_destruct;
- (id)value;
@property(nonatomic) struct SCNVector3 vector3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

