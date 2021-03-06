//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFSettingsClient.h>

#import <ActionKit/WFBooleanStateSetting-Protocol.h>

@class BluetoothManager, NSMutableDictionary, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting>
{
    BluetoothManager *_manager;
    CDUnknownBlockType _availabilityCompletion;
    NSMutableDictionary *_observeBlocksPerDeviceType;
}

+ (void)createClientWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *observeBlocksPerDeviceType; // @synthesize observeBlocksPerDeviceType=_observeBlocksPerDeviceType;
@property(copy, nonatomic) CDUnknownBlockType availabilityCompletion; // @synthesize availabilityCompletion=_availabilityCompletion;
@property(readonly, nonatomic) BluetoothManager *manager; // @synthesize manager=_manager;
- (void)setState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerForNotifications;
- (void)availabilityChanged:(id)arg1;
- (void)devicesChanged:(id)arg1;
- (void)observePairedDevicesMatchingType:(unsigned long long)arg1 update:(CDUnknownBlockType)arg2;
- (void)getPairedDevicesMatchingType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitForAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBluetoothManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

