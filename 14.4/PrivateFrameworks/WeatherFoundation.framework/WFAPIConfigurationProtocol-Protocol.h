//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSObject-Protocol.h>

@class NSData, NSDate, NSLocale, NSString, NSURL, NSURLRequest, WFAQIScale, WFLocation, WFParsedForecastData, WFRequestFormattingRules, WFRequestOptions, WFResponseParsingRules;

@protocol WFAPIConfigurationProtocol <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool isValid;
- (WFAQIScale *)parseAQIScaleNamed:(NSString *)arg1 data:(NSData *)arg2 error:(id *)arg3;
- (NSURLRequest *)aqiRequestForScaleNamed:(NSString *)arg1 language:(NSString *)arg2;
- (WFParsedForecastData *)parseForecast:(unsigned long long)arg1 data:(NSData *)arg2 location:(WFLocation *)arg3 units:(int)arg4 locale:(NSLocale *)arg5 date:(NSDate *)arg6 error:(id *)arg7 rules:(WFResponseParsingRules *)arg8;
- (NSURLRequest *)forecastRequestForTypes:(unsigned long long)arg1 location:(WFLocation *)arg2 units:(int)arg3 date:(NSDate *)arg4 error:(id *)arg5 rules:(WFRequestFormattingRules *)arg6 options:(WFRequestOptions *)arg7;
- (NSURL *)hostUrl;
@end

