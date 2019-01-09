//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceResourceItem.h>

#import "DYPRawBytesResourceItem.h"

@class NSMutableDictionary, NSString;

@interface GPUTraceBytesItem : GPUTraceResourceItem <DYPRawBytesResourceItem>
{
    unsigned int _bindingIndex;
    unsigned long long _bytesType;
}

@property(readonly, nonatomic) unsigned int bindingIndex; // @synthesize bindingIndex=_bindingIndex;
@property(readonly, nonatomic) unsigned long long bytesType; // @synthesize bytesType=_bytesType;
- (id)initWithController:(id)arg1 parent:(id)arg2 encoderObject:(const void *)arg3 containerID:(unsigned long long)arg4 sharegroupID:(unsigned long long)arg5 identifier:(id)arg6 bindingIndex:(unsigned long long)arg7 bytesType:(unsigned long long)arg8;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int functionIndex;
@property(readonly, nonatomic) BOOL generatesThumbnail;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) BOOL placeholder;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) const void *stateMirrorObject;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned int type;

@end

