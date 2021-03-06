//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"

@class NSString;

@interface IBGLKView : IBUIView <IBDocumentArchiving>
{
    BOOL _enableSetNeedsDisplay;
    int _drawableColorFormat;
    int _drawableDepthFormat;
    int _drawableStencilFormat;
    int _drawableMultisample;
}

+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property BOOL enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay;
@property int drawableMultisample; // @synthesize drawableMultisample=_drawableMultisample;
@property int drawableStencilFormat; // @synthesize drawableStencilFormat=_drawableStencilFormat;
@property int drawableDepthFormat; // @synthesize drawableDepthFormat=_drawableDepthFormat;
@property int drawableColorFormat; // @synthesize drawableColorFormat=_drawableColorFormat;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (id)ibDesignableContentView;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

