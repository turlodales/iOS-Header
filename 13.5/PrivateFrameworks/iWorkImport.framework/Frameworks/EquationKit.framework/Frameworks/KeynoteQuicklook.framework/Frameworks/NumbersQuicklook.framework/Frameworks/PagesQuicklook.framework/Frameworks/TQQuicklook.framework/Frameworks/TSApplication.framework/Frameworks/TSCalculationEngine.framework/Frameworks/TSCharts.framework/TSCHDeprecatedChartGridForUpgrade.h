//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSCHChartGrid;

@interface TSCHDeprecatedChartGridForUpgrade : TSPObject
{
    TSCHChartGrid *mGrid;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
- (void)loadFromUnarchiver:(id)arg1;

@end

