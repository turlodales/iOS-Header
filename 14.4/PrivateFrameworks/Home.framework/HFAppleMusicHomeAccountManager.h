//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HFAppleMusicHomeAccountManager : NSObject
{
    NSMutableDictionary *_homeIdentifierToMediaAccountMapping;
    NSObject<OS_dispatch_queue> *_dataModelUpdateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueryQueue;
    NSMutableDictionary *_homeIdentifierToActiveAMSQueriesMapping;
    NSMutableDictionary *_homeIdentifierToFuturePromiseMapping;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *homeIdentifierToFuturePromiseMapping; // @synthesize homeIdentifierToFuturePromiseMapping=_homeIdentifierToFuturePromiseMapping;
@property(retain, nonatomic) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping; // @synthesize homeIdentifierToActiveAMSQueriesMapping=_homeIdentifierToActiveAMSQueriesMapping;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueryQueue; // @synthesize concurrentQueryQueue=_concurrentQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue; // @synthesize dataModelUpdateQueue=_dataModelUpdateQueue;
@property(retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaAccountMapping; // @synthesize homeIdentifierToMediaAccountMapping=_homeIdentifierToMediaAccountMapping;
- (void)getHomeMediaAccountForHome:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_finishPendingPromisesWithMediaAccountInfo:(id)arg1 forHome:(id)arg2;
- (id)_futureForQueryLimitForHome:(id)arg1;
- (id)_fetchMediaAccountForHome:(id)arg1;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)mediaAccountForHomeIdentifier:(id)arg1;
- (id)executeHomeMediaAccountFetchForHome:(id)arg1;
- (void)executeHomeMediaAccountFetchForAllHomes;
- (void)applicationWillEnterForeground;
- (id)init;

@end

