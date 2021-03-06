//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartBodyLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartTitleLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem
{
    TSCHChartTitleLayoutItem *_titleElement;
    TSCHChartDataSetNameLayoutItem *_dataSetNameElement;
    TSCHChartBodyLayoutItem *_chartBody;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCHChartBodyLayoutItem *bodyLayoutItem; // @synthesize bodyLayoutItem=_chartBody;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (void)setChartBodyLayoutSize:(struct CGSize)arg1;
- (struct CGRect)chartBodyLayoutRect;

@end

