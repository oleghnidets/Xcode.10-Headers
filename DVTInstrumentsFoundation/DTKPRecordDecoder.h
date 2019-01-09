//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, XRFrameActivity;

@interface DTKPRecordDecoder : NSObject
{
    struct map<unsigned long long, int, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _tidToPidMap;
    BOOL _mergeCallstacks;
    struct kpdecode_cursor *_kpcursor;
    _Bool _stopped;
    int _pmcCount;
    unsigned long long *_pmcIndices;
    BOOL _configSeen;
    BOOL _configInvalid;
    unsigned char _configMode;
    BOOL _configHasPET;
    BOOL _configSystrace;
    struct pmc_lastval *_pmcLastValues[32];
    struct DTKPRecordDecoderMagazine *_magazines[2];
    struct DTKPRecordDecoderMagazine *_curMagazine;
    struct DTKPRecordDecoderMagazine *_prevMagazine;
    unsigned int _magazineSize;
    struct {
        unsigned long long buffersProcessed;
        unsigned long long bufferBytes;
        unsigned long long kprecsDecoded;
        unsigned long long kprecsInternal;
        unsigned long long kprecsWithUserStacks;
        unsigned long long kprecsWithKernelStacks;
        unsigned long long kprecsTimeFilteredOut;
        unsigned long long dtkpRecsSent;
        unsigned long long dtkpCallstackFixup;
        unsigned long long dtkpBufferOverflow;
    } _stats;
    unsigned long long _enumerateStartTime;
    unsigned long long _enumerateStopTime;
    struct map<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>>> _tidToPendingRecord;
    struct ktrace_session *_decodingSession;
    BOOL _decodeKPerfFromSession;
    BOOL _decodeKTraceFromSession;
    unsigned long long _eventHorizon;
    NSDictionary *_tidToPid;
    NSDictionary *_tailspinLPET;
    XRFrameActivity *_minorFrameActivity;
}

+ (unsigned long long)peekAtFirstRecordTimestampInDatastream:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) XRFrameActivity *minorFrameActivity; // @synthesize minorFrameActivity=_minorFrameActivity;
@property(retain, nonatomic) NSDictionary *tailspinLPET; // @synthesize tailspinLPET=_tailspinLPET;
@property BOOL decodeKTraceFromSession; // @synthesize decodeKTraceFromSession=_decodeKTraceFromSession;
@property BOOL decodeKPerfFromSession; // @synthesize decodeKPerfFromSession=_decodeKPerfFromSession;
@property(retain, nonatomic) NSDictionary *tidToPid; // @synthesize tidToPid=_tidToPid;
@property(readonly, nonatomic) unsigned long long eventHorizon; // @synthesize eventHorizon=_eventHorizon;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logKPRecsFromBuffer:(const void *)arg1 bufferSize:(unsigned long long)arg2 finalBuffer:(BOOL)arg3 includingCallstacks:(BOOL)arg4 toFile:(struct __sFILE *)arg5;
- (void)_logKPRec:(struct kpdecode_record *)arg1 includingCallstacks:(BOOL)arg2 toFile:(struct __sFILE *)arg3;
- (int)flushRecords:(CDUnknownBlockType)arg1;
- (int)heartbeatTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (int)_flushRecordsFromMagazine:(struct DTKPRecordDecoderMagazine *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_getPid:(int *)arg1 fromTid:(unsigned long long)arg2;
- (int)enumerateRecordsFromSession:(struct ktrace_session *)arg1 block:(CDUnknownBlockType)arg2;
- (void)flushRemainingRecordsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleRecordFromSession:(struct kpdecode_record *)arg1 pendingRecord:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)enumerateRecordsFromDatastream:(id)arg1 block:(CDUnknownBlockType)arg2;
- (int)_enumerateRecordsFromBuffer:(const void *)arg1 bufferSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)_handleRecord:(struct kpdecode_record *)arg1 needToCheckPrevMagazine:(BOOL)arg2 block:(CDUnknownBlockType)arg3 shouldFree:(_Bool)arg4;
- (void)_attemptToDrainMagazine:(struct DTKPRecordDecoderMagazine *)arg1 block:(CDUnknownBlockType)arg2;
- (void)setEnumerateTimeRangeStart:(unsigned long long)arg1 stop:(unsigned long long)arg2;
- (int)_applyUserstackFromKPRec:(struct kpdecode_record *)arg1 toMagazine:(struct DTKPRecordDecoderMagazine *)arg2;
- (BOOL)_convertKPRec:(struct kpdecode_record *)arg1 toPending:(id)arg2;
- (void)_decodeConfig:(struct kpdecode_record *)arg1;
- (void)_setPMCConfigWordCount:(unsigned long long)arg1 wordArray:(unsigned long long *)arg2;
- (void)dealloc;
- (id)initAndMergeCallstacks:(BOOL)arg1 pendingBufferEntries:(unsigned int)arg2;
- (id)init;
- (BOOL)_commonInit;
- (void)_updateEventHorizonWithNewTime:(unsigned long long)arg1;
- (void)_swapMagazines;

@end

