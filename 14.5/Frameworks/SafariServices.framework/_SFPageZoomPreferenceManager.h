//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSPageZoomPreferenceManager.h>

@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager
{
}

+ (id)sharedManager;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_historyWasCleared:(id)arg1;
- (void)_didRemoveHostnames:(id)arg1;
- (void)dealloc;
- (id)initWithPerSitePreferencesStore:(id)arg1;

@end

