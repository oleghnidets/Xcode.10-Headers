//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IBCocoaBindingsCompletionItem : NSObject
{
    BOOL _shouldAppearInSuggestions;
    NSString *_displayText;
    NSString *_displayType;
}

@property BOOL shouldAppearInSuggestions; // @synthesize shouldAppearInSuggestions=_shouldAppearInSuggestions;
@property(readonly) NSString *displayType; // @synthesize displayType=_displayType;
@property(readonly) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2 shouldAppearInSuggestions:(BOOL)arg3;

@end

