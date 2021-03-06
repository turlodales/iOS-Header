//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXHARemoteUpdateProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HUDeviceController : NSObject <AXHARemoteUpdateProtocol>
{
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    NSMutableArray *_updateDeviceBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) NSMutableDictionary *deviceUpdatesDescription; // @synthesize deviceUpdatesDescription=_deviceUpdatesDescription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *deviceUpdatesQueue; // @synthesize deviceUpdatesQueue=_deviceUpdatesQueue;
- (_Bool)representsLocalDevices;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)stopPropertyUpdates;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
- (id)hearingAidForDeviceID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

