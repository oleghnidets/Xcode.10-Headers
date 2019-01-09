//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IBWKPreferences : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    BOOL _javaScriptEnabled;
    BOOL _javaScriptCanOpenWindowsAutomatically;
    double _minimumFontSize;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(nonatomic) BOOL javaScriptCanOpenWindowsAutomatically; // @synthesize javaScriptCanOpenWindowsAutomatically=_javaScriptCanOpenWindowsAutomatically;
@property(nonatomic) BOOL javaScriptEnabled; // @synthesize javaScriptEnabled=_javaScriptEnabled;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

