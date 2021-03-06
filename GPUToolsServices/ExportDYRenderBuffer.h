//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ExportTexture.h"

__attribute__((visibility("hidden")))
@interface ExportDYRenderBuffer : NSObject <ExportTexture>
{
    BOOL _isDepth;
    unsigned int _genericFormat;
    id <DYRenderBuffer> _buffer;
}

@property(readonly, nonatomic) BOOL isDepth; // @synthesize isDepth=_isDepth;
@property(readonly, nonatomic) unsigned int genericFormat; // @synthesize genericFormat=_genericFormat;
@property(readonly, nonatomic) id <DYRenderBuffer> buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)uncompressedData;
- (id)dataForMipmapLevel:(int)arg1 layer:(int)arg2;
- (unsigned int)pixelFormat;
- (BOOL)isYAxisDown;
- (unsigned int)numberOfMipmapLevels;
- (unsigned int)numberOfFaces;
- (unsigned int)numberOfArrayElements;
- (unsigned int)pixelDepth;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)initWithRenderBuffer:(id)arg1 properties:(id)arg2;

@end

