//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBBusTrip <NSObject>
@property(readonly, nonatomic) _Bool hasTripDuration;
@property(retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property(readonly, nonatomic) _Bool hasProvider;
@property(copy, nonatomic) NSString *provider;
@property(readonly, nonatomic) _Bool hasDeparturePlatform;
@property(copy, nonatomic) NSString *departurePlatform;
@property(readonly, nonatomic) _Bool hasDepartureBusStopLocation;
@property(retain, nonatomic) _INPBLocationValue *departureBusStopLocation;
@property(readonly, nonatomic) _Bool hasBusNumber;
@property(copy, nonatomic) NSString *busNumber;
@property(readonly, nonatomic) _Bool hasBusName;
@property(copy, nonatomic) NSString *busName;
@property(readonly, nonatomic) _Bool hasArrivalPlatform;
@property(copy, nonatomic) NSString *arrivalPlatform;
@property(readonly, nonatomic) _Bool hasArrivalBusStopLocation;
@property(retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation;
@end

