//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, WBSPersistentPropertyListStore;

@interface WBSPasswordBreachStore : NSObject
{
    WBSPersistentPropertyListStore *_store;
}

+ (_Bool)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)arg1 expectedValue:(id)arg2;
+ (id)_createPersistentIdentifierCanary;
- (void).cxx_destruct;
- (void)saveAndCloseStoreSynchronously;
- (void)saveStoreSynchronously;
@property(retain, nonatomic) NSDate *lastSessionCompletionDate;
@property(nonatomic) unsigned long long rampIdentifier;
@property(retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property(retain, nonatomic) NSArray *resultRecords;
@property(retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
- (id)initWithBackingStoreURL:(id)arg1;

@end

