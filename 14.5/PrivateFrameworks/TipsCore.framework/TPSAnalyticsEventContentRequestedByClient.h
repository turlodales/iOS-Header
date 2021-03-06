//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent
{
    NSString *_bundleID;
    NSString *_context;
}

+ (id)eventWithBundleID:(id)arg1 context:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithBundleID:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

