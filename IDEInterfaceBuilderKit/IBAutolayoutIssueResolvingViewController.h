//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

@interface IBAutolayoutIssueResolvingViewController : IDEViewController
{
    id <IBAutolayoutIssueResolvingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IBAutolayoutIssueResolvingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCancelChanges:(id)arg1;
- (void)resizeConstraints;
- (void)deleteConstraints;
- (void)confirmChanges;
- (void)didConfirmResizingChanges:(id)arg1;
- (void)didConfirmDeletionChanges:(id)arg1;
- (void)didConfirmChanges:(id)arg1;

@end

