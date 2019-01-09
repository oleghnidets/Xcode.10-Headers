//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBEmbeddingPolicy.h"

@interface IBAbstractUIViewControllerEmbeddingPolicy : IBEmbeddingPolicy
{
}

- (void)performEmbedWithObjects:(id)arg1 inDocumentEditor:(id)arg2;
- (void)performEmbedWithObjects:(id)arg1 inStoryboardDocumentEditor:(id)arg2;
- (id)embedObjects:(id)arg1 fromDocument:(id)arg2 context:(id)arg3;
- (BOOL)canEmbedObjects:(id)arg1 fromDocument:(id)arg2;
- (id)embedViewControllers:(id)arg1 fromStoryboardDocument:(id)arg2 context:(id)arg3;
- (BOOL)canEmbedViewControllers:(id)arg1 fromStoryboardDocument:(id)arg2;
- (id)viewControllersForObjects:(id)arg1 fromStoryboardDocument:(id)arg2;

@end

