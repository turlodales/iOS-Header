//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioDeviceList;

@interface AVAudioClient : NSObject
{
    AVAudioDeviceList *deviceList;
}

+ (void)registerSecureMicrophoneEngagedHandler:(CDUnknownBlockType)arg1;
+ (void)registerBlocksForNotifications;
+ (_Bool)setOutputDevice:(id)arg1;
+ (_Bool)setInputDevice:(id)arg1;
+ (id)currentOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (_Bool)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(_Bool)arg1;
+ (_Bool)hasActiveAudioSession;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)stopAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)initializeAudioSessionQ;
@property(retain, nonatomic) AVAudioDeviceList *deviceList; // @synthesize deviceList;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end

