//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEEditorDocumentDerivedContentProvider;

@protocol IDEEditorDocumentDerivedContentOwner <NSObject>

@optional
- (void)derivedContentProvider:(IDEEditorDocumentDerivedContentProvider *)arg1 didUnregisterClient:(id <IDEEditorDocumentDerivedContentClient>)arg2;
- (void)derivedContentProvider:(IDEEditorDocumentDerivedContentProvider *)arg1 willRegisterClient:(id <IDEEditorDocumentDerivedContentClient>)arg2;
@end

