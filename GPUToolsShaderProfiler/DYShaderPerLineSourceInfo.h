//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface DYShaderPerLineSourceInfo : NSObject <NSSecureCoding, NSCopying>
{
    int _lineIndex;
    NSString *_sourcePath;
    NSArray *_binaryRangeInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *binaryRangeInfo; // @synthesize binaryRangeInfo=_binaryRangeInfo;
@property(nonatomic) int lineIndex; // @synthesize lineIndex=_lineIndex;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allDiassemblyInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

