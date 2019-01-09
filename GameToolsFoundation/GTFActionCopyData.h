//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString;

@interface GTFActionCopyData : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    NSMutableArray *_allActions;
    NSMutableArray *_independentActions;
    NSArray *_groups;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)actionCopyDataForTimeline:(id)arg1 withActionsSubset:(id)arg2;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSArray *allActions; // @synthesize allActions=_allActions;
@property(readonly, nonatomic) NSArray *independentActions; // @synthesize independentActions=_independentActions;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForTimeline:(id)arg1 withActionsSubset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

