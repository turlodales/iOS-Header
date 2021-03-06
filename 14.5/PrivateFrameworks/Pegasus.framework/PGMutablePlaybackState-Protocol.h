//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGPlaybackStatePrerollAttributes;

@protocol PGMutablePlaybackState <NSObject>
@property(nonatomic, getter=isRoutingVideoToHostedWindow) _Bool routingVideoToHostedWindow;
@property(retain, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property(nonatomic) _Bool requiresLinearPlayback;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) double contentDuration;
@property(nonatomic) long long contentType;
- (void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3;
@end

