//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDDoorbellBulletinUtilities-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>
{
}

+ (id)logCategory;
+ (id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1;
+ (id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+ (id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+ (id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;
+ (id)localizedMessageForCharacteristic:(id)arg1;
+ (id)_localizedDoorbellMessageForSignificantEvents:(id)arg1 forAudioAccessory:(_Bool)arg2;
+ (id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1;
+ (id)localizedDoorbellMessageForSignificantEvents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

