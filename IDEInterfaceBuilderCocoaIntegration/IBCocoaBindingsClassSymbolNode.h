//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IBCocoaBindingsClassSymbolNode : NSObject
{
    NSString *_className;
    IBCocoaBindingsClassSymbolNode *_parentNode;
    NSString *_parentKey;
}

@property(copy) NSString *parentKey; // @synthesize parentKey=_parentKey;
@property(retain) IBCocoaBindingsClassSymbolNode *parentNode; // @synthesize parentNode=_parentNode;
@property(copy) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)initWithClassName:(id)arg1 parentNode:(id)arg2 parentKey:(id)arg3;

@end

