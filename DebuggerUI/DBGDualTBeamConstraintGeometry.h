//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCNGeometry.h"

#import "DBGConstraintGeometry.h"

@class DBGInteractiveSceneView, NSColor, NSString, SCNNode;

@interface DBGDualTBeamConstraintGeometry : SCNGeometry <DBGConstraintGeometry>
{
    BOOL _horizontal;
    BOOL _useLegacyGLRenderer;
    BOOL _verticesSnapToPixelGridIn2D;
    int _appearence;
    int _style;
    DBGInteractiveSceneView *_view;
    SCNNode *_lineAnchorA;
    SCNNode *_lineAnchorB;
    double _opacity;
    NSColor *_lineColor;
    double _lineWidth;
}

+ (id)_sharedMaterialForMetalRendererWithLibrary:(id)arg1;
+ (id)_sharedMaterialForLegacyGLRenderer;
+ (id)dualTBeamGeometryWithStart:(id)arg1 end:(id)arg2 view:(id)arg3;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property double opacity; // @synthesize opacity=_opacity;
@property int style; // @synthesize style=_style;
@property BOOL verticesSnapToPixelGridIn2D; // @synthesize verticesSnapToPixelGridIn2D=_verticesSnapToPixelGridIn2D;
@property(readonly) SCNNode *lineAnchorB; // @synthesize lineAnchorB=_lineAnchorB;
@property(readonly) SCNNode *lineAnchorA; // @synthesize lineAnchorA=_lineAnchorA;
@property(readonly) __weak DBGInteractiveSceneView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property int appearence; // @synthesize appearence=_appearence;
- (void)_calculateBoundingBox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

