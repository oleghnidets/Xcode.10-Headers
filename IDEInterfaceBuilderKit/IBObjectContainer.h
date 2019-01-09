//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBGroupDelegate.h"
#import "NSCoding.h"

@class IBMutableIdentityDictionary, IBObjectRecord, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface IBObjectContainer : NSObject <IBGroupDelegate, NSCoding>
{
    IBMutableIdentityDictionary *_connectionsBySource;
    IBMutableIdentityDictionary *_connectionsByDestination;
    IBObjectRecord *_rootRecord;
    NSMutableOrderedSet *_objects;
    NSArray *_cachedConnections;
    NSArray *_cachedGroups;
    NSArray *_cachedObjects;
    IBMutableIdentityDictionary *_membersToRecords;
    NSMutableDictionary *_memberIDsToRecords;
    BOOL _usesAutoincrementingIDs;
    NSString *_uniqueID;
    NSString *_sourceID;
    NSObject *_rootObject;
    long long _maxID;
    id <IBObjectContainerDelegate> _delegate;
    NSArray *_verificationIssues;
}

+ (id)objectContainerFromOpaqueToken:(id)arg1 forPasteboard:(id)arg2 withArchivingDelegate:(id)arg3;
+ (id)objectContainerWithInitiallyDesignableChildrenOfObjects:(id)arg1 usingAutoincrementingIDs:(BOOL)arg2;
@property(retain) NSArray *verificationIssues; // @synthesize verificationIssues=_verificationIssues;
@property id <IBObjectContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxID; // @synthesize maxID=_maxID;
@property(nonatomic) BOOL usesAutoincrementingIDs; // @synthesize usesAutoincrementingIDs=_usesAutoincrementingIDs;
@property(readonly) NSObject *rootObject; // @synthesize rootObject=_rootObject;
@property(readonly) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setConfigurationPropertyStorage:(id)arg1 forObject:(id)arg2;
- (id)configurationPropertyStorageForObject:(id)arg1;
- (BOOL)containsObject:(id)arg1 andIfSoGetPropertyStorage:(id *)arg2;
- (void)overlayMetadata:(id)arg1 ofMember:(id)arg2;
- (id)metadataForMember:(id)arg1;
- (BOOL)containsObject:(id)arg1 andIfSoSetMetadata:(id)arg2 forKey:(id)arg3;
- (BOOL)containsObject:(id)arg1 andIfSoGetMetadata:(id *)arg2 forKey:(id)arg3;
- (BOOL)containsObject:(id)arg1 andIfSoSetMetadata:(id)arg2 resolverContext:(id)arg3 forLazilyComputedKey:(CDUnknownBlockType)arg4;
- (BOOL)containsObject:(id)arg1 andIfSoGetMetadata:(id *)arg2 resolverContext:(id)arg3 forLazilyComputedKey:(CDUnknownBlockType)arg4;
- (id)metadataForKey:(id)arg1 ofMember:(id)arg2;
- (void)setMetadata:(id)arg1 ofMember:(id)arg2;
- (void)removeMetadataForKey:(id)arg1 ofMemeber:(id)arg2;
- (void)setMetadata:(id)arg1 forKey:(id)arg2 ofMember:(id)arg3;
- (void)setMetadata:(id)arg1 ofMember:(id)arg2 withRecord:(id)arg3;
- (void)setMetadata:(id)arg1 forKey:(id)arg2 ofMember:(id)arg3 withRecord:(id)arg4;
- (void)removeMetadataForKey:(id)arg1 ofMemeber:(id)arg2 withRecord:(id)arg3;
- (id)groups;
- (void)group:(id)arg1 didReorderObject:(id)arg2;
- (void)group:(id)arg1 willReorderObject:(id)arg2;
- (void)group:(id)arg1 didRemoveIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 willRemoveIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 didAddIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 willAddIdentifier:(id)arg2 forObject:(id)arg3;
- (void)group:(id)arg1 didRemoveObject:(id)arg2;
- (void)group:(id)arg1 willRemoveObject:(id)arg2;
- (void)group:(id)arg1 didAddObject:(id)arg2;
- (void)group:(id)arg1 willAddObject:(id)arg2;
- (id)group:(id)arg1 objectRecordForObject:(id)arg2;
- (void)removeGroups:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)addGroup:(id)arg1 withID:(id)arg2;
- (id)instantiateNewGroupWithIdentifier:(id)arg1;
- (id)instantiateNewGroup;
- (id)groupIDForGroup:(id)arg1;
- (id)groupForGroupID:(id)arg1;
- (BOOL)containsGroup:(id)arg1;
- (id)groupForObject:(id)arg1;
- (id)attributePlaceholders;
- (id)attributePlaceholderForObject:(id)arg1 withName:(id)arg2;
- (void)removeAttributePlaceholder:(id)arg1;
- (void)addOrReplaceAttributePlaceholder:(id)arg1;
- (void)replaceConnection:(id)arg1 withConnectionOfSameOrigin:(id)arg2 context:(id)arg3;
- (void)replaceConnection:(id)arg1 withConnectionOfSameOrigin:(id)arg2;
- (void)removeConnection:(id)arg1;
- (void)removeConnections:(id)arg1;
- (void)removeConnections:(id)arg1 context:(id)arg2;
- (void)removeConnection:(id)arg1 context:(id)arg2;
- (void)removeConnectionFromTables:(id)arg1;
- (id)connectionForConnectionID:(id)arg1;
- (id)connectionIDForConnection:(id)arg1;
- (void)replaceConnection:(id)arg1 withConnection:(id)arg2 context:(id)arg3;
- (void)replaceConnection:(id)arg1 withConnection:(id)arg2;
- (id)connectionsBeforeConnection:(id)arg1;
- (long long)indexOfConnection:(id)arg1;
- (void)reorderConnection:(id)arg1 toIndex:(long long)arg2;
- (void)reorderConnection:(id)arg1 beforeConnection:(id)arg2;
- (void)addConnection:(id)arg1 withConnectionID:(id)arg2;
- (void)addConnection:(id)arg1 withConnectionID:(id)arg2 sourceIndex:(long long)arg3;
- (void)addConnection:(id)arg1 withConnectionID:(id)arg2 blockForInsertingIntoConnectionsBySource:(CDUnknownBlockType)arg3;
- (id)connectionsFromObject:(id)arg1 toObject:(id)arg2;
- (id)connectionsToObject:(id)arg1;
- (id)connectionsFromObject:(id)arg1;
- (long long)numberOfConnectionsToObject:(id)arg1;
- (long long)numberOfConnectionsFromObject:(id)arg1;
- (id)connectionsForObject:(id)arg1;
- (id)orderedConnections;
- (id)connections;
- (void)setExplicitLabel:(id)arg1 forObject:(id)arg2;
- (id)explicitLabelForObject:(id)arg1;
- (id)memberForMemberID:(id)arg1;
- (id)memberIDForMember:(id)arg1;
- (id)objectIDToObjectMapOfObjects:(id)arg1;
- (id)objectIDsForObjects:(id)arg1;
- (id)objectsForObjectIDs:(id)arg1;
- (id)objectForObjectID:(id)arg1;
- (id)objectIDForObject:(id)arg1;
- (BOOL)areObjectsSiblings:(id)arg1;
- (id)childrenOfParentOfObject:(id)arg1;
- (id)childrenOfObject:(id)arg1;
- (long long)numberOfChildrenOfObject:(id)arg1;
- (id)parentOfObject:(id)arg1;
- (BOOL)containsMember:(id)arg1;
- (BOOL)containsConnection:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 toParent:(id)arg2;
- (void)addObject:(id)arg1 toParent:(id)arg2 withExplicitLabel:(id)arg3 andOID:(id)arg4;
- (void)addObject:(id)arg1 toParent:(id)arg2 withExplicitLabel:(id)arg3 memberPropertyStorage:(id)arg4 andOID:(id)arg5;
- (void)moveObjects:(id)arg1 toParent:(id)arg2 atIndex:(long long)arg3;
- (BOOL)isObject:(id)arg1 aChildOfObject:(id)arg2;
- (void)insertObject:(id)arg1 asChildOfParent:(id)arg2 atIndex:(long long)arg3 withExplicitLabel:(id)arg4 memberPropertyStorage:(id)arg5 andOID:(id)arg6;
- (void)insertObject:(id)arg1 asChildOfParent:(id)arg2 atIndex:(long long)arg3 withExplicitLabel:(id)arg4 andOID:(id)arg5;
- (id)validatedIdentifier:(id)arg1;
- (id)topLevelObjects;
- (long long)numberOfObjects;
- (id)objects;
- (id)members;
- (id)objectRecordForObject:(id)arg1;
- (void)didAddObject:(id)arg1 phase:(unsigned long long)arg2;
- (void)willAddObject:(id)arg1 toParent:(id)arg2;
- (void)didChangeMetadataPropertyFromValue:(id)arg1 toValue:(id)arg2 forKey:(id)arg3 ofMember:(id)arg4;
- (void)didRemoveObject:(id)arg1 fromParent:(id)arg2;
- (void)willRemoveObject:(id)arg1 previouslyMemberOfGroup:(id)arg2 identifierInGroup:(id)arg3;
- (void)didRemoveConnection:(id)arg1;
- (void)willRemoveConnection:(id)arg1;
- (void)didAddConnection:(id)arg1;
- (void)willAddConnection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)decodeGroupsWithCoder:(id)arg1;
- (void)encodeGroupsWithCoder:(id)arg1;
- (void)encodeConnectionsWithCoder:(id)arg1;
- (void)decodeConnectionsWithCoder:(id)arg1;
- (void)encodeObjectsWithCoder:(id)arg1;
- (void)decodeObjectsWithCoder:(id)arg1;
- (void)dealloc;
- (id)initUsingAutoincrementingIDs:(BOOL)arg1;
- (id)init;
- (void)verify;
- (void)verifyMembersHaveUniqueIDs;
- (id)verifyMaxID;
- (void)verifyNoObjectIsInTheChildListTwice;
- (void)verifyConnectionEndPoints;
- (void)verifyConnectionKeys;
- (BOOL)hasLocalizableContent;
- (BOOL)isObject:(id)arg1 aDescendantOfObject:(id)arg2;
- (id)mostSeniorObjectsOfObjects:(id)arg1;
- (id)firstCommonAncestorOfObjects:(id)arg1;
- (id)firstAncestorOfObject:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)topLevelObjectsForObjects:(id)arg1;
- (id)topLevelObjectForObject:(id)arg1;
- (id)descendantsOfObjects:(id)arg1 includingInitialObjects:(BOOL)arg2;
- (id)descendantsOfObject:(id)arg1 includingInitialObject:(BOOL)arg2;
- (id)objectsToTopLevelFromParentOfObject:(id)arg1;
- (id)objectsToTopLevelFromObject:(id)arg1;
- (id)objectsFromObject:(id)arg1 toAncestor:(id)arg2;
- (id)objectBeforeObjectInPreorderTraversal:(id)arg1;
- (id)objectAfterObjectInPreorderTraversal:(id)arg1;
- (long long)compareObjectInPreorderTraversal:(id)arg1 toObject:(id)arg2;
- (id)lastDescendantOfObject:(id)arg1;
- (id)lastObjectInPreorderTraversal;
- (id)firstObjectInPreorderTraversal;
- (id)objectsFromTopLevelToParentOfObject:(id)arg1;
- (id)objectsFromTopLevelToObject:(id)arg1;
- (id)objectsFromAncestor:(id)arg1 toObject:(id)arg2;
- (long long)depthOfObject:(id)arg1;
- (void)addObjectAndItsInitiallyDesignableChildren:(id)arg1 toParent:(id)arg2;
- (id)pasteboardTypes;
- (void)putObjects:(id)arg1 onPasteboard:(id)arg2 withArchivingDelegate:(id)arg3 context:(id)arg4;
- (void)addObjects:(id)arg1 toPasteboard:(id)arg2 withArchivingDelegate:(id)arg3 context:(id)arg4;
- (void)populatePasteboardWithAuxiliaryTypeInfoForObjects:(id)arg1 andConnections:(id)arg2 onPasteboard:(id)arg3;
- (void)addObjects:(id)arg1 withTypes:(id)arg2 toPasteboard:(id)arg3 withArchivingDelegate:(id)arg4 context:(id)arg5;
- (void)putExternalConnections:(id)arg1 ontoPasteboard:(id)arg2 forType:(id)arg3 forContainer:(id)arg4;
- (id)localPasteboardTypeForGlobalType:(id)arg1;
- (id)extractObjects:(id)arg1;
- (id)emptyCopy;
- (void)insertExternalConnectionsFromPasteboard:(id)arg1 originalContainer:(id)arg2 useForeignContainerPasteboardType:(BOOL)arg3;
- (void)insertRetargetedConnectionsFromPasteboard:(id)arg1 originalContainer:(id)arg2;
- (void)insertExternalConnectionsFromType:(id)arg1 onPasteboard:(id)arg2 originalContainer:(id)arg3;
- (void)refactorConnectionsOnPasteboard:(id)arg1 destinationContainer:(id)arg2 fromObject:(id)arg3 toObject:(id)arg4 exportingToGenericType:(BOOL)arg5;
- (void)insertObjectsFromContainer:(id)arg1 asChildrenOfObject:(id)arg2 atIndex:(long long)arg3 includeGroups:(BOOL)arg4;
- (void)insertObjectsFromContainer:(id)arg1 asChildrenOfObject:(id)arg2 atIndex:(long long)arg3 includeGroups:(BOOL)arg4 useOIDs:(BOOL)arg5;
- (void)insertObjectsFromContainer:(id)arg1 asChildrenOfObject:(id)arg2 atIndex:(long long)arg3 includeGroups:(BOOL)arg4 explicitMemberIDs:(id)arg5;
- (BOOL)areObjectsDivergent:(id)arg1;
- (id)moveChildrenFromPasteboard:(id)arg1 ofType:(id)arg2 toParent:(id)arg3 atIndex:(long long)arg4;
- (id)localPasteboardObjects:(id)arg1 ofType:(id)arg2;
- (id)_opaqueTokenForPasteboard:(id)arg1 withArchivingDelegate:(id)arg2 context:(id)arg3;

@end

