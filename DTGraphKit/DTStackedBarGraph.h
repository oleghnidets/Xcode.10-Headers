//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTGraphKit/DTBarGraph.h>

@class DTStacks, NSCache, NSMutableArray, NSMutableDictionary, NSTrackingArea;

@interface DTStackedBarGraph : DTBarGraph
{
    NSCache *_imageCache;
    DTStacks *_stacks;
    long long _calculatedYAxisWidth;
    NSTrackingArea *_trackingArea;
    NSMutableDictionary *_segmentsByXPos;
    NSMutableDictionary *_slicesByXPos;
    NSMutableArray *_stackPositions;
    double _atomicXSpacing;
}

@property double atomicXSpacing; // @synthesize atomicXSpacing=_atomicXSpacing;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)sliceRectForXPosition:(id)arg1;
- (id)barSegmentsForXPosition:(id)arg1;
- (id)infoInEvent:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)validateModel:(id)arg1;
- (id)divisionPositionsXAxis;
- (unsigned long long)numberOfEntriesThatFitRect:(struct CGRect)arg1;
- (void)clearCache;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_addEntries:(id)arg1 toStacks:(id)arg2;
- (id)_imageOfBarForEntry:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_computeEntriesAndPositions;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidMoveToSuperview;
- (id)_allXAxisStackPositions;
- (double)_scaledHeightForValue:(double)arg1 inRect:(struct CGRect)arg2 forRange:(struct DTRealRange)arg3;
- (double)_scaleToFitValuesWithAxis:(struct DTRealRange)arg1;
- (struct DTRealRange)_rangeOfSummedValuesForKeyPath:(id)arg1 inStacks:(id)arg2;
- (id)_getStacksForModel:(id)arg1;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;
- (double)calculateVerticalBorderBuffer;
- (double)calculateHorizontalBorderBuffer;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (BOOL)hasHorizontalAxisPosition;
@property(readonly) double horizontalAxisPosition;
- (BOOL)hasVerticalAxisPosition;
@property(readonly) double verticalAxisPosition;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;

@end

