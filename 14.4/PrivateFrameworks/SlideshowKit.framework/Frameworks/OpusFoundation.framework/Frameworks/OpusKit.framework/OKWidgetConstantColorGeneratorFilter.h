//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetBasicFilter.h>

@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter
{
    CIColor *_inputColor;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor=_inputColor;
- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputColor:(id)arg1;
- (void)dealloc;

@end

