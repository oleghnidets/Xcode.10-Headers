//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRXMLParserDelegate.h"

@class NSDate, NSString;

@interface XREngineeringTypeDefinitions : NSObject <XRXMLParserDelegate>
{
    CDUnknownBlockType _etypeDefHandler;
}

+ (id)implementationClassByEngineeringTypeMnemonic;
+ (id)descriptionForImplClass:(unsigned char)arg1;
+ (void)announceUsageOfEnumString:(id)arg1 context:(id)arg2;
+ (BOOL)registerEngineeringTypes:(id)arg1;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didFinishParsingElement:(id)arg2;
- (void)enumerateEngineeringTypeDefs:(CDUnknownBlockType)arg1;
- (id)definitionXMLContents;
- (id)checksum;
@property(readonly, nonatomic) NSDate *lastModificationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

