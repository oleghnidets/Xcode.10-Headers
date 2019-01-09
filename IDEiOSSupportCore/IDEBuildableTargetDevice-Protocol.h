//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTBasicDevice.h"

@class DVTFilePath, DVTOperation, IDEBuildParameters, IDELaunchSession, IDEOverridingBuildProperties, IDEScheme, IDEWorkspace, NSArray, NSDictionary, NSString;

@protocol IDEBuildableTargetDevice <DVTBasicDevice>
- (DVTOperation *)analysisOperationWithAnalysisToolService:(id <IDEAnalysisToolService>)arg1 location:(id)arg2 workingDirectory:(DVTFilePath *)arg3 workspaceFilePath:(DVTFilePath *)arg4 projectFilePath:(DVTFilePath *)arg5 packagesPaths:(NSArray *)arg6 outError:(id *)arg7;
- (BOOL)performInstallWithName:(NSString *)arg1 path:(DVTFilePath *)arg2 buildables:(NSArray *)arg3 buildParameters:(IDEBuildParameters *)arg4 includeDebugSupportFiles:(BOOL)arg5 killProcesses:(NSArray *)arg6 workspace:(IDEWorkspace *)arg7 outError:(id *)arg8;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (NSDictionary *)scriptingEnvironment;
- (NSString *)closestRelativeOfTargetArchitecture:(NSString *)arg1 forBuildArchitectures:(NSArray *)arg2;
- (BOOL)supportsRunningExecutableAtPath:(DVTFilePath *)arg1 usingArchitecture:(NSString *)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(NSString *)arg1 launchSession:(IDELaunchSession *)arg2 error:(id *)arg3;
- (IDEOverridingBuildProperties *)deviceSpecificOverridingPropertiesForBuildable:(id <IDEBuildable>)arg1 withBaselineParameters:(IDEBuildParameters *)arg2;
- (void)didBecomeActiveDeviceForRunContext:(IDEScheme *)arg1;
- (NSArray *)supportedSDKsForBuildable:(id <IDEBuildable>)arg1 buildParameters:(IDEBuildParameters *)arg2 error:(id *)arg3;
- (NSArray *)supportedArchitecturesForBuildable:(id <IDEBuildable>)arg1 buildParameters:(IDEBuildParameters *)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForBuildable:(id <IDEBuildable>)arg1 buildParameters:(IDEBuildParameters *)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForPathRunnableWithArchitecture:(NSString *)arg1;
- (BOOL)canBeDefaultDeviceForBuildable:(id <IDEBuildable>)arg1 buildParameters:(IDEBuildParameters *)arg2;
- (BOOL)deviceSupportsBuildable:(id <IDEBuildable>)arg1 buildParameters:(IDEBuildParameters *)arg2 error:(id *)arg3;
- (BOOL)canBeRunDestination;
@end

