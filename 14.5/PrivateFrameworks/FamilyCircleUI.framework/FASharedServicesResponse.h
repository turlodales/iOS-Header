//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface FASharedServicesResponse : AAResponse
{
    NSArray *_services;
    NSArray *_serviceGroups;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
- (void)_sharedServicesWithNoGrouping:(id)arg1;
- (void)_initializeServicesMapWithGroups:(id)arg1 andServices:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

