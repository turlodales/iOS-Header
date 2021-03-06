//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMFApplicationPolicyMonitor, NSCache;
@protocol OS_dispatch_queue;

@interface SearchUIScreenTimeManager : NSObject
{
    NSCache *_definitelyCorrectCache;
    NSCache *_possiblyCorrectCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
    DMFApplicationPolicyMonitor *_monitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) DMFApplicationPolicyMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) NSCache *possiblyCorrectCache; // @synthesize possiblyCorrectCache=_possiblyCorrectCache;
@property(retain) NSCache *definitelyCorrectCache; // @synthesize definitelyCorrectCache=_definitelyCorrectCache;
- (_Bool)bundleIdIsScreenTimeBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getScreenTimeBlockedForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cachedScreenTimeValueForBundleIdentifier:(id)arg1;
- (void)purgeCache;
- (id)init;

@end

