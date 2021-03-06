//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemStatus/NSObject-Protocol.h>

@class STBatteryStatusDomainData, STBatteryStatusDomainDataDiff, STTelephonyStatusDomainData, STTelephonyStatusDomainDataDiff, STVoiceControlStatusDomainData, STVoiceControlStatusDomainDataDiff, STWifiStatusDomainData, STWifiStatusDomainDataDiff;

@protocol STStatusDomainXPCClient <NSObject>
- (void)observeWifiDataDiff:(STWifiStatusDomainDataDiff *)arg1;
- (void)observeWifiData:(STWifiStatusDomainData *)arg1;
- (void)observeVoiceControlDataDiff:(STVoiceControlStatusDomainDataDiff *)arg1;
- (void)observeVoiceControlData:(STVoiceControlStatusDomainData *)arg1;
- (void)observeTelephonyDataDiff:(STTelephonyStatusDomainDataDiff *)arg1;
- (void)observeTelephonyData:(STTelephonyStatusDomainData *)arg1;
- (void)observeBatteryDataDiff:(STBatteryStatusDomainDataDiff *)arg1;
- (void)observeBatteryData:(STBatteryStatusDomainData *)arg1;
@end

