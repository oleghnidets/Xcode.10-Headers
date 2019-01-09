//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGValue.h"
#import "DBGValueJSONSerialization.h"

@class NSString;

@interface DBGOffset : NSObject <DBGValueJSONSerialization, DBGValue>
{
    struct CGPoint _offset;
}

+ (id)withOffset:(struct CGPoint)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property struct CGPoint offset; // @synthesize offset=_offset;
- (id)objectValue;
- (id)initWithOffset:(struct CGPoint)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

