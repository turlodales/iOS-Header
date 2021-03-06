//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSString, UIImage, WFGeocodeRequest;
@protocol OS_dispatch_queue;

@interface WeatherAQIAttribution : NSObject
{
    UIImage *_cachedLogoImage;
    NSDate *_stationLastReadDate;
    CLLocation *_stationLocation;
    NSString *_stationLocationName;
    NSString *_name;
    long long _dataOrigination;
    WFGeocodeRequest *_geocodeRequest;
    NSObject<OS_dispatch_queue> *_reverseGeocodingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reverseGeocodingQueue; // @synthesize reverseGeocodingQueue=_reverseGeocodingQueue;
@property(retain, nonatomic) WFGeocodeRequest *geocodeRequest; // @synthesize geocodeRequest=_geocodeRequest;
@property(nonatomic) long long dataOrigination; // @synthesize dataOrigination=_dataOrigination;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *stationLocationName; // @synthesize stationLocationName=_stationLocationName;
@property(readonly, nonatomic) CLLocation *stationLocation; // @synthesize stationLocation=_stationLocation;
@property(readonly, nonatomic) NSDate *stationLastReadDate; // @synthesize stationLastReadDate=_stationLastReadDate;
@property(readonly, nonatomic) UIImage *cachedLogoImage; // @synthesize cachedLogoImage=_cachedLogoImage;
- (void)reverseGeocodeStationLocation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithFoundationAttribution:(id)arg1;

@end

