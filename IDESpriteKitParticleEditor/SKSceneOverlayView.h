//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSMutableArray, NSMutableOrderedSet, NSString, SKScene, SKSceneNavigableRoot, SKView;

@interface SKSceneOverlayView : NSView <DVTInvalidation>
{
    NSMutableOrderedSet *_selectedNodes;
    struct vector<SKManipulationHandleSet, std::__1::allocator<SKManipulationHandleSet>> _nodeHandles;
    NSMutableOrderedSet *_selectedObjects;
    struct vector<SKManipulationHandleSet, std::__1::allocator<SKManipulationHandleSet>> _objectHandles;
    NSMutableArray *_selectedGraphs;
    struct CGContext *_ctx;
    struct map<std::__1::basic_string<char>, CGImage *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CGImage *>>> _cgImageCache;
    struct SKColorPalette _colorPalette;
    unsigned long long _colorMode;
    double _adjustedXAxisGridSpacing;
    double _adjustedYAxisGridSpacing;
    BOOL _enabled;
    BOOL _showHandlesForSelection;
    SKView *_skView;
    SKSceneNavigableRoot *_rootItem;
    NSArray *_selection;
    NSArray *_snapLines;
    double _baselineXAxisGridSpacing;
    double _baselineYAxisGridSpacing;
    double _minimumXAxisViewSpacing;
    double _minimumYAxisViewSpacing;
    NSView *_secondaryView;
    SKScene *_scene;
    struct CGRect _selectionRect;
}

+ (void)initialize;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(nonatomic) double minimumYAxisViewSpacing; // @synthesize minimumYAxisViewSpacing=_minimumYAxisViewSpacing;
@property(nonatomic) double minimumXAxisViewSpacing; // @synthesize minimumXAxisViewSpacing=_minimumXAxisViewSpacing;
@property(nonatomic) double baselineYAxisGridSpacing; // @synthesize baselineYAxisGridSpacing=_baselineYAxisGridSpacing;
@property(nonatomic) double baselineXAxisGridSpacing; // @synthesize baselineXAxisGridSpacing=_baselineXAxisGridSpacing;
@property(retain, nonatomic) NSArray *snapLines; // @synthesize snapLines=_snapLines;
@property(nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
@property(retain, nonatomic) NSArray *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) SKSceneNavigableRoot *rootItem; // @synthesize rootItem=_rootItem;
@property(retain, nonatomic) SKView *skView; // @synthesize skView=_skView;
@property(nonatomic) BOOL showHandlesForSelection; // @synthesize showHandlesForSelection=_showHandlesForSelection;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)_drawSceneRulers;
- (void)_drawSceneGrid;
- (struct CGImage *)_overlayImageForNodeItem:(id)arg1;
- (void)_releaseCGImageCache;
- (struct CGImage *)_cachedCGImageNamed:(id)arg1;
- (void)_drawOutlineForTileMayLayers;
- (void)_drawSceneAnchorPoint;
- (void)_drawSceneBounds;
- (unsigned long long)_currentColorMode;
- (void)_drawFrustumForCamera:(id)arg1;
- (void)_drawSnapLines;
- (void)_drawSelectionRect;
- (void)_drawOverlayForNode:(id)arg1;
- (void)_drawNodeOverlayImages;
- (void)_drawAnchorPointHandleForItem:(struct NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (void)_drawRotationHandleForItem:(struct NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (void)_drawNavigableMeshes;
- (void)_drawHandleAt:(struct CGPoint)arg1 forItem:(struct NSObject *)arg2;
- (void)_drawScaleHandlesForItem:(struct NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (void)_drawBoundsBoxForItem:(struct NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (void)_drawMultiSelectionBounds;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)detachSecondaryView;
- (void)attachSecondaryView:(id)arg1;
- (const struct SKManipulationHandleSet *)handleSetForItem:(struct NSObject *)arg1;
- (struct SKSceneOverlayHandleInfo)handleAtPoint:(struct CGPoint)arg1;
- (void)_generateManipulationHandles;
- (void)_generateObjectManipulationHandles;
- (void)_generateNodeManipulationHandles;
- (void)primitiveInvalidate;
- (void)awakeFromNib;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(readonly, nonatomic) double adjustedYAxisGridSpacing;
@property(readonly, nonatomic) double adjustedXAxisGridSpacing;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

