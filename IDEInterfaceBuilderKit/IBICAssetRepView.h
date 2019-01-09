//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "NSAccessibilityGroup.h"

@class IBImageButton, IBTextWithTrailingItem, NSButton, NSColor, NSImage, NSNumber, NSString, NSTextField, NSTrackingArea;

@interface IBICAssetRepView : DVTLayoutView_ML <NSAccessibilityGroup>
{
    double _imageScale;
    NSImage *_image;
    double _previousScale;
    unsigned long long _titleHighlightCornerMask;
    NSTextField *_placeholderText;
    IBTextWithTrailingItem *_titleText;
    NSButton *_playPauseButton;
    long long _frameIndex;
    NSTrackingArea *_primaryTrackingArea;
    BOOL _playing;
    IBImageButton *_revealContentButton;
    NSButton *_statusButton;
    BOOL _showsDropIndicator;
    BOOL _showsSelection;
    BOOL _showsContextFocus;
    BOOL _drawsWithKeyAppearance;
    BOOL _drawsHighlightsInternally;
    BOOL _drawDebugBorder;
    BOOL _showsRevealContentButton;
    NSString *_title;
    NSImage *_statusImage;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    double _maximumTitleWidth;
    double _maximumTitleHeight;
    unsigned long long _titleLineBreakMode;
    NSNumber *_explicitFullTextHeightHeight;
    id _representedObject;
    id <IBICAssetRepViewDelegate> _delegate;
    struct CGSize _imageSize;
    CDStruct_c519178c _imagePadding;
    CDStruct_c519178c _textPadding;
}

+ (double)scaleForDrawingImageForSize:(struct CGSize)arg1 intoViewSize:(struct CGSize)arg2;
+ (id)placeholderTextField;
+ (CDStruct_c519178c)defaultTextPadding;
+ (CDStruct_c519178c)defaultImagePadding;
@property(nonatomic) __weak id <IBICAssetRepViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsRevealContentButton; // @synthesize showsRevealContentButton=_showsRevealContentButton;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) CDStruct_c519178c textPadding; // @synthesize textPadding=_textPadding;
@property(nonatomic) CDStruct_c519178c imagePadding; // @synthesize imagePadding=_imagePadding;
@property(retain, nonatomic) NSNumber *explicitFullTextHeightHeight; // @synthesize explicitFullTextHeightHeight=_explicitFullTextHeightHeight;
@property(nonatomic) BOOL drawDebugBorder; // @synthesize drawDebugBorder=_drawDebugBorder;
@property(nonatomic) BOOL drawsHighlightsInternally; // @synthesize drawsHighlightsInternally=_drawsHighlightsInternally;
@property(nonatomic) BOOL drawsWithKeyAppearance; // @synthesize drawsWithKeyAppearance=_drawsWithKeyAppearance;
@property(nonatomic) unsigned long long titleLineBreakMode; // @synthesize titleLineBreakMode=_titleLineBreakMode;
@property(nonatomic) double maximumTitleHeight; // @synthesize maximumTitleHeight=_maximumTitleHeight;
@property(nonatomic) double maximumTitleWidth; // @synthesize maximumTitleWidth=_maximumTitleWidth;
@property(nonatomic) BOOL showsContextFocus; // @synthesize showsContextFocus=_showsContextFocus;
@property(nonatomic) BOOL showsSelection; // @synthesize showsSelection=_showsSelection;
@property(nonatomic) BOOL showsDropIndicator; // @synthesize showsDropIndicator=_showsDropIndicator;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(readonly, copy) NSString *debugDescription;
- (void)userDidPressRevealButton:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)playOrPause:(id)arg1;
- (void)stopPlayback:(id)arg1;
- (void)startPlayback:(id)arg1;
- (void)incrementToNextFrame;
- (long long)frameCount;
- (long long)frameIndex;
- (void)setFrameIndex:(long long)arg1;
- (void)updateTrackingAreas;
- (BOOL)delegateSupportsAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawHighlights;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)drawTextHighlightInRect:(struct CGRect)arg1;
- (void)drawImageHighlightInRect:(struct CGRect)arg1;
- (id)titleHighlightImage;
- (id)imageHighlightImage;
- (id)effectiveTitleColor;
- (id)effectiveHighlightColor;
- (double)scaleForImage;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)fittingImageSize;
- (double)fittingFullTextHeight;
- (double)ibAssetGroupViewVerticalAlignmentAnchor;
- (CDStruct_a5efb618)computeLayout;
- (struct CGSize)rawTitleSize;
- (id)titleText;
- (id)titleAttributes;
- (id)titleParagraphStyle;
- (id)font;
- (BOOL)isFlipped;
@property(readonly) struct CGRect imageFrame;
- (void)clickedStatusImage:(id)arg1;
@property(readonly, nonatomic) struct CGRect statusImageRect;
- (id)playPauseButtonCreatingIfNeeded:(BOOL)arg1;
- (void)setMaximumTitleWidthToCurrentImageWidth;
- (void)setTitleHighlightCornerMask:(BOOL)arg1;
- (void)setTitleTextNeedsDisplayAndLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
