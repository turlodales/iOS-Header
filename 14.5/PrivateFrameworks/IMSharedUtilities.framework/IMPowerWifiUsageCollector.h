//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CUTPowerMonitorDelegate-Protocol.h>
#import <IMSharedUtilities/CUTWiFiManagerDelegate-Protocol.h>

@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>
{
    _Bool _shouldCollectInternalStats;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool shouldCollectInternalStats; // @synthesize shouldCollectInternalStats=_shouldCollectInternalStats;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)disconnectedFromAResource_ExternalCollection;
- (void)reconnectedToBothResources_ExternalCollection;
- (_Bool)_shouldWriteDownPowerWifiChanges;
- (void)clearConnectedToPowerWifiOver20Hours;
- (_Bool)connectedToPowerAndWifiForOver20Hours;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (void)_noteWifiLinkDidChangeForInternalCollection:(_Bool)arg1 isOnPower:(_Bool)arg2;
- (void)_notePowerDidChangeForInternalCollection:(_Bool)arg1 isOnWifi:(_Bool)arg2;
- (void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (id)_getPowerAndWifiDictionaryForKey:(id)arg1;
- (id)todaysKey;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (id)_getExternalLastConnectedDate;
- (void)_setExternalLastConnectedDate:(id)arg1;
- (double)_getExternalTotalDuration;
- (void)_setExternalTotalDuration:(id)arg1;
- (_Bool)_isOnPower;
- (_Bool)_isWifiUsable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

