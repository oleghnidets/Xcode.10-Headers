//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDESourceCodeGenerationDestination.h"

@class IDESourceCodeGenerationPartialResult, IDESwiftSourceCodeGenerator, NSDictionary, NSString;

@protocol IDESwiftSourceCodeGenerationDestination <IDESourceCodeGenerationDestination>
- (IDESourceCodeGenerationPartialResult *)sourceCodeGenerator:(IDESwiftSourceCodeGenerator *)arg1 prepareToAddSwiftClassMethodDefinitionWithName:(NSString *)arg2 inClassItem:(id <DVTSourceLandmarkItemProtocol>)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
- (IDESourceCodeGenerationPartialResult *)sourceCodeGenerator:(IDESwiftSourceCodeGenerator *)arg1 prepareToAddSwiftInstanceMethodDefinitionWithName:(NSString *)arg2 inClassItem:(id <DVTSourceLandmarkItemProtocol>)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
- (IDESourceCodeGenerationPartialResult *)sourceCodeGenerator:(IDESwiftSourceCodeGenerator *)arg1 prepareToAddSwiftInstanceVariableReleaseForTeardownWithName:(NSString *)arg2 inClassItem:(id <DVTSourceLandmarkItemProtocol>)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
- (IDESourceCodeGenerationPartialResult *)sourceCodeGenerator:(IDESwiftSourceCodeGenerator *)arg1 prepareToAddSwiftPropertyDeclarationWithName:(NSString *)arg2 type:(NSString *)arg3 inClassItem:(id <DVTSourceLandmarkItemProtocol>)arg4 options:(NSDictionary *)arg5 error:(id *)arg6;
@end

