//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XDUMLClassInterfaceCommons.h"

@class NSArray;

@protocol XDUMLInterface <XDUMLClassInterfaceCommons>
- (void)implementorRemoved:(id <XDUMLImplementation>)arg1;
- (void)implementorAdded:(id <XDUMLImplementation>)arg1;
- (NSArray *)implementors;
- (NSArray *)redefinedInterface;
- (NSArray *)nestedInterface;
- (NSArray *)ownedOperations;
- (NSArray *)ownedAttributes;
@end

