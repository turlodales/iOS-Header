//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WDClinicalSampleAccountProviderGateway;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccountProvider : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSDictionary *_properties;
    WDClinicalSampleAccountProviderGateway *_gateway;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

