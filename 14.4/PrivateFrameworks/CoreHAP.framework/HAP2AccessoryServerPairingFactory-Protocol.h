//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAP2AccessoryServerDiscoveryAccessoryInfo, HAP2SerializedOperationQueue;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerPairingDriver, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransport;

@protocol HAP2AccessoryServerPairingFactory <NSObject>
- (id <HAP2AccessoryServerPairingDriver>)createPairingDriverWithAccessoryInfo:(HAP2AccessoryServerDiscoveryAccessoryInfo *)arg1 transport:(id <HAP2AccessoryServerTransport>)arg2 secureTransportFactory:(id <HAP2AccessoryServerSecureTransportFactory>)arg3 encoding:(id <HAP2AccessoryServerEncoding>)arg4 operationQueue:(HAP2SerializedOperationQueue *)arg5;
@end

