//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocumentAsynchronousToolLoadingQueue, IBGenericDeviceTypeDescription;

@protocol IBDocumentAsynchronousToolLoadingQueueDelegate <NSObject>
- (void)asynchronousToolLoadingQueue:(IBDocumentAsynchronousToolLoadingQueue *)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)asynchronousToolLoadingQueue:(IBDocumentAsynchronousToolLoadingQueue *)arg1 launchToolForDeviceTypeDescription:(IBGenericDeviceTypeDescription *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
