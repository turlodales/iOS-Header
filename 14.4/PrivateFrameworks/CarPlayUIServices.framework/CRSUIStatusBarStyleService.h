//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayUIServices/BSInvalidatable-Protocol.h>
#import <CarPlayUIServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayUIServices/CRSUIStatusBarStyleClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSMutableArray, NSString;
@protocol CRSUIStatusBarStyleServiceDelegate, OS_dispatch_queue;

@interface CRSUIStatusBarStyleService : NSObject <BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_lock_assertions;
    id <CRSUIStatusBarStyleServiceDelegate> _delegate;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <CRSUIStatusBarStyleServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (oneway void)clientReliquishWithFenceHandle:(id)arg1 animationSettings:(id)arg2;
- (oneway void)clientAcquireForSiriPresentationWithFenceHandle:(id)arg1 animationSettings:(id)arg2;
- (oneway void)clientAcquireWithInterfaceStyle:(id)arg1 contrast:(id)arg2 fenceHandle:(id)arg3 animationSettings:(id)arg4;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)invalidate;
@property(readonly, nonatomic, getter=isSiriPresentation) _Bool siriPresentation;
@property(readonly, nonatomic) long long contrast;
@property(readonly, nonatomic) long long interfaceStyle;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

