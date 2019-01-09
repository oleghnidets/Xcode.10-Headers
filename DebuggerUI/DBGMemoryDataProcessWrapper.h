//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGDebugNavigatorContentObjectDataSource.h"
#import "DBGDebugNavigatorContentObjectDelegate.h"
#import "IDEDebugNavigableModel.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEDebugProcess, IDEFileReference, IDELaunchSession, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface DBGMemoryDataProcessWrapper : NSObject <DBGDebugNavigatorContentObjectDataSource, DBGDebugNavigatorContentObjectDelegate, IDEDebugNavigableModel, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEDebugProcess *_process;
    BOOL _useProcessIconAndName;
}

+ (id)keyPathsForValuesAffectingMemoryDatas;
+ (void)registerTableCellViewsForDebugNavigatorContentDelegateWithOutlineView:(id)arg1;
@property(readonly) IDEDebugProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (void)useProcessIconAndName;
@property(readonly) NSArray *memoryDatas;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithProcess:(id)arg1;
- (id)tokenStringForDebugNavigatorContent;
- (id)createDebugNavigatorTableCellViewWithContentDelegate:(id)arg1;
- (BOOL)supportsUserInterfaceCopyActionWithContentDelegate:(id)arg1;
- (BOOL)supportsUserInterfaceDeleteActionWithContentDelegate:(id)arg1;
- (void)handleUserDirectDeleteWithContentDelegate:(id)arg1;
- (void)openSelectedObjectWithEventType:(unsigned long long)arg1 contentDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

