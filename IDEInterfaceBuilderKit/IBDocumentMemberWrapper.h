//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IBDocumentMemberMutationDelegate.h"
#import "IDEInspectorMatching.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IBDocument, IBDocumentMemberLocation, IBMemberID, IDEFileReference, NSArray, NSImage, NSMutableSet, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IBDocumentMemberWrapper : NSObject <IBDocumentMemberMutationDelegate, IDEInspectorMatching, DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableSet *_registeredDidChangeBlocks;
    IBMemberID *_cachedMemberIDValue;
    NSObject *_member;
    IBDocument *_document;
}

+ (void)initialize;
@property(retain) IBDocument *document; // @synthesize document=_document;
@property(readonly) NSObject *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (id)acceptDrop:(id)arg1 childIndex:(long long)arg2;
- (unsigned long long)dragOperationForDropInfo:(id)arg1 proposedIndex:(long long)arg2 acceptingIndex:(long long *)arg3 isAlternativeItem:(BOOL)arg4;
- (void)document:(id)arg1 mayHaveTurnedMemberOnOrOff:(id)arg2;
- (void)document:(id)arg1 didChangeRelationshipKeyPath:(id)arg2 forMember:(id)arg3;
- (void)document:(id)arg1 didChangeKeyPath:(id)arg2 forMember:(id)arg3;
- (void)document:(id)arg1 didRemoveChildObject:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildObject:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willRemoveChildObject:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 willAddChildObject:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willRemoveMember:(id)arg2;
- (void)refreshDisplayValues;
- (void)didFinishChangingChildWrappersToConsistentState;
- (id)registerChildWrappersDidChangeBlock:(CDUnknownBlockType)arg1;
- (void)unregisterDidChangeBlock:(CDUnknownBlockType)arg1;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (BOOL)wrapsNormalDocumentObject;
@property(readonly, getter=isInstalled) BOOL installed;
@property(readonly) NSImage *image;
@property(readonly) NSString *name;
@property(readonly, copy, nonatomic) NSArray *childWrappers;
@property(readonly) IBDocumentMemberLocation *navigableDocumentLocation;
@property(readonly) NSString *navigableGroupIdentifier;
- (id)descriptionWithChildren;
@property(readonly, copy) NSString *description;
@property(readonly) IBDocumentMemberLocation *documentLocation;
@property(readonly) id identifier;
@property(readonly) IBMemberID *memberID;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)primitiveInvalidate;
- (id)initWithMember:(id)arg1 document:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
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
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

