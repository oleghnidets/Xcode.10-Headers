//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPURenderJob.h"

__attribute__((visibility("hidden")))
@interface GPUMTLQuicklookRenderJob : GPURenderJob
{
    BOOL _showDepth;
    struct DYInterposeVersion *_interposerVersion;
}

@property(nonatomic) struct DYInterposeVersion *interposerVersion; // @synthesize interposerVersion=_interposerVersion;
@property(nonatomic) BOOL showDepth; // @synthesize showDepth=_showDepth;
- (struct DYInterposeVersion *)usedInterposerVersion;
- (BOOL)flipped;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;

@end

