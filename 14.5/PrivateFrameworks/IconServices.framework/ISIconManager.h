//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol ISIconCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISIconManager : NSObject
{
    struct os_unfair_lock_s _observerLock;
    id _iconCache;
    id _iconRegistry;
    id _observers;
    id _internalQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSHashTable *iconRegistry; // @synthesize iconRegistry=_iconRegistry;
@property(readonly) id <ISIconCache> iconCache; // @synthesize iconCache=_iconCache;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)findOrRegisterIcon:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

