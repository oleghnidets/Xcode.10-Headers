//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTObservingToken, GTFMutableObjectDictionary, NSHashTable, NSMutableDictionary;

@interface SKPlugin : NSObject
{
    NSHashTable *_workspacesAvailable;
    GTFMutableObjectDictionary *_ideWorkspaceToSKWorkspace;
    NSMutableDictionary *_customComponentToInspector;
    DVTObservingToken *_workspaceDocumentsKVOToken;
}

+ (id)tileSetDocumentType;
+ (id)particleDocumentType;
+ (id)actionDocumentType;
+ (id)sceneDocumentType;
+ (id)spritekitDocumentType;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)convertURL:(id)arg1 toWorkspace:(id)arg2;
- (id)resourceManagerForWorkspace:(id)arg1;
- (BOOL)_workspaceContainsSKResources:(id)arg1;
- (void)_removeSKWorkspaceForIDEWorkspace:(id)arg1;
- (id)_createSKWorkspaceForIDEWorkspace:(id)arg1;
- (void)_refreshSKWorkspaces;
- (id)skWorkspaceForIDEWorkspace:(id)arg1;
- (id)init;

@end

