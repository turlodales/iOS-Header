//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKCodableQuantitySeries, NSDate, NSDictionary;

@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_discardWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_finishSeriesWithMetadata:(NSDictionary *)arg1 endDate:(NSDate *)arg2 finalSeries:(HKCodableQuantitySeries *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)remote_insertQuantitySeries:(HKCodableQuantitySeries *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

