//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class HMAccessory, HMAccessoryCategory, NSDate, NSError, NSString, NSUUID, SFDevice;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>
{
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMAccessoryCategory *_category;
    HMAccessory *_accessory;
    SFDevice *_sharingDevice;
    NSString *_manufacturer;
    NSDate *_discoveryDate;
    unsigned long long _status;
    NSError *_error;
    unsigned long long _certificationStatus;
}

+ (id)discoveredAccessoryFromSetupDescription:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) SFDevice *sharingDevice; // @synthesize sharingDevice=_sharingDevice;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)identify;
@property(readonly, nonatomic) _Bool requiresSoftwareUpdate;
@property(readonly, nonatomic) _Bool requiresSetupCode;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy) NSString *description;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)initWithSharingDevice:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

