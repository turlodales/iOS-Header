//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSSet;
@protocol IAPNavigationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface IAPNavigation : NSObject
{
    struct __CFNotificationCenter *_darwinNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
    _Bool _connected;
    id <IAPNavigationDelegate> _delegate;
    NSSet *_availableAccessories;
    NSObject<OS_xpc_object> *_iap2d_connection;
    NSObject<OS_dispatch_queue> *_processingQ;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *processingQ; // @synthesize processingQ=_processingQ;
@property _Bool connected; // @synthesize connected=_connected;
@property(retain) NSObject<OS_xpc_object> *iap2d_connection; // @synthesize iap2d_connection=_iap2d_connection;
@property(retain) NSSet *availableAccessories; // @synthesize availableAccessories=_availableAccessories;
@property __weak id <IAPNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_convert_xpc_array_to_NSArray:(id)arg1;
- (void)_updateInternalStateWithArrayOfAccessories:(id)arg1;
- (void)_getConnectedAccessories;
- (void)_iap2d_server_did_die;
- (void)_iap2d_server_did_launch;
- (void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;
- (void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

