//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKSceneNavigating.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSMutableArray, NSNull, NSObject<SKSceneNavigating>, NSString, NSURL, SKSceneDocument, _TtC13DVTFoundation9DVTSymbol;

@interface SKSceneNavigableBase : NSObject <SKSceneNavigating>
{
    NSMutableArray *_internalChildren;
    struct NSObject *_greatestAncestorReference;
    SKSceneDocument *_document;
    struct NSObject *_parent;
}

+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_isMajorGroup;
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingChildren;
@property(nonatomic) __weak NSObject<SKSceneNavigating> *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) __weak SKSceneDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) SKSceneNavigableBase *greatestReferenceAncestor;
@property(readonly, nonatomic) BOOL isReferenced;
- (struct NSObject *)childFromIndexPath:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (void)_moveChild:(id)arg1 toParent:(id)arg2;
- (void)moveChild:(id)arg1 toParent:(id)arg2;
- (void)_removeChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)_moveChild:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveChild:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addChildren:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)_addChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)changeChildrenWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isValidChildClass:(Class)arg1;
@property(readonly, nonatomic) BOOL isRoot;
@property(readonly, nonatomic) BOOL isLeaf;
@property(readonly, nonatomic) NSArray *internalChildren;
@property(readonly, nonatomic) NSArray *visibleChildren;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) BOOL isNode;
@property(readonly, nonatomic) BOOL isCategory;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) NSString *filterName;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
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

