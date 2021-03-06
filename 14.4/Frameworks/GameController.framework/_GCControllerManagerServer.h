//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCControllerManager.h>

#import <GameController/GCDeviceConfigurationRegistry-Protocol.h>
#import <GameController/GCDeviceRegistry-Protocol.h>
#import <GameController/GCLogicalDeviceRegistry-Protocol.h>
#import <GameController/GCPhysicalDeviceRegistry-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol GCDeviceConfigurationRegistry;

@interface _GCControllerManagerServer : _GCControllerManager <GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry>
{
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    struct os_unfair_lock_s _configurationsLock;
    NSMutableSet *_configurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSSet *_activeControllerDevices;
}

- (void).cxx_destruct;
@property(copy) NSSet *activeControllerDevices; // @synthesize activeControllerDevices=_activeControllerDevices;
- (void)_hidqueue_pushPendingDriverConnection:(id)arg1 forRegistryID:(id)arg2;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)arg1;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg1;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg1;
- (void)refreshActiveConfigurations;
- (void)refreshActiveConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)removeConfigurationWithIdentifier:(id)arg1;
- (_Bool)updateConfiguration:(id)arg1;
- (_Bool)addConfiguration:(id)arg1 replaceExisting:(_Bool)arg2;
- (id)configurationWithIdentifier:(id)arg1;
- (_Bool)hasConfigurationWithIdentifier:(id)arg1;
- (void)deviceManager:(id)arg1 deviceDidDisconnect:(id)arg2;
- (void)deviceManager:(id)arg1 deviceDidConnect:(id)arg2;
@property(readonly) id <GCDeviceConfigurationRegistry> deviceConfigurationRegistry;
- (void)_onqueue_unregisterLogicalDevice:(id)arg1;
- (void)_onqueue_registerLogicalDevice:(id)arg1;
- (void)_onqueue_unregisterPhysicalDevice:(id)arg1;
- (void)_onqueue_registerPhysicalDevice:(id)arg1;
- (void)_onqueue_refreshLogicalDevices;
- (void)_onqueue_refreshControllers;
- (id)initWithControllerProfiles:(id)arg1;
- (id)init;
- (id)logicalDevices;
- (void)driverCheckIn;
- (_Bool)acceptIncomingDriverConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

