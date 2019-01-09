//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRepIdentifier.h>

@class IBICColorSpace, IBICHeightClass, IBICIdiom, IBICLanguageDirection, IBICScale, IBICSubtype, IBICWidthClass;

@interface IBICImageSetRepIdentifier : IBICSlottedAssetRepIdentifier
{
}

+ (id)inferredRepIdentifiersForImageReps:(id)arg1;
+ (id)scalesForImages:(id)arg1;
+ (id)imagesOrderedFromNarrowestToWidest:(id)arg1;
+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1 slotComponentTransformer:(CDUnknownBlockType)arg2;
+ (Class)slotClass;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
@property(readonly) IBICLanguageDirection *languageDirection;
@property(readonly) IBICColorSpace *colorSpace;
@property(readonly) IBICHeightClass *heightClass;
@property(readonly) IBICWidthClass *widthClass;
@property(readonly) IBICScale *scale;
@property(readonly) IBICSubtype *subtype;
@property(readonly) IBICIdiom *idiom;
- (id)slot;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end
