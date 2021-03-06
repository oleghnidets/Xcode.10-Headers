//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDocumentLocation.h"

@class GTFActionModel, GTFActionTimelineModel, NSObject<SKSceneNavigating>, SKActionEditorNavigableRepresentedNode, SKNode, SKTileDefinition, SKTileGroup, SKTileGroupRule, SKTileSet;

@interface SKDocumentLocation : DVTDocumentLocation
{
    id _representedObject;
}

@property(readonly, nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKTileDefinition *asTileDefinition;
@property(readonly, nonatomic) BOOL isTileDefinition;
@property(readonly, nonatomic) SKTileGroupRule *asTileGroupRule;
@property(readonly, nonatomic) BOOL isTileGroupRule;
@property(readonly, nonatomic) SKTileGroup *asTileGroup;
@property(readonly, nonatomic) BOOL isTileGroup;
@property(readonly, nonatomic) SKTileSet *asTileSet;
@property(readonly, nonatomic) BOOL isTileSet;
@property(readonly, nonatomic) NSObject<SKSceneNavigating> *asNavNode;
@property(readonly, nonatomic) BOOL isNavNode;
@property(readonly, nonatomic) SKActionEditorNavigableRepresentedNode *asActionNavNode;
@property(readonly, nonatomic) BOOL isActionNavNode;
@property(readonly, nonatomic) GTFActionTimelineModel *asActionTimeline;
@property(readonly, nonatomic) BOOL isActionTimeline;
@property(readonly, nonatomic) GTFActionModel *asAction;
@property(readonly, nonatomic) BOOL isAction;
@property(readonly, nonatomic) SKNode *asSKNode;
@property(readonly, nonatomic) BOOL isSKNode;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 withSKObject:(id)arg2;

@end

