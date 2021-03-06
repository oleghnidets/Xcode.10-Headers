//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DebugHierarchyProperty : NSObject
{
    NSString *_name;
    NSString *_runtimeTypeName;
    NSString *_logicalType;
    NSString *_format;
    long long _visibility;
    long long _options;
}

@property long long options; // @synthesize options=_options;
@property long long visibility; // @synthesize visibility=_visibility;
@property(retain) NSString *format; // @synthesize format=_format;
@property(retain) NSString *logicalType; // @synthesize logicalType=_logicalType;
@property(retain) NSString *runtimeTypeName; // @synthesize runtimeTypeName=_runtimeTypeName;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (BOOL)isEditable;
- (id)initWithName:(id)arg1 runtimeTypeName:(id)arg2;
- (id)initWithPropertyDescription:(id)arg1;

@end

