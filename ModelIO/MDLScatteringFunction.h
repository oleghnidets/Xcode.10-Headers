//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLNamed.h"

@class MDLMaterialProperty, NSString;

@interface MDLScatteringFunction : NSObject <MDLNamed>
{
    NSString *_name;
    MDLMaterialProperty *_baseColor;
    struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> _bsdf;
    MDLMaterialProperty *_emission;
    MDLMaterialProperty *_specular;
    MDLMaterialProperty *_materialIndexOfRefraction;
    MDLMaterialProperty *_interfaceIndexOfRefraction;
    MDLMaterialProperty *_normal;
    MDLMaterialProperty *_ambientOcclusion;
    MDLMaterialProperty *_ambientOcclusionScale;
}

@property(readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusionScale; // @synthesize ambientOcclusionScale=_ambientOcclusionScale;
@property(readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusion; // @synthesize ambientOcclusion=_ambientOcclusion;
@property(readonly, retain, nonatomic) MDLMaterialProperty *normal; // @synthesize normal=_normal;
@property(readonly, retain, nonatomic) MDLMaterialProperty *interfaceIndexOfRefraction; // @synthesize interfaceIndexOfRefraction=_interfaceIndexOfRefraction;
@property(readonly, retain, nonatomic) MDLMaterialProperty *materialIndexOfRefraction; // @synthesize materialIndexOfRefraction=_materialIndexOfRefraction;
@property(readonly, retain, nonatomic) MDLMaterialProperty *specular; // @synthesize specular=_specular;
@property(readonly, retain, nonatomic) MDLMaterialProperty *emission; // @synthesize emission=_emission;
@property(readonly, retain, nonatomic) MDLMaterialProperty *baseColor; // @synthesize baseColor=_baseColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

