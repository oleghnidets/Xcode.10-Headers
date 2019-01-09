//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBConnection.h>

@interface IBAbstractToOneOutletConnection : IBConnection
{
}

+ (id)typeForInsertionConnectionContext:(id)arg1 forConnectingFromObject:(id)arg2 document:(id)arg3;
+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (BOOL)isObjectValidOutletDestination:(id)arg1;
+ (BOOL)isObjectValidOutletSource:(id)arg1;
- (BOOL)canHaveDestinationSeparatedWithSeparationType:(int)arg1;
- (BOOL)canHaveSourceSeparatedWithSeparationType:(int)arg1;
- (id)messageForConnectingAcrossRepeatingStoryboardRelationship;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (id)archivingKeyForLabel;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)shouldRefactorLabelForRenameRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)categoryNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)typeNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)displayGroupFromReferenceEndPoint:(id)arg1;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)supersedingEndPoints;
- (id)supersedingDisplayValues;
- (BOOL)isCatchAllPrototypeForDisplayGroup;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)exclusivityHintInObjectContainer:(id)arg1;
- (BOOL)isActuallyAnOutlet;
- (BOOL)canCoexistWithOtherConnectionsHavingSameEndPoint;
- (BOOL)validateSource:(id)arg1;
- (id)missingComponents;
- (BOOL)validateDestination:(id)arg1;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)equivalentSourceInDocument:(id)arg1;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (long long)relationshipType;
- (id)connectionDefinitionForObject:(id)arg1;

@end

