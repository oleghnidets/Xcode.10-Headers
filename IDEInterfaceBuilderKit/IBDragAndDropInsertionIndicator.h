//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IBDragAndDropInsertionIndicator : NSObject
{
    id <IBDragAndDropInsertionIndicatorDelegate> _delegate;
}

@property __weak id <IBDragAndDropInsertionIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawInsertionIndicatorInView:(id)arg1;
- (struct CGRect)dragInsertionIndicatorInvalidationRectInView:(id)arg1;
- (id)dragInsertionIndicatorPathInCoordinateSpaceOfView:(id)arg1;
- (id)dragInsertionIndicatorPath;
- (long long)orderedRelationGrowthDirection;
- (id)initWithDelegate:(id)arg1;

@end

