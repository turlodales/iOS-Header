//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NTKBundleComplicationDataSourceBundleCache : NSObject
{
    NSMutableDictionary *_cachedBundles;
    struct os_unfair_lock_s _bundleLock;
}

+ (id)sharedBundleCache;
- (void).cxx_destruct;
- (id)bundleAtPath:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

