//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    _Bool _builtInMicrophoneStereoAudioCaptureEnabled;
    int _builtInMicrophonePosition;
}

@property(nonatomic) int builtInMicrophonePosition; // @synthesize builtInMicrophonePosition=_builtInMicrophonePosition;
@property(nonatomic) _Bool builtInMicrophoneStereoAudioCaptureEnabled; // @synthesize builtInMicrophoneStereoAudioCaptureEnabled=_builtInMicrophoneStereoAudioCaptureEnabled;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

