//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKWidgetLabelViewProxyExports-Protocol.h>

@interface OKWidgetLabelViewProxy : OKWidgetView <OKWidgetLabelViewProxyExports>
{
    id _label;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)setSettingText:(id)arg1;
- (id)settingText;
- (void)setSettingTextBackgroundColor:(id)arg1;
- (void)setSettingTextColor:(id)arg1;
- (id)settingTextColor;
- (void)setSettingFontSize:(float)arg1;
- (float)settingFontSize;
- (void)setSettingFontName:(id)arg1;
- (id)settingFontName;
- (void)setSettingTextAlignment:(long long)arg1;
- (long long)settingTextAlignment;
- (id)valueForUndefinedKey:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (id)layoutSettingsKeys;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (id)label;

@end

