//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSDate, NSString, STSiriLocation;

@interface STStartNavigationRequest : AFSiriRequest
{
    STSiriLocation *_startLocation;
    STSiriLocation *_destinationLocation;
    long long _directionsType;
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (id)extSessionGuidCreatedTimestamp;
- (id)extSessionGuid;
- (id)departureDate;
- (id)arrivalDate;
- (long long)directionsType;
- (id)destinationLocation;
- (id)startLocation;
- (id)_initWithStartLocation:(id)arg1 destinationLocation:(id)arg2 directionsType:(long long)arg3 arrivalDate:(id)arg4 departureDate:(id)arg5 extSessionGuid:(id)arg6 extSessionGuidCreatedTimestamp:(id)arg7;

@end

