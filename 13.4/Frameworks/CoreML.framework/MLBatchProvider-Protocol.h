//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol MLFeatureProvider;

@protocol MLBatchProvider
@property(readonly, nonatomic) long long count;
- (id <MLFeatureProvider>)featuresAtIndex:(long long)arg1;
@end

