//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSSettings.h>

@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings
{
    NSMutableDictionary *_keyMap;
}

- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (void)enumerateKeyedObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeyedFlagsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (long long)flagForKey:(id)arg1;
- (_Bool)isKeyedSettings;
- (id)_init;

@end

