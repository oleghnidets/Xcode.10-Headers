//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGKitDebuggingAddition.h"

@class DVTStackBacktrace, IDELaunchSession, NSString;

@interface DBGAppKitDebuggingAddition : NSObject <DBGKitDebuggingAddition>
{
    BOOL _showsFramesOfAllViews;
    BOOL _showsAlignmentRectanglesOfAllViews;
    BOOL _flashesDrawingOfAllViews;
    BOOL _showsResponsiveScrollingStatusOfAllViews;
    unsigned long long _systemAppearanceTestingOverride;
    IDELaunchSession *_launchSession;
    NSString *_identifier;
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(nonatomic) unsigned long long systemAppearanceTestingOverride; // @synthesize systemAppearanceTestingOverride=_systemAppearanceTestingOverride;
@property(nonatomic) BOOL showsResponsiveScrollingStatusOfAllViews; // @synthesize showsResponsiveScrollingStatusOfAllViews=_showsResponsiveScrollingStatusOfAllViews;
@property(nonatomic) BOOL flashesDrawingOfAllViews; // @synthesize flashesDrawingOfAllViews=_flashesDrawingOfAllViews;
@property(nonatomic) BOOL showsAlignmentRectanglesOfAllViews; // @synthesize showsAlignmentRectanglesOfAllViews=_showsAlignmentRectanglesOfAllViews;
@property(nonatomic) BOOL showsFramesOfAllViews; // @synthesize showsFramesOfAllViews=_showsFramesOfAllViews;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) BOOL supportsSystemAppearanceTestingOverrides;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

