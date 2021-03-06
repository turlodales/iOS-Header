//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeConfigurationLogEvent, HMDLogEventContextProvider, NSMapTable, NSObject;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDLogEventDispatcher : HMFObject
{
    id <HMFLocking> _lock;
    HMDHomeConfigurationLogEvent *_cachedHomeConfiguration;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMapTable *_logEventObserversByClass;
    unsigned long long _cachedHomeConfigurationVersion;
    HMDLogEventContextProvider *_logEventContextProvider;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDLogEventContextProvider *logEventContextProvider; // @synthesize logEventContextProvider=_logEventContextProvider;
@property(nonatomic) unsigned long long cachedHomeConfigurationVersion; // @synthesize cachedHomeConfigurationVersion=_cachedHomeConfigurationVersion;
@property(readonly, nonatomic) NSMapTable *logEventObserversByClass; // @synthesize logEventObserversByClass=_logEventObserversByClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;
- (void)removeObserver:(id)arg1 forEventClass:(Class)arg2;
- (void)addObserver:(id)arg1 forEventClasses:(id)arg2;
- (void)addObserver:(id)arg1 forEventClass:(Class)arg2;
@property(retain, nonatomic) HMDHomeConfigurationLogEvent *cachedHomeConfiguration; // @synthesize cachedHomeConfiguration=_cachedHomeConfiguration;
- (id)init;

@end

