//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraAudioControl;

@interface HMCameraAudioControl : HMCameraControl
{
    _HMCameraAudioControl *_audioControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HMCameraAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property(readonly, nonatomic) HMCharacteristic *volume;
@property(readonly, nonatomic) HMCharacteristic *mute;
- (id)initWithAudioControl:(id)arg1;

@end

