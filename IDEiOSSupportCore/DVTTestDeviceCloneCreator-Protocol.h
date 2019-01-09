//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTFuture;

@protocol DVTTestDeviceCloneCreator
+ (id <DVTTestDeviceCloneCreator>)sharedCreator;
- (DVTFuture *)destroyClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)shutdownClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)cloneDevice:(id <DVTTestDevice>)arg1;
- (BOOL)canCloneDevice:(id <DVTTestDevice>)arg1;
- (DVTFuture *)preexistingClones;
- (DVTFuture *)finishInitialization;
@end
