//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding
{
    struct {
        CDUnknownBlockType _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_semantics;
    long long semanticsCount;
    long long bufferSize;
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long semanticsCount; // @synthesize semanticsCount;
- (void)dealloc;

@end

