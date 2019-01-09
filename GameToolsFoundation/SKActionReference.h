//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSString;

@interface SKActionReference : GTFActionModel
{
    NSString *_referenceName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *referenceName; // @synthesize referenceName=_referenceName;
- (void).cxx_destruct;
- (id)getSKAction;
@property(readonly, nonatomic) NSString *referenceFilename;
- (id)actionInfoString;
- (id)actionColor;
- (id)actionName;
- (long long)actionType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceName:(id)arg1;

@end
