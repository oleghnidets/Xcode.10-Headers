//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKEditorDocument.h>

#import "IDEMediaLibraryDelegate.h"
#import "NSKeyedUnarchiverDelegate.h"

@class IDEMediaResourceVariantContext, NSArray, NSDictionary, NSMutableSet, NSSet, NSString, SKTileSetNavigableContainer;

@interface SKTileSetDocument : SKEditorDocument <NSKeyedUnarchiverDelegate, IDEMediaLibraryDelegate>
{
    NSMutableSet *_editorTileSets;
    SKTileSetNavigableContainer *_tileSetContainer;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
@property(retain, nonatomic) SKTileSetNavigableContainer *tileSetContainer; // @synthesize tileSetContainer=_tileSetContainer;
@property(retain, nonatomic) NSSet *editorTileSets; // @synthesize editorTileSets=_editorTileSets;
- (void).cxx_destruct;
- (void)commitChangeOfObject:(id)arg1 onKeyPath:(id)arg2 oldValue:(id)arg3 withActionName:(id)arg4 dependentKeyPaths:(id)arg5;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
- (void)_unobserveTileSetBehaviorChanges;
- (void)_observeTileSetBehaviorChanges;
- (void)modifiedUserData:(id)arg1 onTileDefinition:(id)arg2;
- (void)removeTileDefinitions:(id)arg1 fromTileGroupRule:(id)arg2 forTileSet:(id)arg3;
- (void)addTileDefinitions:(id)arg1 toTileGroupRule:(id)arg2 forTileSet:(id)arg3;
- (void)removeTileGroupRule:(id)arg1 fromTileGroup:(id)arg2 forTileSet:(id)arg3;
- (void)addTileGroupRule:(id)arg1 toTileGroup:(id)arg2 forTileSet:(id)arg3;
- (void)removeTileGroup:(id)arg1 fromTileSet:(id)arg2;
- (void)addTileGroup:(id)arg1 toTileSet:(id)arg2;
- (void)removeTileSet:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)unregisterTileSetContainerForEditor:(id)arg1;
- (id)registerEditorForTileSetContainer:(id)arg1;
- (BOOL)_processTileSet:(id)arg1 fromFileInfo:(id)arg2 error:(id *)arg3;
- (BOOL)processFileData:(id)arg1 error:(id *)arg2;
- (id)tileSetNamed:(id)arg1;
@property(readonly, nonatomic) NSArray *tileSets;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)namedAssets;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)ideTopLevelStructureObjects;
- (id)fileDataType;
- (void)editorDocumentWillClose;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
@property(readonly) NSDictionary *variantForResolvingMediaResources;

@end

