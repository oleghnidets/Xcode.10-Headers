//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocument, NSDictionary, NSMutableDictionary;

@interface IBTargetVersionDependencySet : NSObject
{
    IBDocument *document;
    NSMutableDictionary *pluginDeclaredDependencies;
    NSMutableDictionary *pluginDeclaredDependencyDefaults;
    long long category;
}

- (void)setVersion:(id)arg1 forPluginDeclaredDependency:(id)arg2;
- (void)setDefaultVersion:(id)arg1 forPluginDeclaredDependency:(id)arg2;
- (id)effectiveVersionForPluginDeclaredDependency:(id)arg1;
- (id)effectiveDefaultVersionForPluginDeclaredDependency:(id)arg1;
- (id)defaultVersionForPluginDeclaredDependency:(id)arg1;
- (id)versionForPluginDeclaredDependency:(id)arg1;
@property(copy) NSDictionary *pluginDeclaredDependencyDefaults;
@property(copy) NSDictionary *pluginDeclaredDependencies;
- (id)prunePluginDeclaredDependencies:(id)arg1;
- (id)validPluginDeclaredDependencyIDs;
- (id)pluginIdentifiersWithApplicablePluginDeclaredDependencies;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 forCategory:(long long)arg2;

@end

