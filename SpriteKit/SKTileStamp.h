//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

__attribute__((visibility("hidden")))
@interface SKTileStamp : NSObject <NSSecureCoding>
{
    unsigned int _columns;
    unsigned int _rows;
    unsigned int *_tileData;
}

+ (id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int *)arg3;
+ (BOOL)supportsSecureCoding;
- (id)tileDefinitionsForTileMap:(id)arg1;
- (void)setTileData:(unsigned int *)arg1 size:(unsigned long long)arg2;
- (BOOL)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int *)arg3;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int *tileData;
@property(readonly, nonatomic) unsigned long long numberOfRows;
@property(readonly, nonatomic) unsigned long long numberOfColumns;

@end

