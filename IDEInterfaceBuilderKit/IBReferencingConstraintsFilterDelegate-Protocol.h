//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBReferencingConstraintsFilter;

@protocol IBReferencingConstraintsFilterDelegate <NSObject>
- (void)constraintFilterViewWillDeleteSelectedConstraints:(IBReferencingConstraintsFilter *)arg1;
- (void)constraintFilterViewWillChangeConstraintAttributeSelection:(IBReferencingConstraintsFilter *)arg1;
- (void)constraintFilterViewWillChangeHighlighted:(IBReferencingConstraintsFilter *)arg1 shouldHighlight:(BOOL)arg2;
@end

