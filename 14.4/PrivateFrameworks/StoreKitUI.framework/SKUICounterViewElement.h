//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSDate, NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUICounterViewElement : SKUIViewElement
{
    double _changeRatePerSecond;
    long long _counterType;
    long long _dateFormatType;
    NSDate *_endDate;
    NSString *_numberFormat;
    long long _startValue;
    NSDate *_startValueDate;
    long long _stopValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long stopValue; // @synthesize stopValue=_stopValue;
@property(readonly, nonatomic) NSDate *startValueDate; // @synthesize startValueDate=_startValueDate;
@property(readonly, nonatomic) long long startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) long long dateFormatType; // @synthesize dateFormatType=_dateFormatType;
@property(readonly, nonatomic) long long counterType; // @synthesize counterType=_counterType;
@property(readonly, nonatomic) double changeRatePerSecond; // @synthesize changeRatePerSecond=_changeRatePerSecond;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)currentNumberValue;
@property(readonly, nonatomic) SKUIImageViewElement *backgroundImageElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

