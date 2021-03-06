//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OIPieSliceRenderer;

@interface OIPieChartRenderer : NSObject
{
    id <OIPieSliceRenderer> _sliceRenderer;
    struct __OIChart *_chart;
}

- (void).cxx_destruct;
@property struct __OIChart *chart; // @synthesize chart=_chart;
@property(retain) id <OIPieSliceRenderer> sliceRenderer; // @synthesize sliceRenderer=_sliceRenderer;
- (void)renderThreeDimensional:(_Bool)arg1 pieFromSeriesArray:(struct __CFArray *)arg2;
- (void)dealloc;
- (id)initWithChart:(struct __OIChart *)arg1;
- (id)initWithChart:(struct __OIChart *)arg1 sliceRenderer:(id)arg2;

@end

