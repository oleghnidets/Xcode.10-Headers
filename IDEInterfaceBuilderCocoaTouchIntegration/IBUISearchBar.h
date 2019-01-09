//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import "IBDocumentArchiving.h"
#import "IBUITextInputTraits.h"

@class IBOffsetWrapper, IBUITextInputTraits, NSArray, NSColor, NSImage, NSString;

@interface IBUISearchBar : IBUIView <IBDocumentArchiving, IBUITextInputTraits>
{
    BOOL _translucent;
    BOOL _showsSearchResultsButton;
    BOOL _showsBookmarkButton;
    BOOL _showsCancelButton;
    BOOL _showsScopeBar;
    BOOL _isInBar;
    BOOL _forcesPrompt;
    int _searchBarStyle;
    NSArray *_scopeButtonTitles;
    IBUITextInputTraits *_textInputTraits;
    long long _barStyle;
    NSString *_text;
    NSString *_prompt;
    NSString *_placeholder;
    NSColor *_barTintColor;
    IBOffsetWrapper *_searchFieldBackgroundPositionAdjustment;
    IBOffsetWrapper *_searchTextPositionAdjustment;
    NSImage *_backgroundImage;
    NSImage *_scopeBarBackgroundImage;
    long long _selectedScopeButtonIndex;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIsPrompted;
+ (id)keyPathsForValuesAffectingIbInspectedSearchFieldBackgroundPositionVerticalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedSearchFieldBackgroundPositionHorizontalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedHasSearchFieldBackgroundPositionAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedSearchTextPositionVerticalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedSearchTextPositionHorizontalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedHasSearchTextPositionAdjustment;
+ (id)keyPathsForValuesAffectingInspectedScopeButtonTitles;
+ (id)keyPathsForValuesAffectingInspectedShowsScopeBar;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL forcesPrompt; // @synthesize forcesPrompt=_forcesPrompt;
@property(nonatomic) BOOL isInBar; // @synthesize isInBar=_isInBar;
@property(nonatomic) BOOL showsScopeBar; // @synthesize showsScopeBar=_showsScopeBar;
@property(nonatomic) long long selectedScopeButtonIndex; // @synthesize selectedScopeButtonIndex=_selectedScopeButtonIndex;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) BOOL showsBookmarkButton; // @synthesize showsBookmarkButton=_showsBookmarkButton;
@property(nonatomic) BOOL showsSearchResultsButton; // @synthesize showsSearchResultsButton=_showsSearchResultsButton;
@property(retain, nonatomic) NSImage *scopeBarBackgroundImage; // @synthesize scopeBarBackgroundImage=_scopeBarBackgroundImage;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) IBOffsetWrapper *searchTextPositionAdjustment; // @synthesize searchTextPositionAdjustment=_searchTextPositionAdjustment;
@property(copy, nonatomic) IBOffsetWrapper *searchFieldBackgroundPositionAdjustment; // @synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic) int searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (void).cxx_destruct;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)decodeTintColor:(id)arg1;
- (void)encodeTintColor:(id)arg1;
@property(retain, nonatomic) IBUITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(copy, nonatomic) NSArray *scopeButtonTitles; // @synthesize scopeButtonTitles=_scopeButtonTitles;
@property(readonly, nonatomic, getter=isPrompted) BOOL prompted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (id)scopeBarControlFont;
- (id)searchFieldFont;
- (id)scopeBarTextRects;
- (id)ibWidgetType;
- (id)ibPasteboardTypes;
- (BOOL)ibSupportsInsertionIntoBarButtonItems;
- (id)ibInitialConnectionLabelSearchTerm;
- (void)setIbInspectedSearchFieldBackgroundPositionVerticalAdjustment:(double)arg1;
- (double)ibInspectedSearchFieldBackgroundPositionVerticalAdjustment;
- (void)setIbInspectedSearchFieldBackgroundPositionHorizontalAdjustment:(double)arg1;
- (double)ibInspectedSearchFieldBackgroundPositionHorizontalAdjustment;
- (void)setIbInspectedHasSearchFieldBackgroundPositionAdjustment:(BOOL)arg1;
- (BOOL)ibInspectedHasSearchFieldBackgroundPositionAdjustment;
- (void)setIbInspectedSearchTextPositionVerticalAdjustment:(double)arg1;
- (double)ibInspectedSearchTextPositionVerticalAdjustment;
- (void)setIbInspectedSearchTextPositionHorizontalAdjustment:(double)arg1;
- (double)ibInspectedSearchTextPositionHorizontalAdjustment;
- (void)setIbInspectedHasSearchTextPositionAdjustment:(BOOL)arg1;
- (BOOL)ibInspectedHasSearchTextPositionAdjustment;
- (void)setInspectedScopeButtonTitles:(id)arg1;
- (id)inspectedScopeButtonTitles;
- (void)setInspectedShowsScopeBar:(BOOL)arg1;
- (BOOL)inspectedShowsScopeBar;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (id)ibLocalLocalizableStringArrayAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (Class)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

