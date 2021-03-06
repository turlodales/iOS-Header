//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFUnfairLock, NSNumber, NSString, NSUUID;

@interface HMDAccessoryNetworkProtectionGroup : NSObject <NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    HMFUnfairLock *_lock;
    long long _targetProtectionMode;
    NSString *_manufacturer;
    NSNumber *_category;
    NSUUID *_uuid;
    HMDHome *_home;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (id)modelForVersion:(long long)arg1;
- (id)modelWithObjectChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)configureWithHome:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 targetProtectionMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

