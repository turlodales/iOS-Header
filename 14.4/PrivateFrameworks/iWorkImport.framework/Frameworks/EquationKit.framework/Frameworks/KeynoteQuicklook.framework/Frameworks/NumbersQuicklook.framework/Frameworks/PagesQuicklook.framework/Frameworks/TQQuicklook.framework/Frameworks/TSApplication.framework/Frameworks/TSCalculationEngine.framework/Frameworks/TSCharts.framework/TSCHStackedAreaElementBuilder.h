//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHAreaElementBuilder.h>

@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder
{
}

- (_Bool)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 withPointsArray:(CDStruct_460b8ffe *)arg4 withCount:(unsigned long long)arg5;
- (CDStruct_40a92360 *)p_centerPointsForSeries:(id)arg1 groupIndexSet:(id)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 groupIndexSet:(id)arg3 outCount:(unsigned long long *)arg4;

@end

