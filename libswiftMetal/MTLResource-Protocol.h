//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MTLResource <NSObject>
- (BOOL)isAliasable;
- (void)makeAliasable;
@property(nonatomic, readonly) long long allocatedSize;
@property(nonatomic, readonly) id <MTLHeap> heap;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@property(nonatomic, readonly) unsigned long long storageMode;
@property(nonatomic, readonly) unsigned long long cpuCacheMode;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end
