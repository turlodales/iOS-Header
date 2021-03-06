//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraProfile, HMDCharacteristic, NSDate, NSSet, NSString;

@protocol HMDDoorbellBulletinUtilities <NSObject>
+ (NSSet *)clipUUIDsForCoalesceableSignificantEvents:(NSSet *)arg1;
+ (NSSet *)faceClassificationsNearDateOfDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;
+ (NSSet *)significantEventsRelevantToDoorbellPress:(NSDate *)arg1 forCameraProfile:(HMDCameraProfile *)arg2;
+ (NSString *)localizedMessageForCharacteristic:(HMDCharacteristic *)arg1;
+ (NSString *)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(NSSet *)arg1;
+ (NSString *)localizedDoorbellMessageForSignificantEvents:(NSSet *)arg1;
@end

