//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VMUStackLogReader.h"

@class DVT_VMUVMRegionTracker, NSMapTable, NSMutableDictionary, NSSet, NSString;

@interface DVT_VMUStackLogReaderBase : NSObject <VMUStackLogReader>
{
    unsigned int _task;
    DVT_VMUVMRegionTracker *_regionTracker;
    NSMapTable *_addressToSymbolicationMap;
    NSSet *_excludedFrames;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
    BOOL _usesLiteMode;
}

@property(retain, nonatomic) NSSet *excludedFrames; // @synthesize excludedFrames=_excludedFrames;
@property(readonly) DVT_VMUVMRegionTracker *regionTracker; // @synthesize regionTracker=_regionTracker;
@property(readonly) BOOL usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;
@property(readonly) unsigned int task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
@property(readonly) BOOL inspectingLiveProcess;
@property(readonly) BOOL is64bit;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
- (id)identifierForBinaryImagePath:(id)arg1;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 isLiteZone:(BOOL)arg2 options:(unsigned long long)arg3;
- (id)symbolicatedBacktraceForNode:(unsigned int)arg1 nodeDetails:(CDStruct_599faf0f)arg2 isLiteZone:(BOOL)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

