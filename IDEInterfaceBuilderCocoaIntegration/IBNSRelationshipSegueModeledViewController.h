//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewController.h>

#import "IBDocumentArchiving.h"

@class NSArray, NSString;

@interface IBNSRelationshipSegueModeledViewController : IBNSViewController <IBDocumentArchiving>
{
    NSArray *_relationshipSegueTrackingItems;
}

@property(copy, nonatomic) NSArray *relationshipSegueTrackingItems; // @synthesize relationshipSegueTrackingItems=_relationshipSegueTrackingItems;
- (void).cxx_destruct;
- (void)ibDidRemoveChildren:(id)arg1 fromDocument:(id)arg2;
- (void)removeItem:(id)arg1 fromContainerOrDocument:(id)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1 fromContainerOrDocument:(id)arg2;
- (void)addNewItemInContainerOrDocument:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (id)ibUserHostableDocumentClasses;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)_orderedOutboundSeguesFromParent:(id)arg1;
- (id)ibOrderedOutboundItemTrackedControllers;
- (id)ibOrderedOutboundItemTrackedSegues;
- (id)_orderedOutboundSeguesFromParentOfSegue:(id)arg1;
- (unsigned long long)_indexOfSegue:(id)arg1;
- (void)ibWillResignSourceOfSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (id)_controllerForSegue:(id)arg1 atIndex:(unsigned long long *)arg2;
- (void)_addMustConnectLastUserDefinedRuntimeAttributes:(id)arg1 toDocument:(id)arg2 targeting:(id)arg3 withPriority:(float)arg4;
- (id)_attributeForItem:(id)arg1 property:(id)arg2 localizable:(BOOL)arg3;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibRelationshipSegue:(id)arg1 setDestination:(id)arg2 withErrors:(id)arg3;
- (id)ibSegueSourceToManyRelationshipKeyPaths;
- (id)ibRelationshipSegueTrackingViewProperties;
- (id)ibRelationshipSegueTrackingItemLocalizableProperties;
- (id)ibRelationshipSegueTrackingItemProperties;
- (id)ibRelationshipSegueTrackingItemsProperty;
- (id)ibDefaultItemForNewInstances;
- (id)ibRelationshipSegueTrackingItemProperty;
- (id)ibLocalChildToManyRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

