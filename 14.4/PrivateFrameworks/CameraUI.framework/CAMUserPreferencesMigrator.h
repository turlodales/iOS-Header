//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMUserPreferencesMigrator : NSObject
{
}

+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)arg1;
+ (long long)_HDRModeForLegacyHDRMode:(long long)arg1;
+ (long long)_captureModeForLegacyCameraMode:(long long)arg1;
+ (long long)_flashModeForLegacyFlashMode:(long long)arg1;
+ (void)migrateLegacyPreferences;

@end

