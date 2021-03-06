//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMDUnassociatedMediaAccessory, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDMediaBrowserDataSource, HMDMediaBrowserDelegate, HMFLocking, OS_dispatch_queue;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>
{
    id <HMFLocking> _lock;
    NSMutableSet *_accessoryAdvertisements;
    _Bool _discoverUnassociatedAccessories;
    _Bool _discoverAssociatedAccessories;
    _Bool _updateAvailableOutputDevices;
    id <HMDMediaBrowserDelegate> _delegate;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id <HMDMediaBrowserDataSource> _dataSource;
}

+ (id)logCategory;
+ (id)advertisementsFromOutputDevices:(struct __CFArray *)arg1;
+ (id)shortDescription;
- (void).cxx_destruct;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDMediaBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;
- (void)deregisterAccessories:(id)arg1;
- (void)updateSessionsForAccessories:(id)arg1;
- (void)registerAccessories:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (id)dumpDescription;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)startDiscoveringAssociatedAccessories;
@property(readonly, copy) NSArray *accessoryAdvertisements;
@property(readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1 dataSource:(id)arg2;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

