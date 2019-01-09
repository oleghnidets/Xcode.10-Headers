//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface DTXMessage : NSObject
{
    unsigned int _messageType;
    int _compressionType;
    unsigned int _status;
    CDUnknownBlockType _destructor;
    const char *_internalBuffer;
    unsigned long long _internalBufferLength;
    unsigned long long _cost;
    id <NSSecureCoding><NSObject> _payloadObject;
    void *_auxiliary;
    // Error parsing type: AB, name: _immutable
    BOOL _deserialized;
    BOOL _expectsReply;
    unsigned int _identifier;
    unsigned int _channelCode;
    unsigned int _conversationIndex;
    NSDictionary *_auxiliaryPromoted;
}

+ (_Bool)extractSerializedCompressionInfoFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 compressionType:(int *)arg3 uncompressedLength:(unsigned long long *)arg4 compressedDataOffset:(unsigned long long *)arg5;
+ (id)message;
+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;
+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(unsigned int)arg2;
+ (id)messageReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
+ (id)messageWithBuffer:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)messageWithPrimitive:(void *)arg1;
+ (id)messageWithError:(id)arg1;
+ (id)messageWithObject:(id)arg1;
+ (void)setReportCompressionBlock:(CDUnknownBlockType)arg1;
+ (id)defaultAllowedSecureCodingClasses;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) unsigned int errorStatus; // @synthesize errorStatus=_status;
@property(readonly, nonatomic) BOOL deserialized; // @synthesize deserialized=_deserialized;
@property(nonatomic) unsigned int conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(nonatomic) BOOL expectsReply; // @synthesize expectsReply=_expectsReply;
@property(nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)serializedFormApply:(CDUnknownBlockType)arg1;
- (id)initWithSerializedForm:(const char *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3 compressor:(id)arg4;
- (void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(CDUnknownBlockType)arg3;
- (BOOL)shouldInvokeWithTarget:(id)arg1;
@property(nonatomic) unsigned int messageType;
@property(readonly, nonatomic) BOOL isBarrier;
@property(readonly, nonatomic) BOOL isDispatch;
@property(retain, nonatomic) NSError *error;
- (id)valueForMessageKey:(id)arg1;
- (id)dataForMessageKey:(id)arg1;
- (id)stringForMessageKey:(id)arg1;
- (long long)integerForMessageKey:(id)arg1;
- (id)_faultAuxiliaryValueOfType:(Class)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forMessageKey:(id)arg2;
- (void)setInteger:(long long)arg1 forMessageKey:(id)arg2;
- (void)setString:(id)arg1 forMessageKey:(id)arg2;
- (void)setObject:(id)arg1 forMessageKey:(id)arg2;
- (id)_mutableAuxiliaryDictionary;
- (void)_appendTypesAndValues:(unsigned int)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;
- (void)_willModifyAuxiliary;
- (void)_makeBarrier;
- (void)_makeImmutable;
- (const void *)getBufferWithReturnedLength:(unsigned long long *)arg1;
@property(readonly, nonatomic) id <NSSecureCoding><NSObject> object;
- (id)objectWithAllowedClasses:(id)arg1;
@property(copy, nonatomic) id <NSSecureCoding><NSObject> payloadObject;
- (void)_setPayloadBuffer:(const char *)arg1 length:(unsigned long long)arg2 shouldCopy:(BOOL)arg3 destructor:(CDUnknownBlockType)arg4;
- (void)_clearPayloadBuffer;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;
- (id)newReplyReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (id)newReplyWithMessage:(id)arg1;
- (id)newReplyWithError:(id)arg1;
- (id)newReplyWithObject:(id)arg1;
- (id)newReply;
- (void)compressWithCompressor:(id)arg1 usingType:(int)arg2 forCompatibilityWithVersion:(long long)arg3;
- (id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo)arg1;
- (id)description;

@end

