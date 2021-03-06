//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCPaywallTopOffsetConfiguration, FCPaywallVisualSpecConfiguration, FCSubscriptionButtonConfiguration, NSString, NSURL;

@interface FCPaywallConfiguration : NSObject <NSCopying>
{
    _Bool _externalOverridesEnabled;
    unsigned long long _paywallType;
    NSString *_title;
    NSString *_descriptionTrial;
    NSString *_descriptionNonTrial;
    NSString *_learnMoreTitle;
    NSURL *_learnMoreURL;
    NSString *_offersLinkTitle;
    NSURL *_offersLinkURL;
    unsigned long long _offersLinkTargetType;
    FCSubscriptionButtonConfiguration *_subscriptionButtonConfig;
    FCPaywallVisualSpecConfiguration *_visualSpecConfig;
    FCPaywallTopOffsetConfiguration *_paywallTopOffsetConfig;
}

+ (id)defaultDeferredPaywallTopOffsetConfiguration;
+ (id)defaultPaywallTopOffsetConfiguration;
+ (id)defaultAudioPaywallDescription;
+ (id)defaultAudioPaywallTitle;
+ (id)defaultPaywallDescription;
+ (id)defaultPaywallTitle;
+ (id)defaultSmallPaywallTitle;
+ (id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSharedDeferredHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleDeferredHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedDeferredHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleDeferredHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) FCPaywallTopOffsetConfiguration *paywallTopOffsetConfig; // @synthesize paywallTopOffsetConfig=_paywallTopOffsetConfig;
@property(retain, nonatomic) FCPaywallVisualSpecConfiguration *visualSpecConfig; // @synthesize visualSpecConfig=_visualSpecConfig;
@property(retain, nonatomic) FCSubscriptionButtonConfiguration *subscriptionButtonConfig; // @synthesize subscriptionButtonConfig=_subscriptionButtonConfig;
@property(readonly, nonatomic) _Bool externalOverridesEnabled; // @synthesize externalOverridesEnabled=_externalOverridesEnabled;
@property(nonatomic) unsigned long long offersLinkTargetType; // @synthesize offersLinkTargetType=_offersLinkTargetType;
@property(copy, nonatomic) NSURL *offersLinkURL; // @synthesize offersLinkURL=_offersLinkURL;
@property(copy, nonatomic) NSString *offersLinkTitle; // @synthesize offersLinkTitle=_offersLinkTitle;
@property(copy, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(copy, nonatomic) NSString *learnMoreTitle; // @synthesize learnMoreTitle=_learnMoreTitle;
@property(copy, nonatomic) NSString *descriptionNonTrial; // @synthesize descriptionNonTrial=_descriptionNonTrial;
@property(copy, nonatomic) NSString *descriptionTrial; // @synthesize descriptionTrial=_descriptionTrial;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long paywallType; // @synthesize paywallType=_paywallType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 offersLinkTitle:(id)arg7 offersLinkURL:(id)arg8 offersLinkTargetType:(unsigned long long)arg9 externalOverridesEnabled:(_Bool)arg10 subscriptionButtonConfig:(id)arg11 visualSpecConfig:(id)arg12 paywallTopOffsetConfig:(id)arg13;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;

@end

