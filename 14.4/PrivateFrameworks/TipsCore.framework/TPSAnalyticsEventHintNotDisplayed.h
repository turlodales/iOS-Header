//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintNotDisplayed : TPSAnalyticsEvent
{
    NSString *_contentID;
    NSString *_bundleID;
    NSString *_context;
    NSString *_displayType;
    NSString *_reason;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *displayType; // @synthesize displayType=_displayType;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (id)mutableAnalyticsEventRepresentation;
- (id)duetEvent;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 reason:(id)arg5 date:(id)arg6;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 reason:(long long)arg3 context:(id)arg4 date:(id)arg5;
- (id)initWithContentID:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4;
- (id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 date:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

