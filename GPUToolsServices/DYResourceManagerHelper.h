//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYResourceStreamer, DeviceResourceRequestPriorityQueue, NSCache, NSMutableSet;

@interface DYResourceManagerHelper : NSObject
{
    id <DYCaptureStore> _captureStore;
    DYResourceStreamer *_resourceStreamer;
    NSCache *_captureStoreCache;
    NSCache *_deviceCache;
    NSCache *_textureBackingStoresCache;
    NSMutableSet *_updatedResourcesSet;
    struct dispatch_queue_s *_resourceQueue;
    struct dispatch_queue_s *_deviceQueue;
    int _captureStoreSpinLock;
    DeviceResourceRequestPriorityQueue *_resourceRequestQueue;
}

+ (id)_keyForResource:(id)arg1 sharegroup:(unsigned long long)arg2 funcIndex:(unsigned int)arg3 subCommandIndex:(int)arg4;
- (void).cxx_destruct;
- (BOOL)hasResourceStreamer;
- (id)updateResource:(id)arg1 sharegroup:(unsigned long long)arg2;
- (BOOL)hasResourceBeenUpdated:(unsigned long long)arg1 resourceType:(unsigned int)arg2 container:(unsigned long long)arg3;
- (void)invalidateDeviceResource:(id)arg1 sharegroup:(unsigned long long)arg2 functionIndex:(unsigned int)arg3;
- (void)invalidateDeviceCache;
- (id)loadDeviceResourceBatch:(id)arg1 withCompression:(unsigned long long)arg2 priority:(long long)arg3 sharegroup:(unsigned long long)arg4 functionIndex:(unsigned int)arg5;
- (id)loadDeviceResourceBatch:(id)arg1 sharegroup:(unsigned long long)arg2 functionIndex:(unsigned int)arg3;
- (id)loadDeviceResource:(id)arg1 sharegroup:(unsigned long long)arg2 functionIndex:(unsigned int)arg3 subCommandIndex:(int)arg4;
- (id)loadDeviceResource:(id)arg1 sharegroup:(unsigned long long)arg2 functionIndex:(unsigned int)arg3;
- (id)loadTextureImageBackingStore:(id)arg1 creationClass:(Class)arg2;
- (id)loadCaptureStoreData:(id)arg1;
- (void)dealloc;
- (id)initWithCaptureStore:(id)arg1 resourceStreamer:(id)arg2;

@end

