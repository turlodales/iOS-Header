//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <voiced_tts/OPTTSBeginTextToSpeechStreamingResponse.h>

@class NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

@interface OPTTSMutableBeginTextToSpeechStreamingResponse : OPTTSBeginTextToSpeechStreamingResponse
{
}

@property(nonatomic) float streaming_playback_buffer_size_in_seconds;
@property(copy, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property(copy, nonatomic) OPTTSAudioDescription *playback_description;
@property(copy, nonatomic) OPTTSAudioDescription *decoder_description;
@property(nonatomic) long long audio_type;
@property(copy, nonatomic) NSString *stream_id;
@property(copy, nonatomic) NSString *error_str;
@property(nonatomic) int error_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

