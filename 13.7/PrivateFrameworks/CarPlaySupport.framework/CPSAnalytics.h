//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPSAnalytics : NSObject
{
}

+ (id)sharedInstance;
- (void)navigationStartedWithBundleIdentifier:(id)arg1;
- (void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2;
@property(readonly, nonatomic) _Bool shouldRecordAnalyticsEvents;

@end

