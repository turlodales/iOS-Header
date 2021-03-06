//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKTextProvider *_outerTextProvider;
    CLKFullColorImageProvider *_outerImageProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CLKFullColorImageProvider *outerImageProvider; // @synthesize outerImageProvider=_outerImageProvider;
@property(copy, nonatomic) CLKTextProvider *outerTextProvider; // @synthesize outerTextProvider=_outerTextProvider;
@property(copy, nonatomic) CLKTextProvider *trailingTextProvider; // @synthesize trailingTextProvider=_trailingTextProvider;
@property(copy, nonatomic) CLKTextProvider *leadingTextProvider; // @synthesize leadingTextProvider=_leadingTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;

@end

