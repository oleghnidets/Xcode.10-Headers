//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFileDataType, DVTFilePath, DVTOperation, IDEAnalysisTool, IDEBuildSchemeAction, IDELaunchParametersSnapshot, IDERunDestination, IDESchemeCommand, NSArray, NSString;

@protocol IDEAnalysisToolService <NSObject>
+ (IDEAnalysisTool *)analysisToolWithIdentifier:(NSString *)arg1 platformIdentifier:(NSString *)arg2;
+ (NSArray *)analysisToolsForPlatformIdentifier:(NSString *)arg1;
@property(retain) IDELaunchParametersSnapshot *launchParameters;
@property(copy) IDERunDestination *runDestination;
@property(retain) IDEAnalysisTool *analysisTool;
- (NSArray *)packagesPathsToLoadDuringProfileAnalysisForBuildSchemeAction:(IDEBuildSchemeAction *)arg1 schemeCommand:(IDESchemeCommand *)arg2;
- (id <IDEAnalysisToolServiceExecutable>)customExecutableToSelectForBuildSchemeAction:(IDEBuildSchemeAction *)arg1 schemeCommand:(IDESchemeCommand *)arg2;
- (DVTOperation *)operationWithWorkingDirectory:(DVTFilePath *)arg1 workspaceFilePath:(DVTFilePath *)arg2 projectFilePath:(DVTFilePath *)arg3 packagesPaths:(NSArray *)arg4 outError:(id *)arg5;
- (void)setAttachRunnablePID:(int)arg1 applicationName:(NSString *)arg2;
- (id)initWithRunnableUTIType:(DVTFileDataType *)arg1;
@end

