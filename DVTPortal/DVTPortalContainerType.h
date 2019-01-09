//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface DVTPortalContainerType : NSObject <NSCopying>
{
    BOOL _supportsAssociationService;
    BOOL _supportsPortalRegistration;
    BOOL _canBeViewedByEnterprise;
    BOOL _canBeModifiedByEnterprise;
    BOOL _canBeModifiedByMembers;
    BOOL _canBeUsedByUniversityMembers;
    BOOL _canBeUsedByUniversityTeams;
    BOOL _canBeUsedByFreeUsers;
    NSString *_identifier;
    NSString *_name;
    NSString *_requiredPrefix;
    Class _containerImplementingClass;
    NSString *_portalFeatureIdentifier;
    NSString *_userDescription;
    NSString *_entitlement;
}

+ (id)portalContainerTypeWithRequiredPrefix:(id)arg1;
+ (id)identifierToRequiredPrefix;
+ (id)portalContainerTypeWithIdentifier:(id)arg1;
+ (id)identifierToContainerType;
+ (id)portalContainerTypeWithProfileFeatureIdentifier:(id)arg1;
+ (id)portalFeatureIdentifierToContainerType;
+ (id)portalContainerTypesRequiredPrefixes;
+ (id)portalContainerTypes;
@property(readonly, nonatomic) BOOL canBeUsedByFreeUsers; // @synthesize canBeUsedByFreeUsers=_canBeUsedByFreeUsers;
@property(readonly, nonatomic) BOOL canBeUsedByUniversityTeams; // @synthesize canBeUsedByUniversityTeams=_canBeUsedByUniversityTeams;
@property(readonly, nonatomic) BOOL canBeUsedByUniversityMembers; // @synthesize canBeUsedByUniversityMembers=_canBeUsedByUniversityMembers;
@property(readonly, nonatomic) BOOL canBeModifiedByMembers; // @synthesize canBeModifiedByMembers=_canBeModifiedByMembers;
@property(readonly, nonatomic) BOOL canBeModifiedByEnterprise; // @synthesize canBeModifiedByEnterprise=_canBeModifiedByEnterprise;
@property(readonly, nonatomic) BOOL canBeViewedByEnterprise; // @synthesize canBeViewedByEnterprise=_canBeViewedByEnterprise;
@property(readonly, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property(readonly, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly, nonatomic) NSString *portalFeatureIdentifier; // @synthesize portalFeatureIdentifier=_portalFeatureIdentifier;
@property BOOL supportsPortalRegistration; // @synthesize supportsPortalRegistration=_supportsPortalRegistration;
@property BOOL supportsAssociationService; // @synthesize supportsAssociationService=_supportsAssociationService;
@property(retain) Class containerImplementingClass; // @synthesize containerImplementingClass=_containerImplementingClass;
@property(readonly, nonatomic) NSString *requiredPrefix; // @synthesize requiredPrefix=_requiredPrefix;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)containersFromProfile:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 requiredPrefix:(id)arg3 containerImplementingClass:(Class)arg4 supportsAssociationService:(BOOL)arg5 supportsPortalRegistration:(BOOL)arg6 canBeModifiedByMembers:(BOOL)arg7 canBeViewedByEnterprise:(BOOL)arg8 canBeModifiedByEnterprise:(BOOL)arg9 canBeUsedByUniversityMembers:(BOOL)arg10 canBeUsedByUniversityTeams:(BOOL)arg11 canBeUsedByFreeUsers:(BOOL)arg12 portalFeatureIdentifier:(id)arg13 userDescription:(id)arg14 entitlement:(id)arg15;

@end

