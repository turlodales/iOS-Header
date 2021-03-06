//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemGroupItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMAccessoryNetworkProtectionGroup, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol>
{
    HMAccessoryNetworkProtectionGroup *_group;
    id <HFCharacteristicValueSource> _valueSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group; // @synthesize group=_group;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSSet *profiles;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithGroup:(id)arg1 valueSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

