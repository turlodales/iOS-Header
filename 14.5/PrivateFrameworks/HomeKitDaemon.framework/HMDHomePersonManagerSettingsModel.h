//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSUUID;

@interface HMDHomePersonManagerSettingsModel : HMDBackingStoreModelObject
{
}

+ (id)modelUUIDWithUUID:(id)arg1;
+ (id)properties;
- (id)createSettings;
@property(retain) NSUUID *zoneUUID;
- (id)initWithHomeUUID:(id)arg1;

// Remaining properties
@property(retain) NSString *zoneUUIDString; // @dynamic zoneUUIDString;

@end

