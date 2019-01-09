//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLNamed.h"

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed>
{
    MDLMaterialProperty *_input;
    MDLMaterialProperty *_output;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak MDLMaterialProperty *output; // @synthesize output=_output;
@property(readonly, nonatomic) __weak MDLMaterialProperty *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)initWithOutput:(id)arg1 input:(id)arg2;

@end
