//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject
{
    int _rssi;
    int _snr;
}

- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)releaseWiFiAssertion;
- (_Bool)isWifiEnabled;
- (_Bool)hasAssociatedNetworkWithRSSI:(int *)arg1 andSNR:(int *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4 isCaptive:(_Bool *)arg5;
- (void)dealloc;
- (id)init;

@end

