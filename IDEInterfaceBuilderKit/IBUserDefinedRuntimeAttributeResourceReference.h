//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBMediaResourceReference.h>

@interface IBUserDefinedRuntimeAttributeResourceReference : IBMediaResourceReference
{
    long long _index;
}

+ (id)referenceToVariantSet:(id)arg1 fromDocumentObject:(id)arg2 originalValue:(id)arg3 attributeIndex:(long long)arg4 transformer:(id)arg5;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (id)description;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 originalValue:(id)arg3 index:(long long)arg4 transformer:(id)arg5;

@end

