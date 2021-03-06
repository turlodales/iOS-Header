//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface HLPAnalyticsEventController : NSObject
{
    NSDictionary *_requiredKeys;
    NSMutableDictionary *_countersByKey;
    NSString *_identifier;
    NSString *_version;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *countersByKey; // @synthesize countersByKey=_countersByKey;
@property(readonly, nonatomic) NSDictionary *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
- (id)counterForKey:(id)arg1;
- (void)incrementCounterForKey:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1;
- (void)configureWithHelpBookID:(id)arg1 version:(id)arg2;

@end

