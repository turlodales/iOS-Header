//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MLFeatureProvider;

@protocol MLBatchProvider
@property(readonly, nonatomic) long long count;
- (id <MLFeatureProvider>)featuresAtIndex:(long long)arg1;
@end

