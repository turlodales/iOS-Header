//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent
{
}

@property(nonatomic) _Bool displayed;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSNumber *acknowledgmentVersion;
@property(retain, nonatomic) NSString *acknowledgmentIdentifier;
@property(nonatomic) _Bool acknowledged;
- (id)init;

@end

