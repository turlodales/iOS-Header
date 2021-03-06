//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAGAutoBrightnessManager : NSObject
{
    NSObject<OS_dispatch_queue> *_brightnessQueue;
    CDUnknownBlockType _cameraBrightnessUpdateBlock;
    double *_samples;
    long long _index;
    double _requestStartTime;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (double)_normalizeCameraBrightness:(double)arg1;
- (void)sampleCameraBrightnessIfNeeded:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestCameraBrightnessUpdate:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

