//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLAssetResolver.h"

@class NSDictionary, NSString, NSURL;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver>
{
    NSURL *_archiveURL;
    NSDictionary *_archiveDictionary;
    NSString *_rootUSDPath;
}

- (void).cxx_destruct;
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)firstAssetPathInArchive;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

