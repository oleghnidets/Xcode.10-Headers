//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVT_VMUClassInfo, NSArray, NSString;

@interface DVT_VMUFieldInfo : NSObject
{
    NSString *_ivarName;
    NSString *_typeName;
    unsigned int _scanType;
    unsigned int _offset;
    unsigned int _size;
    unsigned int _scannable;
    unsigned int _stride;
    unsigned int _flags;
    DVT_VMUClassInfo *_destinationLayout;
    NSArray *_subFieldArray;
}

@property(readonly, nonatomic) NSArray *subFieldArray; // @synthesize subFieldArray=_subFieldArray;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly) unsigned int stride; // @synthesize stride=_stride;
@property(readonly) unsigned int scannableSize; // @synthesize scannableSize=_scannable;
@property(readonly) unsigned int size; // @synthesize size=_size;
@property(readonly) unsigned int offset; // @synthesize offset=_offset;
@property(readonly) unsigned int scanType; // @synthesize scanType=_scanType;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, nonatomic) NSString *ivarName; // @synthesize ivarName=_ivarName;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionOfFieldValueInObjectMemory:(void *)arg1 scanner:(id)arg2;
@property(readonly, nonatomic) DVT_VMUClassInfo *destinationLayout;
- (void)_setDestinationLayout:(id)arg1;
- (void)_setStride:(unsigned int)arg1;
- (void)_setScannableSize:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL isValueField;
@property(readonly, nonatomic) BOOL isKeyField;
@property(readonly, nonatomic) BOOL isValuesPointer;
@property(readonly, nonatomic) BOOL isKeysPointer;
@property(readonly, nonatomic) BOOL isStorageBitmapPointer;
@property(readonly, nonatomic) BOOL isArrayEntries;
@property(readonly, nonatomic) BOOL isArraySize;
@property(readonly, nonatomic) BOOL isStorageImplPointer;
@property(readonly, nonatomic) BOOL isByref;
@property(readonly, nonatomic) BOOL isCapture;
@property(readonly) unsigned int bitfieldWidth;
- (void)_setFlags:(unsigned int)arg1;
- (void)_setSize:(unsigned int)arg1;
- (void)_setOffset:(unsigned int)arg1;
- (void)_setScanType:(unsigned int)arg1;
- (void)_setTypeName:(id)arg1;
- (void)_setIvarName:(id)arg1;
- (id)fullIvarNameAtOffset:(unsigned int)arg1;
- (id)_fullIvarNameAtOffset:(unsigned int)arg1 leafOffset:(unsigned int *)arg2 depth:(unsigned int)arg3;
- (id)getLeafFieldAtOffset:(unsigned int)arg1 leafOffset:(unsigned int *)arg2;
- (id)_getFieldAtOffset:(unsigned int)arg1;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3 returnedDestinationLayoutClassInfoIndex:(unsigned int *)arg4;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5;
- (id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithObjcIvar:(struct objc_ivar *)arg1 size:(unsigned int)arg2 isARC:(BOOL)arg3 is64Bit:(BOOL)arg4;
- (id)mutableCopy;
@property(readonly) NSString *typedDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

