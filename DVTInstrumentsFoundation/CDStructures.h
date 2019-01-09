//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CachedMemory {
    unsigned long long *value;
    unsigned long long count;
};

struct DTKPRecordDecoderMagazine {
    id *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
};

struct DTNStatSourceMap {
    struct __CFDictionary *_container;
    long long _nextSerialNumber;
};

struct DTOSLogTableLoader;

struct DTStateActionDecoder;

struct DTStateActionEncoder {
    int _state;
    struct OutputTape _tape;
    char *_pushBufferStart;
    char *_pushBufferEnd;
    unsigned long long _pushBufferBitOffset;
    unsigned long long _backgroundPatternStart;
    struct StackReference _topOfStackRef;
    unsigned char _background;
    int _stateWhenTapeRanOut;
    unsigned int _pushBufferSizeToXmit;
};

struct DTTableRowDecoder;

struct OutputTape {
    unsigned short *start;
    unsigned short *head;
    unsigned short *end;
};

struct SessionCallbackState {
    struct _opaque_pthread_t *thread;
    struct _opaque_pthread_mutex_t lock;
    struct _opaque_pthread_cond_t conditionVariable;
    int state;
    _Bool buffer_drained;
};

struct StackReference {
    unsigned short _generation;
    unsigned short _reference;
};

struct TFPPidWatcher {
    unsigned int clientPort;
};

struct _CSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct kpdecode_callstack {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3[128];
};

struct kpdecode_pmc {
    int _field1;
    unsigned long long _field2[32];
};

struct kpdecode_record {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    struct {
        char _field1[20];
    } _field5;
    struct {
        unsigned int _field1;
        unsigned long long _field2[4];
    } _field6;
    struct {
        int _field1;
        int _field2;
        unsigned long long _field3;
    } _field7;
    struct kpdecode_callstack _field8;
    struct kpdecode_callstack _field9;
    struct kpdecode_pmc _field10;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field11;
    struct {
        unsigned int _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
    } _field12;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned int _field3;
        short _field4;
        short _field5;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
    } _field13;
    struct {
        unsigned long long _field1;
        int _field2;
        int _field3;
        unsigned long long _field4;
        unsigned long long _field5;
    } _field14;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        short _field3;
        unsigned char _field4;
    } _field15;
    CDStruct_69d7cc99 _field16;
    struct {
        unsigned int _field1;
        unsigned int _field2;
    } _field17;
    struct {
        unsigned long long _field1;
        int _field2;
    } _field18;
    struct {
        int _field1;
        unsigned long long *_field2;
    } _field19;
    CDStruct_69d7cc99 _field20;
    struct {
        unsigned int _field1;
        int _field2;
    } _field21;
    struct {
        char _field1[256];
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned int _field4;
    } _field22;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
    } _field23;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field24;
    struct {
        unsigned int :3;
        unsigned int :3;
        unsigned int :3;
    } _field25;
};

struct map<unsigned long long, int, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> {
    struct __tree<std::__1::__value_type<unsigned long long, int>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>>> {
    struct __tree<std::__1::__value_type<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::list<DTKPRecord *, std::__1::allocator<DTKPRecord *>>>, std::__1::less<unsigned long long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>>> {
    struct __tree<std::__1::__value_type<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>, std::__1::less<unsigned long long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct processor_cpu_load_info {
    unsigned int _field1[4];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct unique_ptr<DTOSLogTableLoader, std::__1::default_delete<DTOSLogTableLoader>> {
    struct __compressed_pair<DTOSLogTableLoader *, std::__1::default_delete<DTOSLogTableLoader>> {
        struct DTOSLogTableLoader *__value_;
    } __ptr_;
};

struct unique_ptr<DTStateActionDecoder, std::__1::default_delete<DTStateActionDecoder>> {
    struct __compressed_pair<DTStateActionDecoder *, std::__1::default_delete<DTStateActionDecoder>> {
        struct DTStateActionDecoder *__value_;
    } __ptr_;
};

struct unique_ptr<DTTableRowDecoder, std::__1::default_delete<DTTableRowDecoder>> {
    struct __compressed_pair<DTTableRowDecoder *, std::__1::default_delete<DTTableRowDecoder>> {
        struct DTTableRowDecoder *__value_;
    } __ptr_;
};

struct vector<DTKPDataStreamMemoryRecord *, std::__1::allocator<DTKPDataStreamMemoryRecord *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<DTKPDataStreamMemoryRecord *__strong *, std::__1::allocator<DTKPDataStreamMemoryRecord *>> {
        id *__value_;
    } __end_cap_;
};

struct vm_region_submap_info_64 {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned short _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned int _field14;
    int _field15;
    unsigned int _field16;
    unsigned short _field17;
    unsigned int _field18;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_cbbc06c7;

typedef struct {
    unsigned long long _field1;
} CDStruct_69d7cc99;

typedef struct {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    long long _field7;
    unsigned long long _field8[0];
} CDStruct_6c9135d0;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    struct *_field3;
} CDStruct_3b01f0aa;

#pragma mark Typedef'd Unions

typedef union {
    unsigned int value;
    struct {
        unsigned int qualifier:2;
        unsigned int code:14;
        unsigned int subclass:8;
        unsigned int classID:8;
    } field;
} CDUnion_1678db3a;

