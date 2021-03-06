//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/NSObject-Protocol.h>

@class NSData, NSString;

@protocol SGEventLocationForGeocode <NSObject>
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(NSData *)arg4;
- (id)geocodedLocationWithLabel:(NSString *)arg1 address:(NSString *)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(NSData *)arg6;
- (NSData *)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (_Bool)geocodeIsEnd;
- (_Bool)geocodeIsStart;
- (NSString *)geocodeAirportCode;
- (NSString *)geocodeAddress;
- (NSString *)geocodeLabel;
@end

