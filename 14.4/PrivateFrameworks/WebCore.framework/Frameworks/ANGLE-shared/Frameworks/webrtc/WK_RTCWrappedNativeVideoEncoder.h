//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/RTCVideoEncoder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder>
{
    unique_ptr_2722152f _wrappedEncoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)scalingSettings;
- (id)implementationName;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (long long)releaseEncoder;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (unique_ptr_2722152f)releaseWrappedEncoder;
- (id)initWithNativeEncoder:(unique_ptr_2722152f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

