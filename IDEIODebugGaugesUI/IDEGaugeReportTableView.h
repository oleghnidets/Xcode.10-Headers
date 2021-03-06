//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTableView.h"

@class NSLayoutConstraint;

@interface IDEGaugeReportTableView : DVTTableView
{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_widthConstraint;
    double _emptyContentViewMinY;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_needEmptyContentString;
- (void)addTableColumnsForDescriptors:(const CDStruct_8107d3bb *)arg1 count:(unsigned long long)arg2;
- (void)addTableColumnForDescriptor:(const CDStruct_8107d3bb *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_dvt_commonInit;

@end

