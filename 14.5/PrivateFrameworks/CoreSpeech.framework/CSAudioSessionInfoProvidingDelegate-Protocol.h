//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary;
@protocol CSAudioSessionInfoProviding;

@protocol CSAudioSessionInfoProvidingDelegate <NSObject>

@optional
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
@end

