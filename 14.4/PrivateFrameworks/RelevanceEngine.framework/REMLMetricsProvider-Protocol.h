//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol MLFeatureProvider;

@protocol REMLMetricsProvider
- (void)reset;
- (void)updateMetricsFromFeatures:(id <MLFeatureProvider>)arg1 prediction:(id <MLFeatureProvider>)arg2 truth:(id <MLFeatureProvider>)arg3;
- (NSString *)name;
@end

