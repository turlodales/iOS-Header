//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderH265, WK_RTCVideoDecoderVTBVP9;

__attribute__((visibility("hidden")))
@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject
{
    WK_RTCVideoDecoderH264 *m_h264Decoder;
    WK_RTCVideoDecoderH265 *m_h265Decoder;
    WK_RTCVideoDecoderVTBVP9 *m_vp9Decoder;
}

- (void).cxx_destruct;
- (long long)releaseDecoder;
- (void)setWidth:(unsigned short)arg1 height:(unsigned short)arg2;
- (long long)decodeData:(const char *)arg1 size:(unsigned long long)arg2 timeStamp:(unsigned int)arg3;
- (id)initVP9DecoderWithCallback:(CDUnknownBlockType)arg1;
- (id)initH265DecoderWithCallback:(CDUnknownBlockType)arg1;
- (id)initH264DecoderWithCallback:(CDUnknownBlockType)arg1;

@end

