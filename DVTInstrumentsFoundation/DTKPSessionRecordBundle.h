//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTKPSessionRecordEnumerator, DTTapMemo;

@interface DTKPSessionRecordBundle : NSObject
{
    DTKPSessionRecordEnumerator *_enumerator;
    DTTapMemo *_memo;
}

@property(retain, nonatomic) DTTapMemo *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) DTKPSessionRecordEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (void).cxx_destruct;

@end

