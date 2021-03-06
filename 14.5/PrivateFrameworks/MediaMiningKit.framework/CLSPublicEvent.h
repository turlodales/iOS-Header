//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSString, NSTimeZone;

@interface CLSPublicEvent : NSObject <NSSecureCoding>
{
    unsigned long long _muid;
    NSString *_name;
    NSDateInterval *_localDateInterval;
    double _localStartTime;
    double _localEndTime;
    NSTimeZone *_timeZone;
    NSArray *_performers;
    NSArray *_categories;
    unsigned long long _businessItemMuid;
    long long _expectedAttendance;
    struct CLLocationCoordinate2D _businessItemCoordinates;
}

+ (_Bool)supportsSecureCoding;
+ (id)supportedCategories;
- (void).cxx_destruct;
@property(nonatomic) long long expectedAttendance; // @synthesize expectedAttendance=_expectedAttendance;
@property(nonatomic) struct CLLocationCoordinate2D businessItemCoordinates; // @synthesize businessItemCoordinates=_businessItemCoordinates;
@property(nonatomic) unsigned long long businessItemMuid; // @synthesize businessItemMuid=_businessItemMuid;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray *performers; // @synthesize performers=_performers;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) double localEndTime; // @synthesize localEndTime=_localEndTime;
@property(nonatomic) double localStartTime; // @synthesize localStartTime=_localStartTime;
@property(retain, nonatomic) NSDateInterval *localDateInterval; // @synthesize localDateInterval=_localDateInterval;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasExpectedAttendance;
- (id)_calculateUniversalDateFromLocalDate:(id)arg1 includingTimeZone:(id)arg2 localStartTime:(double)arg3;
@property(readonly, nonatomic) NSDateInterval *universalDateIntervalIncludingTime;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) _Bool isEnriched;
- (id)init;

@end

