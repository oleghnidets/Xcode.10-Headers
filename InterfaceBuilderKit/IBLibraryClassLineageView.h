//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSComboBoxDataSource.h"

@class NSArray, NSComboBox, NSMutableIndexSet, NSString;

@interface IBLibraryClassLineageView : NSView <NSComboBoxDataSource>
{
    NSMutableIndexSet *rowsWithBadges;
    NSString *tentativeEditedValue;
    long long selectedBadgeRow;
    NSComboBox *editingView;
    long long selectedRow;
    long long editingRow;
    NSString *message;
    NSArray *labels;
    id delegate;
    struct _IBLibraryClassLineageViewFlags flags;
}

@property(retain, nonatomic) NSString *tentativeEditedValue; // @synthesize tentativeEditedValue;
@property(copy, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)cancelOperation:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)didClickBadge:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRowInRect:(struct CGRect)arg1 label:(id)arg2 hasArrow:(BOOL)arg3 context:(struct CGContext *)arg4 selected:(BOOL)arg5 bordered:(BOOL)arg6 badge:(id)arg7 badgeIsSelected:(BOOL)arg8;
- (BOOL)rowCanBeSelected:(unsigned long long)arg1;
- (long long)rowIndexForPoint:(struct CGPoint)arg1;
- (BOOL)rowShouldBeBordered:(unsigned long long)arg1;
- (id)badgeColorIfBadgeIsSelected:(BOOL)arg1 rowSelected:(BOOL)arg2;
- (id)badgeForRow:(unsigned long long)arg1;
- (struct CGRect)badgeContentRectForRow:(unsigned long long)arg1;
- (struct CGRect)badgeRectForRow:(unsigned long long)arg1;
- (id)attributedLabel:(id)arg1 selected:(BOOL)arg2 bordered:(BOOL)arg3;
- (id)labelAttributes:(BOOL)arg1 bordered:(BOOL)arg2;
- (id)labelColorIfSelected:(BOOL)arg1 bordered:(BOOL)arg2;
- (id)shadowForRowIfSelected:(BOOL)arg1;
- (double)alphaForRow:(unsigned long long)arg1;
- (struct CGRect)rectForRow:(unsigned long long)arg1;
- (double)yOriginForRowAtIndex:(unsigned long long)arg1;
- (double)neededHeight;
- (double)effectiveMessageHeight;
- (struct CGRect)messageRect;
- (id)messageAttributes;
- (BOOL)validateTentativeEditedValue:(id *)arg1 error:(id *)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)confirmEditing;
- (void)cancelEditing;
- (void)editRow:(unsigned long long)arg1;
- (BOOL)isEditing;
- (void)reloadData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

