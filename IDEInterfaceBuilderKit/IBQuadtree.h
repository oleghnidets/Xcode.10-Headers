//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IBQuadtree : NSObject
{
    struct GKCQuadTree<NSObject> *_cQuadTree;
}

+ (id)quadtreeWithBoundingRect:(struct CGRect)arg1 minimumCellSize:(float)arg2;
- (BOOL)removeElement:(id)arg1;
- (id)indexedElementsForRect:(struct CGRect)arg1;
- (id)indexedElementsForPoint:(struct CGPoint)arg1;
- (void)addElement:(id)arg1 withRect:(struct CGRect)arg2;
- (void)addElement:(id)arg1 withPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithBoundingRect:(struct CGRect)arg1 minimumCellSize:(float)arg2;
- (id)init;

@end

