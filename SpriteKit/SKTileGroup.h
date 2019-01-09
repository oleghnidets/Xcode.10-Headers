//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString, SKTileSet;

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_rules;
    unsigned long long _type;
    NSString *_name;
    SKTileSet *_parentSet;
}

+ (id)emptyTileGroup;
+ (id)tileGroupWithRules:(id)arg1;
+ (id)tileGroupWithTileDefinition:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak SKTileSet *parentSet; // @synthesize parentSet=_parentSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (id)initWithRules:(id)arg1;
- (id)initWithTileDefinition:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (BOOL)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long type;
- (void)setRuleParentPointers;
@property(copy, nonatomic) NSArray *rules;

@end

