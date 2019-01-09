//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBValue.h"

@class NSString;

@interface LLDBValue : NSObject <DBGSBValue>
{
    struct SBValue {
        struct shared_ptr<ValueImpl> m_opaque_sp;
    } _value;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)GetValueAsSigned:(long long)arg1;
- (unsigned int)GetNumChildren;
- (_Bool)MightHaveChildren;
- (_Bool)IsInScope;
- (const char *)GetObjectDescription;
- (const char *)GetSummary;
- (_Bool)GetValueDidChange;
- (int)GetValueType;
- (const char *)GetValue;
- (void)SetFormat:(int)arg1;
- (int)GetFormat;
- (const char *)GetTypeName;
- (const char *)GetName;
- (void)Clear;
- (_Bool)IsValid;
- (id)initWithSBValue:(const struct SBValue *)arg1;
- (unsigned long long)GetValueAsUnsigned:(unsigned long long)arg1;
- (id)AddressOf;
- (id)GetData;
- (_Bool)GetDescription:(id)arg1;
- (id)GetChildAtIndex:(unsigned int)arg1 use_dynamic:(int)arg2 can_create_synthetic:(_Bool)arg3;
- (id)GetChildMemberWithName:(const char *)arg1 use_dynamic:(int)arg2;
- (_Bool)SetValueFromCString:(const char *)arg1 error:(id)arg2;
- (_Bool)GetExpressionPath:(id)arg1;
- (id)GetType;
- (id)GetStaticValue;
- (const char *)GetSummary:(id)arg1 options:(id)arg2;
- (id)GetError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

