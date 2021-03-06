//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@interface TSCHSeriesDimension : NSObject <NSCopying>
{
    unsigned long long _seriesIndex;
    int _axisType;
}

+ (id)seriesDimensionWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2;
@property(readonly, nonatomic) int axisType; // @synthesize axisType=_axisType;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=_seriesIndex;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeriesIndex:(unsigned long long)arg1 axisType:(int)arg2;

@end

