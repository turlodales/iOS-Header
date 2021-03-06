//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FIUIChartDataSetDataSource;

@interface FIUIChartDataSet : NSObject
{
    NSArray *_points;
    NSArray *_labels;
    id <FIUIChartDataSetDataSource> _dataSource;
    long long _tag;
}

- (void).cxx_destruct;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <FIUIChartDataSetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)reloadData;
- (id)labelsForSet;
- (id)points;
- (id)minXValue;
- (id)maxXValue;
- (id)minYValue;
- (id)maxYValue;
- (id)description;

@end

