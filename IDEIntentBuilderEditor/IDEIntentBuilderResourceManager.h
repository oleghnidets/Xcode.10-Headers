//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEMediaLibraryDelegate.h"

@class DVTObservingToken, DVTStackBacktrace, IDEMediaResourceVariantContext, IDEWorkspace, NSDictionary, NSMutableDictionary, NSString;

@interface IDEIntentBuilderResourceManager : NSObject <DVTInvalidation, IDEMediaLibraryDelegate>
{
    BOOL _isMediaCacheInitialized;
    DVTObservingToken *_workspaceFinishedKVOToken;
    id <DVTInvalidation> _variantContextKVOToken;
    IDEMediaResourceVariantContext *_variantContext;
    NSMutableDictionary *_fileBasedImageCache;
    NSMutableDictionary *_imageObservers;
    IDEWorkspace *_workspace;
}

+ (id)_imageMediaTypes;
+ (id)resourceManagerForWorkspace:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
- (id)imageResourceNamed:(id)arg1;
- (id)_resourceNamed:(id)arg1 ofMediaType:(id)arg2;
- (struct NSObject *)registerImageResourceObserver:(CDUnknownBlockType)arg1;
- (id)_currentImageNames;
- (id)_variantForMatching;
- (id)_defaultFoldingStrategy;
- (void)_notifyResourceObservers:(id)arg1 withAddedSet:(id)arg2 andRemovedSet:(id)arg3;
- (void)_updateMediaCachesWithAdded:(id)arg1 andRemoved:(id)arg2;
- (void)_startManagingMediaCache;
- (void)_ensureMediaCache;
- (void)primitiveInvalidate;
- (id)_initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
@property(readonly) NSDictionary *variantForResolvingMediaResources;

@end
