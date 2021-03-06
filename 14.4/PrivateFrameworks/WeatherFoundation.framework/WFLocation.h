//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>
{
    CLLocation *_geoLocation;
    NSString *_weatherDisplayName;
    NSString *_weatherLocationName;
    NSString *_city;
    NSString *_county;
    NSString *_state;
    NSString *_stateAbbreviation;
    NSString *_country;
    NSString *_countryAbbreviation;
    NSTimeZone *_timeZone;
    NSDate *_creationDate;
    long long _archiveVersion;
    NSString *_locationID;
    NSString *_displayName;
}

+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
+ (id)locationsByFilteringDuplicates:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)knownKeys;
+ (long long)currentArchiveVersion;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *countryAbbreviation; // @synthesize countryAbbreviation=_countryAbbreviation;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *stateAbbreviation; // @synthesize stateAbbreviation=_stateAbbreviation;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *weatherLocationName; // @synthesize weatherLocationName=_weatherLocationName;
@property(copy, nonatomic) NSString *weatherDisplayName; // @synthesize weatherDisplayName=_weatherDisplayName;
@property(copy, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;
- (id)cloudDictionaryRepresentation;
- (id)initWithLocalDataRepresentation:(id)arg1;
- (id)localDataRepresentation;
- (id)countriesSupportAQI;
@property(readonly, nonatomic) _Bool shouldQueryForAirQualityData;
- (id)sunsetForDate:(id)arg1;
- (id)sunriseForDate:(id)arg1;
- (void)sunrise:(id *)arg1 andSunset:(id *)arg2 forDate:(id)arg3;
- (id)_sunAlmanacForDate:(id)arg1;
- (_Bool)isDayForDate:(id)arg1;
- (_Bool)isDay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)summary;
@property(readonly, nonatomic) _Bool needsGeocoding;
- (id)summaryThatIsCompact:(_Bool)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithMapItem:(id)arg1 isCurrentLocation:(_Bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)initWithSearchResponse:(id)arg1;
@property(readonly, nonatomic) NSString *wf_weatherChannelGeocodeValue;

@end

