//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class CSCoverSheetFlyInSettings, CSCoverSheetTransitionSettings;

@interface CSCoverSheetTransitionsSettings : PTSettings
{
    double _tension;
    double _friction;
    CSCoverSheetFlyInSettings *_flyInSettings;
    CSCoverSheetTransitionSettings *_sameWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings *_differentWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings *_sameWallpaperSubsequentTransitionSettings;
    CSCoverSheetTransitionSettings *_differentWallpaperSubsequentTransitionSettings;
    CSCoverSheetTransitionSettings *_overAppTransitionSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) CSCoverSheetTransitionSettings *overAppTransitionSettings; // @synthesize overAppTransitionSettings=_overAppTransitionSettings;
@property(retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings; // @synthesize differentWallpaperSubsequentTransitionSettings=_differentWallpaperSubsequentTransitionSettings;
@property(retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings; // @synthesize sameWallpaperSubsequentTransitionSettings=_sameWallpaperSubsequentTransitionSettings;
@property(retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings; // @synthesize differentWallpaperInitialTransitionSettings=_differentWallpaperInitialTransitionSettings;
@property(retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings; // @synthesize sameWallpaperInitialTransitionSettings=_sameWallpaperInitialTransitionSettings;
@property(retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings; // @synthesize flyInSettings=_flyInSettings;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double tension; // @synthesize tension=_tension;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForBlurOnly;
- (void)setDefaultValuesForParallaxOnly;
- (void)setDefaultValues;

@end

