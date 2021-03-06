//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate;

@protocol GEOTransitDepartureFrequency <NSObject>
@property(readonly, nonatomic) long long maxFrequency;
@property(readonly, nonatomic) long long minFrequency;
@property(readonly, nonatomic) long long displayFrequency;
@property(readonly, nonatomic) _Bool isEstimate;
@property(readonly, nonatomic) long long frequencyType;
@property(readonly, nonatomic) double frequencyForSorting;
@property(readonly, nonatomic) NSDate *lastTimeInFrequency;
@property(readonly, nonatomic) NSDate *firstTimeInFrequency;
- (_Bool)isValidAtDate:(NSDate *)arg1;
@end

