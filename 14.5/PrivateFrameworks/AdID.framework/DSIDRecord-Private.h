//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)
- (_Bool)isEqual:(id)arg1;
- (void)sendPersonalizedAdsStatusToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;
- (_Bool)isActiveRecord;
- (void)resetiAdIDsAndDPID:(CDUnknownBlockType)arg1;
- (void)resetiAdIDs;
- (void)ensureiAdIDs;
- (void)removeIDForClientType:(long long)arg1;
- (_Bool)hasIDForClientType:(long long)arg1;

// Remaining properties
@property(nonatomic) _Bool accountAgeUnknown; // @dynamic accountAgeUnknown;
@property(nonatomic) _Bool accountIsT13; // @dynamic accountIsT13;
@property(nonatomic) _Bool accountIsU13; // @dynamic accountIsU13;
@property(nonatomic) _Bool accountIsU18; // @dynamic accountIsU18;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @dynamic iAdIDBeforeReset;
@property(retain, nonatomic) NSString *iCloudDSID; // @dynamic iCloudDSID;
@property(nonatomic) _Bool isDPIDManatee; // @dynamic isDPIDManatee;
@property(nonatomic) int lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property(nonatomic) int personalizedAdsTimestamp; // @dynamic personalizedAdsTimestamp;
@property(retain, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property(nonatomic) int segmentDataTimestamp; // @dynamic segmentDataTimestamp;
@end

