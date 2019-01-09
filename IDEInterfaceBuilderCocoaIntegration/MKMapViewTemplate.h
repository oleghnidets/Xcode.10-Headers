//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "IBDocumentArchiving.h"

@class NSString;

@interface MKMapViewTemplate : NSView <IBDocumentArchiving>
{
    BOOL _zoomEnabled;
    BOOL _scrollEnabled;
    BOOL _rotateEnabled;
    BOOL _pitchEnabled;
    BOOL _showsUserLocation;
    BOOL _showsBuildings;
    BOOL _showsPointsOfInterest;
    BOOL _showsCompass;
    BOOL _showsZoomControls;
    BOOL _showsScale;
    BOOL _showsTraffic;
    BOOL _encodeAsRuntimeInstance;
    unsigned long long _mapType;
}

@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(nonatomic) BOOL showsTraffic; // @synthesize showsTraffic=_showsTraffic;
@property(nonatomic) BOOL showsScale; // @synthesize showsScale=_showsScale;
@property(nonatomic) BOOL showsZoomControls; // @synthesize showsZoomControls=_showsZoomControls;
@property(nonatomic) BOOL showsCompass; // @synthesize showsCompass=_showsCompass;
@property(nonatomic) BOOL showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(nonatomic) BOOL showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) BOOL showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(nonatomic, getter=isPitchEnabled) BOOL pitchEnabled; // @synthesize pitchEnabled=_pitchEnabled;
@property(nonatomic, getter=isRotateEnabled) BOOL rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (Class)classForCoder;
- (id)ibRuntimeClassName;
- (void)drawRect:(struct CGRect)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

