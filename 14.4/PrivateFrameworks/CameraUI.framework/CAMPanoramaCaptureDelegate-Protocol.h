//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPanoramaCaptureRequest, CAMStillImageCaptureResult;

@protocol CAMPanoramaCaptureDelegate <NSObject>

@optional
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(_Bool)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
@end

