//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMonotonicReferenceTime, NSArray, NSNumber, NSString, NSURL, SBSApplicationShortcutService, SBSApplicationShortcutServiceFetchResult;

@interface SBFApplication : NSObject
{
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    BSMonotonicReferenceTime *_applicationShortcutServiceFetchResultExpirationReferenceTime;
    _Bool _systemOrInternalApplication;
    NSString *_applicationBundleIdentifier;
    NSString *_displayName;
    NSURL *_bundleURL;
    NSNumber *_appStoreItemID;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic) NSNumber *appStoreItemID; // @synthesize appStoreItemID=_appStoreItemID;
@property(readonly, nonatomic, getter=isSystemOrInternalApplication) _Bool systemOrInternalApplication; // @synthesize systemOrInternalApplication=_systemOrInternalApplication;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void)_updateApplicationShortcutServiceFetchResult;
@property(readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;

@end

