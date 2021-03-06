//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface MLFeatureFlags : NSObject
{
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_flags;
    NSMutableDictionary *_overrideOriginalValues;
}

+ (id)sharedFeatureFlags;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *overrideOriginalValues; // @synthesize overrideOriginalValues=_overrideOriginalValues;
@property(readonly, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (_Bool)removeOverrideForFeature:(id)arg1;
- (_Bool)setOverride:(_Bool)arg1 forFeature:(id)arg2;
- (id)controlKeyForFeature:(id)arg1;
- (_Bool)isFeatureEnabled:(id)arg1;
- (void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(_Bool)arg3;
- (id)init;
- (_Bool)isNNv2Enabled;
- (void)defineFeatures;

@end

