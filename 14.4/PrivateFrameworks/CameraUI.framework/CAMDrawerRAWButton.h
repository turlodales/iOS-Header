//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton
{
    long long _rawMode;
}

@property(nonatomic, setter=setRAWMode:) long long rawMode; // @synthesize rawMode=_rawMode;
- (_Bool)shouldShowSlashForCurrentState;
- (_Bool)shouldUseSlash;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (id)loadMenuItems;
- (_Bool)isMenuItemSelected:(id)arg1;
- (void)setRAWMode:(long long)arg1 animated:(_Bool)arg2;
- (long long)controlType;

@end

