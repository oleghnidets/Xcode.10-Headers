//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBCFMutableDictionary, NSDictionary;

@interface IBDocumentationController : NSObject
{
    NSDictionary *docSetBundles;
    IBCFMutableDictionary *docSets;
}

+ (id)sharedInstance;
- (void)openPathInXcode:(id)arg1;
- (void)openAppleRefInXcode:(id)arg1;
- (void)openUUIDInXcode:(id)arg1;
- (id)documentationTokenForClassName:(id)arg1 methodOrPropertyName:(id)arg2 inTargetRuntime:(id)arg3 includeInheritance:(BOOL)arg4;
- (id)documentationTokenForClassName:(id)arg1 bindingName:(id)arg2 inTargetRuntime:(id)arg3 includeInheritance:(BOOL)arg4;
- (id)documentationTokenForClassName:(id)arg1 inTargetRuntime:(id)arg2 includeInheritance:(BOOL)arg3;
- (id)docTokensForScope:(id)arg1 token:(id)arg2 tokenType:(id)arg3 language:(id)arg4 matchType:(long long)arg5 inTargetRuntime:(id)arg6;
- (void)registerDocSetsForPlugin:(id)arg1;

@end

