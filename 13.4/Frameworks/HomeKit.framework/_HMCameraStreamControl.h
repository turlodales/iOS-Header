//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/_HMCameraControl.h>

@class HMCameraStream, NSString;
@protocol _HMCameraStreamControlDelegate;

@interface _HMCameraStreamControl : _HMCameraControl
{
    unsigned long long _streamState;
    HMCameraStream *_cameraStream;
    id <_HMCameraStreamControlDelegate> _delegate;
    NSString *_streamSessionID;
}

- (void).cxx_destruct;
- (void)_callVideoStoppedDelegate:(id)arg1;
- (void)_callVideoStartedDelegate;
- (void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_stopStream;
- (void)stopStream;
- (void)_handleVideoStreamStartResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_handleNegotiateStreamResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_startStreamWithPreferences:(id)arg1;
- (void)startStreamWithPreferences:(id)arg1;
- (void)_handleVideoStreamStopped:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_resetState:(id)arg1;
@property(retain, nonatomic) NSString *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property(nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
- (void)setCameraStream:(id)arg1;
@property(readonly, nonatomic) HMCameraStream *cameraStream; // @synthesize cameraStream=_cameraStream;
@property(nonatomic) __weak id <_HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)homedRestarted:(id)arg1;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end

