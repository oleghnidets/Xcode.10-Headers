//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, XCMutableSourceTextLineArray;

@interface XCSourceTextBuffer : NSObject
{
    XCMutableSourceTextLineArray *_lines;
    BOOL _usesTabsForIndentation;
    NSString *_contentUTI;
    long long _tabWidth;
    long long _indentationWidth;
    NSDictionary *_dictionaryRepresentation;
}

@property(readonly, copy) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(readonly) NSMutableArray *lines; // @synthesize lines=_lines;
@property(readonly) BOOL usesTabsForIndentation; // @synthesize usesTabsForIndentation=_usesTabsForIndentation;
@property(readonly) long long indentationWidth; // @synthesize indentationWidth=_indentationWidth;
@property(readonly) long long tabWidth; // @synthesize tabWidth=_tabWidth;
@property(readonly, copy) NSString *contentUTI; // @synthesize contentUTI=_contentUTI;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *dictionaryRepresentationWithOnlyChanges;
- (id)_computeRawSelectionRanges;
@property(copy) NSString *completeBuffer;
@property(readonly) NSMutableArray *selections;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithContentUTI:(id)arg1 tabWidth:(long long)arg2 indentationWidth:(long long)arg3 usesTabsForIndentation:(BOOL)arg4 selections:(id)arg5 completeBuffer:(id)arg6;

@end

