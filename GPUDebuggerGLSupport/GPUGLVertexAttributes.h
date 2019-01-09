//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUGLVertexAttributesProtocol.h"

@class GPUGLVertexAttributeComponent, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLVertexAttributes : NSObject <GPUGLVertexAttributesProtocol>
{
    NSMutableArray *_attributes;
    GPUGLVertexAttributeComponent *_elementAttribute;
    BOOL _indexed;
    BOOL _instanced;
    BOOL _primitiveRestartEnabled;
    int _minNumberOfVertices;
    int _maxNumberOfVertices;
    unsigned int _elementType;
    int _elementCount;
    int _primitiveCount;
}

@property(nonatomic) int primitiveCount; // @synthesize primitiveCount=_primitiveCount;
@property(nonatomic) int elementCount; // @synthesize elementCount=_elementCount;
@property(nonatomic) unsigned int elementType; // @synthesize elementType=_elementType;
@property(nonatomic, getter=isPrimitiveRestartEnabled) BOOL primitiveRestartEnabled; // @synthesize primitiveRestartEnabled=_primitiveRestartEnabled;
@property(nonatomic, getter=isInstanced) BOOL instanced; // @synthesize instanced=_instanced;
@property(nonatomic, getter=isIndexed) BOOL indexed; // @synthesize indexed=_indexed;
@property(nonatomic) int maxNumberOfVertices; // @synthesize maxNumberOfVertices=_maxNumberOfVertices;
@property(nonatomic) int minNumberOfVertices; // @synthesize minNumberOfVertices=_minNumberOfVertices;
- (void).cxx_destruct;
- (void)populateObjectFromResource:(id)arg1;
- (unsigned int)elementIndex:(int)arg1;
- (id)formattedAttributeData:(int)arg1 forComponent:(int)arg2 forIndex:(int)arg3;
- (unsigned int)attributeFormat:(int)arg1 forComponent:(int)arg2;
- (id)attributeName:(int)arg1 forComponent:(int)arg2;
- (unsigned int)attribDivisor:(int)arg1;
- (id)attributeName:(int)arg1;
- (int)numberOfComponentsForAttribute:(int)arg1;
@property(readonly, nonatomic) int attributeCount;
- (id)initWithResource:(id)arg1;
- (id)init;
- (id)getElementAttribute;
- (id)getAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

