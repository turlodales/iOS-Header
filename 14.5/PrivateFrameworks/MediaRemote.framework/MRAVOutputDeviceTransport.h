//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

#import <MediaRemote/MRAVOutputStreamDelegate-Protocol.h>

@class AVOutputDevice, MRAVOutputDeviceInputStream, MRAVOutputDeviceOutputStream, NSError, NSObject, NSString, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport <MRAVOutputStreamDelegate>
{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAVOutputDeviceInputStream *_inputStream;
    MRAVOutputDeviceOutputStream *_outputStream;
    _Bool _useSystemAuthenticationPrompt;
    AVOutputDevice *_avOutputDevice;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVOutputDevice *avOutputDevice; // @synthesize avOutputDevice=_avOutputDevice;
- (void)outputStream:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)_onQueue_resetStreams;
- (_Bool)requiresCustomPairing;
- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (void)setError:(id)arg1;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)uid;
- (id)deviceInfo;
@property(readonly, copy) NSString *description;
- (id)initWithAVOutputDevice:(id)arg1 connectionType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

