//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCTDaemonSession.h"

@class NSArray, NSDate;

@protocol XCTDaemonControlSession <XCTDaemonSession>
@property __weak id <XCTDaemonControlSessionDelegate> delegate;
@property(readonly) BOOL canRequestSpindumps;
@property(readonly) BOOL canRequestLogArchives;
@property(readonly) BOOL canRequestCrashReports;
@property(readonly) BOOL canAuthorizeProcesses;
- (void)requestSpindumpWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)collectLogArchiveFromStartDate:(NSDate *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)collectNewCrashReportsInDirectories:(NSArray *)arg1 matchingProcessNames:(NSArray *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)authorizeProcessWithIdentifier:(int)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
