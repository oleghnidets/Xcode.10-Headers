//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBConnection.h>

#import "IBDocumentArchiving.h"
#import "IBStoryboardCanvasLink.h"

@class NSObject<IBPrimarySceneObject>, NSSet, NSString;

@interface IBAbstractSegueConnection : IBConnection <IBDocumentArchiving, IBStoryboardCanvasLink>
{
    NSString *_identifier;
}

+ (BOOL)isObjectValidDestination:(id)arg1;
+ (BOOL)isObjectValidSource:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (BOOL)isAbstractType;
+ (id)validSegueClassesFromSource:(id)arg1 toDestination:(id)arg2 inDocument:(id)arg3;
+ (id)kindDisplayNameForConnectionMenu;
+ (id)menuLabelForConnection:(id)arg1;
+ (BOOL)isOrderedRelativeToUniformInstances;
+ (double)displayOrderPriority;
+ (id)classIdentifier;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isFlowTerminatingSegue;
- (BOOL)isSelectable;
@property(readonly) BOOL canvasLinkWantsExclusiveHook;
@property(readonly) BOOL canvasLinkRequiresSourceCanvasFrame;
@property(readonly) NSObject<IBPrimarySceneObject> *canvasLinkDestination;
@property(readonly) NSObject<IBPrimarySceneObject> *canvasLinkSource;
- (id)instantiateSegueTemplate;
- (id)effectiveSegueForSelection;
- (BOOL)representsMultipleSegues;
- (BOOL)pathShouldBeDashed;
@property(readonly) BOOL canvasLinkShouldDrawPath;
- (id)badgeImage;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)attributesInspectorSliceIdentifier;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)shouldArchiveKind;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)archivingKeyForLabel;
- (BOOL)shouldShowInDocumentStructure;
- (void)populateSegueTemplates:(id)arg1 andOutletsForCompiledDocument:(id)arg2;
- (id)ibUserHostableDocumentClasses;
- (id)ibDocumentationClassName;
- (id)displayGroupFromReferenceEndPoint:(id)arg1;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)kindDisplayName;
- (id)destinationDisplayName;
- (id)displayDescriptionInDocument:(id)arg1;
- (id)ibDefaultLabel;
- (id)exclusivityHintInObjectContainer:(id)arg1;
- (BOOL)isValidForDocument:(id)arg1 message:(id *)arg2;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (BOOL)isPrototypeFor:(id)arg1;
- (id)prototypeWithRespectTo:(id)arg1;
- (Class)classForPrototypeWithRespectTo:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)useConnectionSourceForWarningLocation;
- (long long)compareToPrototype:(id)arg1 predecessors:(id)arg2 predecessorsForSelf:(id)arg3 document:(id)arg4;
- (long long)compareToConnectionForPrototypeMenu:(id)arg1;
- (id)userPresentableLabel;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (id)ibRuntimeClassName;
- (id)targetRuntime;
- (id)storyboardDocument;
@property(readonly) NSSet *sourceMembersForIllustrativePurposes;
- (id)sourcePrimarySceneObject;
- (id)destinationPrimarySceneObjectOrNil;
- (id)destinationPrimarySceneObject;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<IBPrimarySceneObject> *source;
@property(readonly) Class superclass;

@end

