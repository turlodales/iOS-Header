//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <AVFCore/AVObjectMonitoring-Protocol.h>

@class AVWeakReference, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring>
{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    _Bool _registeredForObjectNotifications;
    _Bool _started;
    _Bool _finished;
}

- (void)main;
- (void)cancel;
- (void)monitoredObjectHasDeparted;
- (void)_balanceMonitoringIsFinishedSemaphore;
- (void)_waitUntilFinishedIfNeeded;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (id)_monitoredObject;
- (void)dealloc;
- (void)_unregisterForObjectNotifications;
- (void)_registerForObjectNotifications;
- (id)initWithObject:(id)arg1 notificationNames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

