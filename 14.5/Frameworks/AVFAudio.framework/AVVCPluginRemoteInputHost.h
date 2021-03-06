//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/AVAudioRemoteInputPluginDelegate-Protocol.h>

@class AVVoiceController, NSMutableArray;
@protocol AVAudioRemoteInputPlugin;

__attribute__((visibility("hidden")))
@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate>
{
    NSMutableArray<AVAudioRemoteInputPlugin> *mPlugins;
    AVVoiceController *mMotherController;
}

- (id)mockPluginEndpoint;
- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;
- (void)setParentVoiceController:(id)arg1;
- (id)findFirstBluetoothDevice;
- (id)findDeviceWithIdentifier:(id)arg1;
- (id)allBundles:(id *)arg1;
- (void)invalidatePlugins;
- (void)dealloc;
- (id)initializePlugins;

@end

