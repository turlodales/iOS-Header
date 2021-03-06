//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRAVOutputDevice, MRIDSInputStream, MRIDSOutputStream;

@interface MRIDSTransport : MRExternalDeviceTransport
{
    MRIDSInputStream *_inputStream;
    MRIDSOutputStream *_outputStream;
    MRAVOutputDevice *_outputDevice;
}

- (void).cxx_destruct;
- (void)_handleDeviceDisconnected:(id)arg1;
- (void)reset;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (id)uid;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (id)initWithOutputDevice:(id)arg1;

@end

