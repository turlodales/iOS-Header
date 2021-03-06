//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsDaemon/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor
{
    NSDate *_currentDate;
}

- (void).cxx_destruct;
- (id)_furthestLookbackDate;
- (_Bool)_shouldProceedWithCrunching;
- (unsigned long long)_daysBetweenDate:(id)arg1 andOtherDate:(id)arg2;
- (void)updateDisplayedCount:(long long *)arg1 andFrequencyControlCount:(long long *)arg2 forTipStatus:(id)arg3 andLookbackDate:(id)arg4;
- (void)resetAnalytics;
- (void)processAnalytics:(CDUnknownBlockType)arg1;
- (id)init;

@end

