//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGValue.h"
#import "DBGValueJSONSerialization.h"

@class NSData, NSString;

@interface DBGData : NSObject <DBGValueJSONSerialization, DBGValue>
{
    NSData *_data;
}

+ (id)withData:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)objectValue;
- (id)initWithData:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

