//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAbstractDefaultDomain.h>

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain
{
}

- (void)clearUsageDefaults;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(retain, nonatomic) NSNumber *batteryUsageTime; // @dynamic batteryUsageTime;
@property(nonatomic) _Bool hasChargedPartially; // @dynamic hasChargedPartially;
@property(retain, nonatomic) NSNumber *standbyTime; // @dynamic standbyTime;

@end

