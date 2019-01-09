//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBConnection.h"

@interface IBCocoaTouchEventConnection : IBConnection
{
    unsigned long long _eventType;
}

+ (id)prototypeConnectionForConnectingFromObject:(id)arg1 document:(id)arg2;
+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)defaultActionConnectionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)validEventTypes;
+ (BOOL)canObjectFireActions:(id)arg1;
+ (BOOL)canObjectFireActions:(id)arg1 document:(id)arg2;
+ (BOOL)canObjectFireEvents:(id)arg1;
+ (BOOL)canObjectFireEvents:(id)arg1 document:(id)arg2;
+ (void)registerMarshallingRecordHandlers;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
- (BOOL)canHaveDestinationSeparatedWithSeparationType:(int)arg1;
- (BOOL)canHaveSourceSeparatedWithSeparationType:(int)arg1;
- (id)messageForConnectingAcrossRepeatingStoryboardRelationship;
- (id)applicableEventsForConnectingToSourceCode;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)archivingKeyForLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)printablePListForIBToolInDocument:(id)arg1;
- (id)displayDescriptionInDocument:(id)arg1;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)insertingFromPasteboardShouldRetargetEndPoint:(long long)arg1;
- (BOOL)destinationIsFirstResponder;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)exclusivityHintInObjectContainer:(id)arg1;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)missingComponents;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (BOOL)canCoexistWithOtherConnectionsHavingSameEndPoint;
- (id)displayGroupFromReferenceEndPoint:(id)arg1;
- (BOOL)isEqualToPrototype:(id)arg1;
- (BOOL)isEventful;
- (long long)relationshipType;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)connectionDefinitionForObject:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (BOOL)shouldRefactorLabelForRenameRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)categoryNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;
- (id)typeNameForRefactoringRequest:(id)arg1 inDocument:(id)arg2;

@end
