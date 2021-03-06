//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface HDTaskServerRegistry : NSObject
{
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    NSMutableSet *_loadedPluginURLs;
    struct os_unfair_lock_s _lock;
    HDDaemon *_daemon;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 error:(id *)arg6;
- (void)taskServerDidInvalidate:(id)arg1;
- (void)didCreateTaskServer:(id)arg1;
- (void)removeTaskServerObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2 queue:(id)arg3;
- (id)taskServerForTaskUUID:(id)arg1;
- (_Bool)_lock_registerTaskServerClass:(Class)arg1 error:(id *)arg2;
- (_Bool)_lock_loadTaskServersFromPluginAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadTaskServersFromPluginAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)registerTaskServerClasses:(id)arg1 error:(id *)arg2;
- (_Bool)registerTaskServerClass:(Class)arg1 error:(id *)arg2;
- (_Bool)registerTaskServerClassesWithProvider:(id)arg1 error:(id *)arg2;
- (id)initWithDaemon:(id)arg1;

@end

