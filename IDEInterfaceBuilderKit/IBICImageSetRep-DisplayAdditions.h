//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBICImageSetRep.h"

#import "IBICMediaResourceProvider.h"

@class NSString;

@interface IBICImageSetRep (DisplayAdditions) <IBICMediaResourceProvider>
- (id)mediaResource;
- (BOOL)shouldIncludeInMediaLibrary;
- (void)populateChildrenForInclusionInMediaLibrary:(id)arg1;
@property(nonatomic) struct NSEdgeInsets ibInspectedAlignmentInsets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

