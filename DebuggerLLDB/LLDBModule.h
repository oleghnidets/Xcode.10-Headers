//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBModule.h"

@class NSString;

@interface LLDBModule : NSObject <DBGSBModule>
{
    struct SBModule {
        struct shared_ptr<lldb_private::Module> m_opaque_sp;
    } _module;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)GetNumCompileUnits;
- (const char *)GetUUIDString;
- (_Bool)IsValid;
- (id)initWithSBModule:(const struct SBModule *)arg1;
- (id)FindSection:(const char *)arg1;
- (_Bool)SetPlatformFileSpec:(id)arg1;
- (id)GetFileSpec;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
