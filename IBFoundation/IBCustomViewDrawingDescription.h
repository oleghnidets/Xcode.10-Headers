//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSObject<IBBinaryArchivableColor>, NSString;

@interface IBCustomViewDrawingDescription : NSObject <IBBinaryArchiving>
{
    NSObject<IBBinaryArchivableColor> *_customViewOuterBorderColor;
    NSObject<IBBinaryArchivableColor> *_customViewInnerBorderColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewBackgroundColor;
    NSObject<IBBinaryArchivableColor> *_containerCustomViewTextColor;
    NSObject<IBBinaryArchivableColor> *_childlessCustomViewTextColor;
    double _borderThickness;
}

@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewTextColor; // @synthesize childlessCustomViewTextColor=_childlessCustomViewTextColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewTextColor; // @synthesize containerCustomViewTextColor=_containerCustomViewTextColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *childlessCustomViewBackgroundColor; // @synthesize childlessCustomViewBackgroundColor=_childlessCustomViewBackgroundColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *containerCustomViewBackgroundColor; // @synthesize containerCustomViewBackgroundColor=_containerCustomViewBackgroundColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *customViewInnerBorderColor; // @synthesize customViewInnerBorderColor=_customViewInnerBorderColor;
@property(retain, nonatomic) NSObject<IBBinaryArchivableColor> *customViewOuterBorderColor; // @synthesize customViewOuterBorderColor=_customViewOuterBorderColor;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

