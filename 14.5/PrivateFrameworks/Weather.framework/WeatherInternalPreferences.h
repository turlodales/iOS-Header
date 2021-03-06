//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults
{
    id <WeatherPreferencesPersistence> _persistence;
}

+ (id)sharedInternalPreferences;
- (void).cxx_destruct;
@property(retain) id <WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;
@property(readonly, nonatomic) unsigned long long deviceInactivityThreshold;
@property(readonly, nonatomic) _Bool shouldShowUpdateTimestamp;
@property(readonly, nonatomic) _Bool isV3Enabled;
@property(readonly, nonatomic) _Bool isInternalInstall;

@end

