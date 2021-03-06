//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBOffsetWrapper, IBUIFontDescription, NSColor<IBBinaryArchiving>, NSString;

@interface IBUITextAttributes : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    IBUIFontDescription *_fontDescription;
    NSColor<IBBinaryArchiving> *_textColor;
    NSColor<IBBinaryArchiving> *_textShadowColor;
    IBOffsetWrapper *_textShadowOffset;
}

@property(readonly, copy, nonatomic) IBOffsetWrapper *textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(readonly, copy, nonatomic) NSColor<IBBinaryArchiving> *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(readonly, copy, nonatomic) NSColor<IBBinaryArchiving> *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
- (void).cxx_destruct;
- (id)traitStoragesWithObjectID:(id)arg1 keyPath:(id)arg2;
- (BOOL)isEmpty;
- (id)textAttributesWithTextShadowOffset:(id)arg1;
- (id)textAttributesWithTextShadowColor:(id)arg1;
- (id)textAttributesWithTextColor:(id)arg1;
- (id)textAttributesWithFontDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDictionary;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontDescription:(id)arg1 textColor:(id)arg2 textShadowColor:(id)arg3 textShadowOffset:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

