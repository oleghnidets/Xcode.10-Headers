//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IBUITextInputPasswordRules : NSObject <IBDocumentArchiving, IBBinaryArchiving, NSCoding, NSCopying>
{
    NSString *_passwordRulesDescriptor;
}

+ (id)passwordRulesWithDescriptor:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *passwordRulesDescriptor; // @synthesize passwordRulesDescriptor=_passwordRulesDescriptor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasswordRulesDescriptor:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

