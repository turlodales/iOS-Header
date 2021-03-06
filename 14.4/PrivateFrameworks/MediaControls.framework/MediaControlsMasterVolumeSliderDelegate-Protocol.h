//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsMasterVolumeSlider, UITouch;

@protocol MediaControlsMasterVolumeSliderDelegate <NSObject>

@optional
- (_Bool)slider:(MediaControlsMasterVolumeSlider *)arg1 shouldCancelSnapWithTouch:(UITouch *)arg2;
- (_Bool)slider:(MediaControlsMasterVolumeSlider *)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;
- (_Bool)shouldEnableSyncingForSlider:(MediaControlsMasterVolumeSlider *)arg1;
@end

