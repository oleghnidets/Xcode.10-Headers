//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLTextureDescriptor, NSString;

@protocol MTLHeap <NSObject>
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithLength:(long long)arg1 options:(unsigned long long)arg2;
- (long long)maxAvailableSizeWithAlignment:(long long)arg1;
@property(nonatomic, readonly) long long currentAllocatedSize;
@property(nonatomic, readonly) long long usedSize;
@property(nonatomic, readonly) long long size;
@property(nonatomic, readonly) unsigned long long cpuCacheMode;
@property(nonatomic, readonly) unsigned long long storageMode;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end
