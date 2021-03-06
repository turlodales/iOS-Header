//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class BCSBusinessLinkFetchMetric, BCSBusinessLinkHashFetchMetric, BCSBusinessLinkRegisteredMetric, BCSChatSuggestFetchMetric, BCSChatSuggestRegisteredMetric, BCSConfigPrefetchMetric, BCSConfigResolutionMetric, BCSItemResolutionMetric, BCSMegashardPrefetchMetric, BCSShardResolutionMetric;
@protocol BCSItemIdentifying, BCSMeasurementFactoryProtocol, BCSShardItemIdentifying;

@protocol BCSMetricFactoryProtocol <NSObject>
@property(readonly, nonatomic) id <BCSMeasurementFactoryProtocol> measurementFactory;
- (BCSMegashardPrefetchMetric *)megashardPrefetchMetricForType:(long long)arg1;
- (BCSConfigPrefetchMetric *)configPrefetchMetricForConfigType:(long long)arg1;
- (BCSChatSuggestFetchMetric *)chatSuggestFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSChatSuggestRegisteredMetric *)chatSuggestRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkHashFetchMetric *)businessLinkHashFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkFetchMetric *)businessLinkFetchMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSBusinessLinkRegisteredMetric *)businessLinkRegisteredMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSItemResolutionMetric *)itemResolutionMetricForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSShardResolutionMetric *)shardResolutionMetricForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;
- (BCSConfigResolutionMetric *)configResolutionMetricForConfigType:(long long)arg1;
@end

