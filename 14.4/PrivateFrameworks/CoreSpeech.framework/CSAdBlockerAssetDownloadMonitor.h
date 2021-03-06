//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/CSTrialAssetDownloadMonitorDelegate-Protocol.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate>
{
    int _notifyToken;
    unsigned long long _lastUpdatedAssetType;
    CSTrialAssetDownloadMonitor *_monitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // @synthesize monitor=_monitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;
- (void)_notifyObserver:(id)arg1;
- (void)_didInstalledNewAdBlockerAsset;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (const char *)_notificationKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

