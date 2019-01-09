//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGDebugNavigableItem.h>

@class NSArray, NSString;

@interface DBGThreadNavigableItem : DBGDebugNavigableItem
{
    NSString *_blockName;
    long long _compressionValue;
    NSArray *_cachedChildRepresentedObjects;
    BOOL _displayAsBlock;
    unsigned long long _displayImageType;
}

@property(nonatomic) unsigned long long displayImageType; // @synthesize displayImageType=_displayImageType;
@property(nonatomic) BOOL displayAsBlock; // @synthesize displayAsBlock=_displayAsBlock;
- (void).cxx_destruct;
- (BOOL)setCompressionValue:(long long)arg1;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (id)parentItem;
- (id)image;
- (BOOL)isLeaf;
- (id)subtitle;
- (id)name;
- (BOOL)_isRecordedThread;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end

