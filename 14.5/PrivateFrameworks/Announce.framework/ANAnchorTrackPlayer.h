//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Announce/ANTrackPlayer.h>

@interface ANAnchorTrackPlayer : ANTrackPlayer
{
    CDStruct_1b6d18a9 _startTime;
}

@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
- (void)handleInterruptionDelay:(double)arg1;
- (void)previousInternalSync;
- (void)nextInternalSync;
- (id)whatIsPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)playInternalSync;

@end

