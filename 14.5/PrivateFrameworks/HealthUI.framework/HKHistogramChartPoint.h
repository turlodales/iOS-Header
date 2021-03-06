//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSNumber, NSString;

@interface HKHistogramChartPoint : NSObject <HKChartPoint>
{
    NSNumber *_xValue;
    NSNumber *_yValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSNumber *xValue; // @synthesize xValue=_xValue;
- (id)userInfo;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)maxYValue;
- (id)minYValue;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

