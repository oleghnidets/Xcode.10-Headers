//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFont.h"

#import "IBBinaryArchiving.h"

@class NSString;

@interface NSFont (IBBinaryArchivingAdditions) <IBBinaryArchiving>
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

