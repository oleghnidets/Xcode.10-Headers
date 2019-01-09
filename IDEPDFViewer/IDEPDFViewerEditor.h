//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DVTBasicFindBarFindable.h"

@class NSString, PDFView;

@interface IDEPDFViewerEditor : IDEEditor <DVTBasicFindBarFindable>
{
    PDFView *_pdfView;
    NSString *_findString;
    unsigned long long _findCaseSensitive;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain) PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)pdf_zoomOut:(id)arg1;
- (void)pdf_zoomIn:(id)arg1;
- (void)pdf_previousPage:(id)arg1;
- (void)pdf_nextPage:(id)arg1;
- (void)pdf_twoPagesContinuous:(id)arg1;
- (void)pdf_twoPages:(id)arg1;
- (void)pdf_singlePageContinuous:(id)arg1;
- (void)pdf_singlePage:(id)arg1;
- (void)pdf_zoomActualSize:(id)arg1;
- (void)pdf_automaticallyResize:(id)arg1;
- (void)basicFindBarLostFocus:(id)arg1;
- (BOOL)basicFindBar:(id)arg1 findPreviousByWrapping:(BOOL)arg2;
- (BOOL)basicFindBar:(id)arg1 findNextByWrapping:(BOOL)arg2;
- (long long)basicFindBar:(id)arg1 findString:(id)arg2 caseSensitive:(BOOL)arg3 withFindType:(unsigned long long)arg4 andMatchStyle:(unsigned long long)arg5;
- (void)selectAndScrollToPDFSelection:(id)arg1;
- (BOOL)basicFindBar:(id)arg1 supportsMatchStyle:(unsigned long long)arg2;
- (BOOL)basicFindBar:(id)arg1 supportsFindType:(unsigned long long)arg2;
- (id)createFindBar;
- (BOOL)findBarSupported;
- (void)useSelectionForReplace:(id)arg1;
- (void)useSelectionForFind:(id)arg1;
- (unsigned long long)searchOptions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (void)loadView;
- (void)takeFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

