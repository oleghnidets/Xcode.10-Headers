//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDECompressedStackFrame.h"

#import "DBGDebugNavigatorContentObjectDataSource.h"

@class NSString;

@interface IDECompressedStackFrame (DBGDebugNavigatorContentObjectDataSource) <DBGDebugNavigatorContentObjectDataSource>
+ (void)registerTableCellViewsForDebugNavigatorContentDelegateWithOutlineView:(id)arg1;
- (BOOL)shouldHandleUserDirectMoveUpOrDown:(BOOL)arg1 rowCount:(long long)arg2 contentDelegate:(id)arg3 newRow:(long long *)arg4;
- (id)pasteboardStringWithDebugNavigatorContentDelegate:(id)arg1;
- (BOOL)shouldSelectItemWithPrevious:(id)arg1 next:(id)arg2 contentDelegate:(id)arg3;
- (id)createDebugNavigatorTableCellViewWithContentDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

