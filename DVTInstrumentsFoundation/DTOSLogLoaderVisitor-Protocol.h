//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData;

@protocol DTOSLogLoaderVisitor
@property(nonatomic) unsigned int lostEventsSinceLastVisit;
@property(nonatomic) unsigned long long lastMachContinuousTime;
@property(nonatomic, getter=isFetchComplete) BOOL fetchComplete;
@property(retain, nonatomic) NSData *nextOutputBytes;
@end
