//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPerformanceTestHarness.h>

#import <CameraUI/CAMCaptureRequestIntervalometerDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>

@class CAMCaptureRequestIntervalometer, CUCaptureController, NSMutableDictionary, NSString;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate>
{
    CUCaptureController *_captureController;
    _Bool _performWarmupCapture;
    _Bool _waitingOnWarmupCapture;
    NSString *_finalRequestPersistenceUUID;
    long long _mode;
    NSMutableDictionary *_numberOfResponsesForRequest;
    unsigned long long _expectedNumberOfResponsesPerRequest;
    double _delayBetweenCaptures;
    double _lastCaptureCompletionTime;
    CAMCaptureRequestIntervalometer *_testIntervalometer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAMCaptureRequestIntervalometer *testIntervalometer; // @synthesize testIntervalometer=_testIntervalometer;
- (_Bool)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(id *)arg1;
- (_Bool)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)arg1 failureReason:(id *)arg2;
- (void)intervalometer:(id)arg1 didReachMaximumCountWithRequest:(id)arg2;
- (_Bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (_Bool)_shouldDelayBeforeCapturing;
- (_Bool)_allowOverlappingCaptures;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
- (void)failedTestwithReason:(id)arg1;
- (void)stopTesting;
- (void)startTesting;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 captureController:(id)arg3 performingWarmupCapture:(_Bool)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

