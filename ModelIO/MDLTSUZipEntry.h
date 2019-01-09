//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MDLTSUZipEntry : NSObject
{
    BOOL _compressed;
    unsigned short _nameLength;
    unsigned short _extraFieldsLength;
    unsigned int _CRC;
    NSString *_name;
    NSDate *_lastModificationDate;
    unsigned long long _size;
    NSString *_collapsedName;
    unsigned long long _compressedSize;
    unsigned long long _offset;
    unsigned long long _fileHeaderLength;
}

@property(nonatomic) unsigned long long fileHeaderLength; // @synthesize fileHeaderLength=_fileHeaderLength;
@property(nonatomic) unsigned short extraFieldsLength; // @synthesize extraFieldsLength=_extraFieldsLength;
@property(nonatomic) unsigned short nameLength; // @synthesize nameLength=_nameLength;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(copy, nonatomic) NSString *collapsedName; // @synthesize collapsedName=_collapsedName;
@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

