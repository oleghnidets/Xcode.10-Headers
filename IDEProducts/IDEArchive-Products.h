//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEArchive.h"

@class IDEProductCategory, NSString;

@interface IDEArchive (Products)
+ (id)keyPathsForValuesAffectingProducts_hideDeveloperIDStatus;
+ (id)keyPathsForValuesAffectingProducts_hideShowStatusLog;
+ (id)largestImageInFilePaths:(id)arg1;
- (BOOL)products_canExportDeveloperIDApp;
- (BOOL)products_hideDeveloperIDStatus;
@property(readonly) BOOL products_hideShowStatusLog;
- (BOOL)products_hideDownloadSymbols;
- (id)products_validateButtonTitle;
- (id)products_distributeButtonTitle;
@property(readonly) IDEProductCategory *products_productCategory;
- (id)products_platform;
- (id)applicationBundle;
- (id)products_platformName;
- (id)products_appInfoPlist;
@property(readonly) NSString *products_displayName;
@end

