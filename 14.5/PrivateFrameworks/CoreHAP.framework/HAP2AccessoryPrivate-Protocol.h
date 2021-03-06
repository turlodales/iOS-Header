//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2Accessory-Protocol.h>

@class HAPCharacteristic, NSArray, NSNumber;

@protocol HAP2AccessoryPrivate <HAP2Accessory>
@property(retain, nonatomic) NSNumber *internalSleepIntervalMs;
- (void)characteristicValueChanged:(HAPCharacteristic *)arg1;
- (_Bool)updateDiscoveredServices:(NSArray *)arg1;
- (void)updateConnectionState:(unsigned long long)arg1;
@end

