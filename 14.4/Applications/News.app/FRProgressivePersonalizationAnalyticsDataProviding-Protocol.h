//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol FRProgressivePersonalizationContext, TSLocationDetectionManagerType;

@protocol FRProgressivePersonalizationAnalyticsDataProviding
@property(retain, nonatomic) id <TSLocationDetectionManagerType> locationManager;
@property(readonly, nonatomic) id <FRProgressivePersonalizationContext> progressivePersonalizationContext;
- (unsigned long long)feedAutoSubscribeTypeForTagID:(NSString *)arg1;
- (unsigned long long)groupFormationReasonForTagID:(NSString *)arg1;
@end

