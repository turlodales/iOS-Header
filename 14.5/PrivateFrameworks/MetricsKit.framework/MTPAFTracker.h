//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPAFActivity, NSArray;

@interface MTPAFTracker : NSObject
{
    NSArray *_videoTrackers;
    NSArray *_playlistBindings;
    MTPAFActivity *_currentActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTPAFActivity *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(retain, nonatomic) NSArray *playlistBindings; // @synthesize playlistBindings=_playlistBindings;
@property(retain, nonatomic) NSArray *videoTrackers; // @synthesize videoTrackers=_videoTrackers;
- (void)stopActivity:(long long)arg1 atMilliseconds:(unsigned long long)arg2 triggerType:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)startActivity:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6;
- (void)forEachVideoTracker:(CDUnknownBlockType)arg1;
- (void)updateEventData:(id)arg1;
- (void)synchronizeAtMilliseconds:(unsigned long long)arg1;
- (void)synchronizeAtSeconds:(double)arg1;
- (void)seekStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedWithPlaybackRate:(float)arg1 atMilliseconds:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)playStartedWithPlaybackRate:(float)arg1 atSeconds:(double)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)trackPlaylist:(id)arg1 using:(id)arg2;

@end

