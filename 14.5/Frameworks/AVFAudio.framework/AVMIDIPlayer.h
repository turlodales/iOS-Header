//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVMIDIPlayer : NSObject
{
    void *_impl;
}

@property(nonatomic) double currentPosition;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;
- (void)play:(CDUnknownBlockType)arg1;
- (void)prepareToPlay;
- (double)beatsForHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)finalize;
- (void)destroyBase;
- (id)initBase;
- (struct MIDIPlayerImpl *)impl;

@end

