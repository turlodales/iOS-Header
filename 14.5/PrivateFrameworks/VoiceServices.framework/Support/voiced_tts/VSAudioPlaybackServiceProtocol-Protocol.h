//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <voiced_tts/NSObject-Protocol.h>

@class NSData, NSError, NSString;
@protocol AFAudioPowerProviding;

@protocol VSAudioPlaybackServiceProtocol <NSObject>
@property(retain, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool discontinuedDuringPlayback;
@property(readonly, nonatomic) NSString *outputRoute;
@property(nonatomic) unsigned int sessionID;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
- (id <AFAudioPowerProviding>)audioPowerProvider;
- (void)reset;
- (void)pause;
- (NSError *)start;
- (void)stop;
- (void)flushAndStop;
- (void)enqueue:(NSData *)arg1 packetCount:(long long)arg2 packetDescriptions:(NSData *)arg3;
- (id)initWithAudioSessionID:(unsigned int)arg1 asbd:(struct AudioStreamBasicDescription)arg2;
@end

