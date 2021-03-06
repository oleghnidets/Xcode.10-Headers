//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGLShareGroupRec;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Context {
    struct _CGLContextObject *_field1;
    struct CGLShareGroupRec *_field2;
    struct __GLIContextRec *_field3;
    struct __GLIFunctionDispatchRec *_field4;
    struct __GLIFunctionDispatchRec *_field5;
};

struct GLSLObject {
    unsigned int _field1;
};

struct ImageFormatInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct ImageInfo {
    struct ImageFormatInfo _field1;
    struct ImageFormatInfo _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    _Bool _field9;
};

struct ImageRenderer {
    struct Context _field1;
    struct ImageInfo _field2;
    struct ImageFormatInfo _field3;
    unsigned int _field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _field13;
    unsigned long long _field14;
    struct GLSLObject _field15;
    unsigned int _field16;
    struct array<int, 32> _field17;
    struct {
        struct GLSLObject _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
    } _field18;
    struct OverlayShader _field19;
    struct OverlayShader _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
};

struct OverlayShader {
    struct GLSLObject _field1;
    struct array<int, 32> _field2;
};

struct ToneMapRange {
    double min;
    double max;
};

struct _CGLContextObject;

struct __GLIFunctionDispatchRec;

struct array<int, 32> {
    int _field1[32];
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

