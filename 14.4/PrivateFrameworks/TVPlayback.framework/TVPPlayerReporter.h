//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTCReporting, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPPlayerReporter : NSObject
{
    TVPPlayer *_player;
    RTCReporting *_rtcAgent;
    id _reportingHierarchyToken;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(retain) RTCReporting *rtcAgent; // @synthesize rtcAgent=_rtcAgent;
@property(nonatomic) __weak TVPPlayer *player; // @synthesize player=_player;
- (id)_rtcAgentUserInfo;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (void)_playerCurrentMediaItemDidChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_tearDownRTCAgent;
- (void)_setupRTCAgent;
- (void)_playerStateWillChange:(id)arg1;
- (void)sendPlaybackStartupMetricsManually;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end

