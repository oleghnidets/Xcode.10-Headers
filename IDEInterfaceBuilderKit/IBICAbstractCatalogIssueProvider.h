//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEAbstractLiveIssueProvider.h"

@class DVTNotificationToken;

@interface IBICAbstractCatalogIssueProvider : IDEAbstractLiveIssueProvider
{
    DVTNotificationToken *_warningsChangedToken;
}

- (void).cxx_destruct;
- (id)updatedIssuesForDocument:(id)arg1;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end

