//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPortalProgram, DVTPortalTeam, NSSet, NSString;

@interface DVTPortalMembership : NSObject
{
    NSString *_portalID;
    NSString *_membershipProductId;
    DVTPortalProgram *_portalProgram;
    DVTPortalTeam *_team;
}

@property(nonatomic) __weak DVTPortalTeam *team; // @synthesize team=_team;
@property(retain, nonatomic) DVTPortalProgram *portalProgram; // @synthesize portalProgram=_portalProgram;
@property(readonly, copy, nonatomic) NSString *membershipProductId; // @synthesize membershipProductId=_membershipProductId;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *portalPrograms;
@property(readonly, nonatomic) NSSet *platforms;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

