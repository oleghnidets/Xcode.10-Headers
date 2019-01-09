//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DBGSBBreakpoint <NSObject>
- (void)SetCallbackToNull;
- (void)SetCallbackWithBaton:(void *)arg1;
- (id <DBGSBBreakpointLocation>)GetLocationAtIndex:(unsigned int)arg1;
- (id <DBGSBBreakpointLocation>)FindLocationByID:(int)arg1;
- (unsigned long long)GetNumLocations;
- (_Bool)IsEnabled;
- (void)SetEnabled:(_Bool)arg1;
- (_Bool)GetDescription:(id <DBGSBStream>)arg1;
- (void)SetCondition:(const char *)arg1;
- (void)SetIgnoreCount:(unsigned int)arg1;
- (unsigned int)GetHitCount;
- (int)GetID;
- (_Bool)IsValid;
@end

