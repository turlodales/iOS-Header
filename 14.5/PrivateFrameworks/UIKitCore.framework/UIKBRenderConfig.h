//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying>
{
    _Bool _useEmojiStyles;
    _Bool _lightKeyboard;
    _Bool _isFloating;
    long long _forceQuality;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
    NSString *_controlKeyBackgroundName;
    NSString *_activatedKeyplaneSwitchControlKeyBackgroundName;
    _UIButtonBarButtonVisualProvider *_buttonBarVisualProvider;
}

+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)lowQualityDarkConfig;
+ (id)darkConfig;
+ (id)defaultEmojiConfig;
+ (id)defaultConfig;
@property(readonly, retain, nonatomic) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider; // @synthesize buttonBarVisualProvider=_buttonBarVisualProvider;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(copy, nonatomic) NSString *activatedKeyplaneSwitchControlKeyBackgroundName; // @synthesize activatedKeyplaneSwitchControlKeyBackgroundName=_activatedKeyplaneSwitchControlKeyBackgroundName;
@property(copy, nonatomic) NSString *controlKeyBackgroundName; // @synthesize controlKeyBackgroundName=_controlKeyBackgroundName;
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(nonatomic) double lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property(nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) long long forceQuality; // @synthesize forceQuality=_forceQuality;
@property(readonly, nonatomic) long long blurEffectStyle;
@property(readonly, nonatomic) long long backdropStyle;
@property(readonly, nonatomic) _Bool whiteText;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

