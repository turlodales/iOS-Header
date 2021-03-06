//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/CSAudioServerCrashEventProvidingDelegate-Protocol.h>

@class AVVoiceTriggerClient, NSString;

@interface CSAudioServerCrashMonitor : CSEventMonitor <CSAudioServerCrashEventProvidingDelegate>
{
    unsigned long long _serverState;
    AVVoiceTriggerClient *_alwaysOnProcessorController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController; // @synthesize alwaysOnProcessorController=_alwaysOnProcessorController;
@property(nonatomic) unsigned long long serverState; // @synthesize serverState=_serverState;
- (void)audioServerCrashEventProvidingLostMediaserverd;
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;
- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;
- (void)_mediaserverdDidRestart;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

