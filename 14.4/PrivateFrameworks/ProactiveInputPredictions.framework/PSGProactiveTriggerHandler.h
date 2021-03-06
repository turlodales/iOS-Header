//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPQuickTypeBroker, PSGProactiveTrigger, PSGStructuredInfoSuggestionCache;

@interface PSGProactiveTriggerHandler : NSObject
{
    PPQuickTypeBroker *_broker;
    PSGStructuredInfoSuggestionCache *_cache;
    PSGProactiveTrigger *_lastTrigger;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)handleTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipients:(id)arg4 recipientNames:(id)arg5 availableApps:(id)arg6 timeoutSeconds:(double)arg7 fetchLimit:(unsigned long long)arg8 maxSuggestions:(unsigned long long)arg9 explanationSet:(id)arg10 error:(id *)arg11;
- (id)_handlePortraitTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipients:(id)arg4 limit:(unsigned long long)arg5 timeoutSeconds:(double)arg6 explanationSet:(id)arg7 results:(id)arg8;
- (_Bool)_handleOperationalTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipientNames:(id)arg4 availableApps:(id)arg5 limit:(unsigned long long)arg6 explanationSet:(id)arg7 results:(id)arg8;
- (id)initWithBroker:(id)arg1 cache:(id)arg2;

@end

