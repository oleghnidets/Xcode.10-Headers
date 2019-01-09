//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTileMapNode.h"

#import "SKAssetReferenceDelegate.h"

@class NSString, SKAssetReference;

@interface SKEditorTileMapNode : SKTileMapNode <SKAssetReferenceDelegate>
{
    SKAssetReference *_tileSetReference;
    NSString *_oldTileSetName;
    BOOL _createUndoOperation;
    BOOL _initialTileSetLoaded;
    BOOL _newTileSetApplied;
    NSString *_tileSetName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)isAssetStillInWorkspace:(id)arg1;
- (void)assetReferenceInvalidated:(id)arg1;
- (void)verifyAssetReferenceIsValid:(id)arg1 forDocument:(id)arg2;
- (void)assetReference:(id)arg1 didUpdateFromDocument:(id)arg2;
- (void)setDocument:(id)arg1;
- (void)setTileSetName:(id)arg1;
- (id)tileSetName;
@property(retain, nonatomic) NSString *tileSetName_commit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldUnarchiveTileSet;
- (id)initWithCoder:(id)arg1;

@end

