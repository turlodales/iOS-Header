//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject
{
    NSNumber *_gnomeActive;
    NSNumber *_gnomeWarmingPeriod;
    NSNumber *_pricingModelStart;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pricingModelStart; // @synthesize pricingModelStart=_pricingModelStart;
@property(retain, nonatomic) NSNumber *gnomeWarmingPeriod; // @synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod;
@property(retain, nonatomic) NSNumber *gnomeActive; // @synthesize gnomeActive=_gnomeActive;

@end

