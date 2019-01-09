//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMenu, NSString, NSTableColumn, XDTableView;

@protocol XDTableViewTableColumnProvider <NSObject>
- (NSString *)tableView:(XDTableView *)arg1 menuTitleForTableColumnIdentifier:(id)arg2;
- (NSTableColumn *)tableView:(XDTableView *)arg1 columnForTableColumnIdentifier:(id)arg2;
- (NSArray *)allowedTableColumnIdentifiersForTableView:(XDTableView *)arg1;
- (NSArray *)defaultTableColumnIdentifiersForTableView:(XDTableView *)arg1;

@optional
- (void)tableView:(XDTableView *)arg1 didSynchronizeTableHeaderContextMenu:(NSMenu *)arg2;
- (void)tableView:(XDTableView *)arg1 willSynchronizeTableHeaderContextMenu:(NSMenu *)arg2;
- (void)tableView:(XDTableView *)arg1 didRemoveTableColumn:(NSTableColumn *)arg2;
- (void)tableView:(XDTableView *)arg1 willAddTableColumn:(NSTableColumn *)arg2;
@end
