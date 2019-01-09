//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBWKPreferences, NSString;

@interface IBWKWebViewConfiguration : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    BOOL _suppressesIncrementalRendering;
    BOOL _allowsAirPlayForMediaPlayback;
    BOOL _allowsInlineMediaPlayback;
    BOOL _allowsPictureInPictureMediaPlayback;
    BOOL _ignoresViewportScaleLimits;
    NSString *_applicationNameForUserAgent;
    long long _selectionGranularity;
    unsigned long long _dataDetectorTypes;
    unsigned long long _mediaTypesRequiringUserActionForPlayback;
    IBWKPreferences *_preferences;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain, nonatomic) IBWKPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback; // @synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback;
@property(nonatomic) BOOL ignoresViewportScaleLimits; // @synthesize ignoresViewportScaleLimits=_ignoresViewportScaleLimits;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) BOOL allowsPictureInPictureMediaPlayback; // @synthesize allowsPictureInPictureMediaPlayback=_allowsPictureInPictureMediaPlayback;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(nonatomic) BOOL allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) BOOL allowsAirPlayForMediaPlayback; // @synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback;
@property(copy, nonatomic) NSString *applicationNameForUserAgent; // @synthesize applicationNameForUserAgent=_applicationNameForUserAgent;
@property(nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setIbInspectedSupportIncrementalRendering:(BOOL)arg1;
- (BOOL)ibInspectedSupportIncrementalRendering;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

