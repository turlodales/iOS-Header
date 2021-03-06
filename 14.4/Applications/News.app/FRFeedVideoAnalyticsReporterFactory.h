//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedVideoAnalyticsReporterFactory-Protocol.h"

@class FCSubscriptionList, FRPersonalizationDataSource, NSString;
@protocol FRArticleViewSessionProviding, FRFeedViewExposureIdentifierProviding;

@interface FRFeedVideoAnalyticsReporterFactory : NSObject <FRFeedVideoAnalyticsReporterFactory>
{
    id <FRArticleViewSessionProviding> _articleViewSessionProvider;
    id <FRFeedViewExposureIdentifierProviding> _feedViewExposureProvider;
    FRPersonalizationDataSource *_personalizationDataSource;
    FCSubscriptionList *_subscriptionList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FRPersonalizationDataSource *personalizationDataSource; // @synthesize personalizationDataSource=_personalizationDataSource;
@property(readonly, nonatomic) __weak id <FRFeedViewExposureIdentifierProviding> feedViewExposureProvider; // @synthesize feedViewExposureProvider=_feedViewExposureProvider;
@property(readonly, nonatomic) id <FRArticleViewSessionProviding> articleViewSessionProvider; // @synthesize articleViewSessionProvider=_articleViewSessionProvider;
- (id)createVideoAnalyticsReporterForHeadline:(id)arg1 groupViewExposureID:(id)arg2;
- (id)initWithArticleViewSessionProvider:(id)arg1 feedViewExposureProvider:(id)arg2 personalizationDataSource:(id)arg3 subscriptionList:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

