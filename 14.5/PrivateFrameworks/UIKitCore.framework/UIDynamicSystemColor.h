//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface UIDynamicSystemColor : UIDynamicColor
{
    NSDictionary *_colorsByThemeKey;
    struct os_unfair_lock_s _cachedColorLock;
    UIColor *_cachedColor;
    unsigned long long _cachedThemeKey;
}

- (void).cxx_destruct;
- (id)description;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setColorsByThemeKey:(id)arg1;
- (id)_colorsByThemeKey;
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;

@end

