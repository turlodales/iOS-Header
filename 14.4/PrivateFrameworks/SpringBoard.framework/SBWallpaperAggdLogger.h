//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBWallpaperDefaults;

@interface SBWallpaperAggdLogger : NSObject
{
    long long _aggd_lockscreenWallpaperType;
    long long _aggd_lockscreenWallpaperIdentifier;
    long long _aggd_homescreenWallpaperType;
    long long _aggd_homescreenWallpaperIdentifier;
    long long _aggd_irisWallpaperEnabled;
    long long _aggd_sharedWallpaper;
    SBWallpaperDefaults *_wallpaperDefaults;
}

- (void).cxx_destruct;
- (void)_resetPlayCountDate;
- (unsigned long long)_bucketedPlayCount;
- (id)_valueString;
- (void)_clearAggdKeysForLocations:(long long)arg1;
- (void)incrementIrisPlayCount;
- (void)saveWallpaperAggdCurrentValues;
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(_Bool)arg2 hasProcedural:(_Bool)arg3 name:(id)arg4;
- (id)init;

@end

