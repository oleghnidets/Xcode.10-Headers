//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDispatchLock, DVTFilePath, DVTStackBacktrace, IBLiveViewsManager, IBPlatform, NSDictionary, NSHashTable, NSString;

@interface IBLiveViewsBundle : NSObject <DVTInvalidation>
{
    NSHashTable *_weakObserversHashTable;
    DVTDispatchLock *_accessLock;
    long long _lockCount;
    IBPlatform *_platform;
    DVTFilePath *_builtFilePath;
    NSDictionary *_buildSettings;
    IBLiveViewsManager *_manager;
}

+ (void)initialize;
@property(nonatomic) __weak IBLiveViewsManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)effectivePlatform;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
- (void)setBuiltFilePath:(id)arg1 withBuildSettings:(id)arg2;
@property(copy, nonatomic) NSDictionary *buildSettings; // @synthesize buildSettings=_buildSettings;
@property(readonly, nonatomic, getter=isUpToDate) BOOL upToDate;
- (void)liveViewsManager:(id)arg1 failedToBuildBundleWithError:(id)arg2;
@property(retain, nonatomic) DVTFilePath *builtFilePath; // @synthesize builtFilePath=_builtFilePath;
- (void)_dispatchDidFinishBuildingToObserversWithError:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithExplicitPlatform:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
