//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_bottomTextProvider;
    CLKTextProvider *_centerTextProvider;
}

+ (id)templateWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CLKTextProvider *centerTextProvider; // @synthesize centerTextProvider=_centerTextProvider;
@property(copy, nonatomic) CLKTextProvider *bottomTextProvider; // @synthesize bottomTextProvider=_bottomTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithGaugeProvider:(id)arg1 bottomTextProvider:(id)arg2 centerTextProvider:(id)arg3;

@end

