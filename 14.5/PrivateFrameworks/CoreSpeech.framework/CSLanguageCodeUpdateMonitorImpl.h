//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSLanguageCodeUpdateMonitor.h>

@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor
{
    int _notifyToken;
}

- (void)notifySiriLanguageCodeChanged:(id)arg1;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

