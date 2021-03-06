//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject
{
    long long _contentProtectionState;
    _Bool _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (void).cxx_destruct;
- (void)_queue_adjustContentProtectionStateWithBlock:(CDUnknownBlockType)arg1;
- (long long)_queue_observedState;
- (id)contentProtectionStrategyForMinimumProtection:(id)arg1;
- (id)classDStrategy;
- (id)classCStrategy;
- (_Bool)deviceUnlockedSinceBoot;
- (_Bool)isProtectedDataAvailable;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)addContentProtectionObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

