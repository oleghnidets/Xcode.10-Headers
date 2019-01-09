//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEDebugSession, NSArray, NSMutableArray;

@interface XRMemoryGraphIssueGenerator : NSObject
{
    NSMutableArray *_allIssues;
    IDEDebugSession *_debugSession;
}

@property(readonly, nonatomic) __weak IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(readonly, nonatomic) NSArray *allIssues; // @synthesize allIssues=_allIssues;
- (void).cxx_destruct;
- (void)_issuesChanged;
- (void)clearAllIssues;
- (void)addLeakedItems:(id)arg1 abandonedItems:(id)arg2;
- (id)initWithDebugSession:(id)arg1;

@end

