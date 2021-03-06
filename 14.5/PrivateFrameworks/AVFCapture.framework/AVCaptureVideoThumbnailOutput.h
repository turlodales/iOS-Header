//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;
@protocol AVCaptureVideoThumbnailContentsDelegate;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput
{
    AVCaptureVideoThumbnailOutputInternal *_internal;
}

+ (struct CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(struct CGSize)arg2 filterCount:(unsigned long long)arg3;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_signalInvalidationOfPropagatedContentsIfNecessary;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)connectionMediaTypes;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
@property(nonatomic) id <AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate;
@property(nonatomic) struct CGSize thumbnailSize;
@property(copy, nonatomic) NSArray *filters;
- (void)dealloc;
- (id)init;

@end

