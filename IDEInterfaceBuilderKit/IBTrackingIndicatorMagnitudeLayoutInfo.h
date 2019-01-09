//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface IBTrackingIndicatorMagnitudeLayoutInfo : NSObject
{
    NSAttributedString *_prefixString;
    NSAttributedString *_valueString;
    struct CGRect _valueFrame;
    struct CGRect _prefixFrame;
}

@property(retain, nonatomic) NSAttributedString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSAttributedString *prefixString; // @synthesize prefixString=_prefixString;
@property(nonatomic) struct CGRect prefixFrame; // @synthesize prefixFrame=_prefixFrame;
@property(nonatomic) struct CGRect valueFrame; // @synthesize valueFrame=_valueFrame;
- (void).cxx_destruct;
- (struct CGRect *)valueFramePtr;
- (struct CGRect *)prefixFramePtr;

@end

