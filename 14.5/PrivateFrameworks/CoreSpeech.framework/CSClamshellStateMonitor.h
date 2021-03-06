//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSClamshellStateMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withClamshellState:(_Bool)arg2;
- (void)_didReceiveClamshellStateChangeNotification:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isClamshellClosed;
- (id)init;

@end

