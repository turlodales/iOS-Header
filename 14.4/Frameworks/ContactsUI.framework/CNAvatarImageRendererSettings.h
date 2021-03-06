//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRendererSettings : NSObject
{
    unsigned long long _style;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNUILikenessRendering> _likenessRenderer;
}

+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3 concurrentCaches:(_Bool)arg4;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3;
+ (id)settingsWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(unsigned long long)arg1;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)arg1;
+ (id)defaultSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNUILikenessRendering> likenessRenderer; // @synthesize likenessRenderer=_likenessRenderer;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3;

@end

