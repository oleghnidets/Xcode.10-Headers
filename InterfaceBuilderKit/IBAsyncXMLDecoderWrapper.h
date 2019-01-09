//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBXMLDecoder, NSObject<OS_dispatch_semaphore>, NSURL;

@interface IBAsyncXMLDecoderWrapper : NSObject
{
    IBXMLDecoder *decoder;
    NSURL *fileURL;
    NSObject<OS_dispatch_semaphore> *loadingSemaphore;
}

- (id)url;
- (id)initializedDecoder;
- (void)initializeDecoderForFileURL:(id)arg1;
- (void)setDecoder:(id)arg1;
- (id)decoder;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

