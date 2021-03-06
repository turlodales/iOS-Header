//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, WFGeocodeRequest, WFLocation, WeatherSettingsManager;

__attribute__((visibility("hidden")))
@interface WeatherLocationDataProvider : NSObject
{
    NSHashTable *_observers;
    WFGeocodeRequest *_geocodeRequest;
    CDUnknownBlockType _geocodeRequestFactory;
    WFLocation *_location;
    WeatherSettingsManager *_weatherSettingsManager;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeatherSettingsManager *weatherSettingsManager; // @synthesize weatherSettingsManager=_weatherSettingsManager;
@property(copy, nonatomic) CDUnknownBlockType geocodeRequestFactory; // @synthesize geocodeRequestFactory=_geocodeRequestFactory;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)_updateLocation:(id)arg1;
- (void)_updateCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)_shouldIssueGeocodeRequest;
- (void)_notifyObserversWeatherLocationDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

