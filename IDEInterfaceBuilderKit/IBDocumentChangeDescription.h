//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBConnection, NSString;

@interface IBDocumentChangeDescription : NSObject
{
    id _value;
    NSString *_keyPath;
    int _type;
    NSObject *_member;
}

+ (id)descriptionOfMember:(id)arg1 changedKeyPath:(id)arg2 fromValue:(id)arg3;
+ (id)descriptionOfMemberChangedAccessControl:(id)arg1;
+ (id)descriptionOfObjectReorderedConnections:(id)arg1;
+ (id)descriptionOfObject:(id)arg1 lostConnection:(id)arg2;
+ (id)descriptionOfObject:(id)arg1 gainedConnection:(id)arg2;
@property(readonly) NSObject *member; // @synthesize member=_member;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly) BOOL isMemberChangedAccessControl;
@property(readonly) BOOL isObjectReorderedConnection;
@property(readonly) BOOL isObjectGainedConnection;
@property(readonly) BOOL isObjectLostConnection;
@property(readonly) BOOL isMemberChangedKeyPath;
@property(readonly) id oldPropertyValue;
@property(readonly) NSString *changedKeyPath;
@property(readonly) IBConnection *gainedOrLostConnection;
@property(readonly) IBConnection *lostConnection;
@property(readonly) IBConnection *gainedConnection;
- (id)initWithType:(int)arg1 member:(id)arg2 keyPath:(id)arg3 value:(id)arg4;

@end

