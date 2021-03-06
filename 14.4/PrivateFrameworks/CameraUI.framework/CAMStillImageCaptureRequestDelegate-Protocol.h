//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMStillImageCaptureRequest, CAMStillImageCaptureResolvedSettings, CAMStillImageCaptureResponse, CAMStillImagePersistenceResponse, CAMVideoCaptureResponse, CAMVideoPersistenceResponse, NSError;

@protocol CAMStillImageCaptureRequestDelegate <NSObject>

@optional
- (void)stillImageRequestDidCompleteVideoRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageRemotePersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteVideoLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequestDidCompleteVideoCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidCompleteStillImageCapture:(CAMStillImageCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)stillImageRequestDidStopCapturingStillImage:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1 resolvedSettings:(CAMStillImageCaptureResolvedSettings *)arg2;
- (void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(CAMStillImageCaptureRequest *)arg1;
@end

