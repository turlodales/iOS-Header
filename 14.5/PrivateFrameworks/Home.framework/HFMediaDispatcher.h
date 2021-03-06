//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSHashTable;

@interface HFMediaDispatcher : NSObject
{
    NSArray *_appleMusicMagicAuthCapableAccounts;
    NSHashTable *_appleMusicAccountObservers;
}

+ (id)sharedDispatcher;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *appleMusicAccountObservers; // @synthesize appleMusicAccountObservers=_appleMusicAccountObservers;
@property(copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts; // @synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts;
- (void)_setupAppleMusicAccountStoreIfNecessary;
@property(readonly, nonatomic) _Bool isUsingiCloud;
- (void)removeAppleMusicAccountObserver:(id)arg1;
- (void)addAppleMusicAccountObserver:(id)arg1;
@property(readonly, nonatomic) ACAccountStore *appleMusicAccountStore;
- (id)init;

@end

