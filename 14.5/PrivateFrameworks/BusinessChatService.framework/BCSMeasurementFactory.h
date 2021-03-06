//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSMeasurementFactoryProtocol-Protocol.h>

@class NSString;

@interface BCSMeasurementFactory : NSObject <BCSMeasurementFactoryProtocol>
{
}

- (id)itemIsRegisteredTimingMeasurementForItemIdentifier:(id)arg1;
- (id)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id)arg1;
- (id)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id)arg1;
- (id)itemFetchTimingMeasurementForItemIdentifier:(id)arg1;
- (id)itemResolutionTimingMeasurementForItemIdentifier:(id)arg1;
- (id)shardResolutionTimingMeasurementForShardIdentifier:(id)arg1;
- (id)configResolutionTimingMeasurementForConfigType:(long long)arg1;
- (id)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)megashardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)itemCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)shardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)configCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (id)itemCacheHitMeasurementForItemIdentifier:(id)arg1;
- (id)shardCacheHitMeasurementForShardIdentifier:(id)arg1;
- (id)configCacheHitMeasurementForConfigType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

