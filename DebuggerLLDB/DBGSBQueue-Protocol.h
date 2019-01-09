//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBQueue <NSObject>
- (id <DBGSBThread>)GetThreadAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumThreads;
- (id <DBGSBQueueItem>)GetPendingItemAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumPendingItems;
- (int)GetKind;
- (const char *)GetName;
- (unsigned long long)GetQueueID;
- (_Bool)IsValid;
@end

