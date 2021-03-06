//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HFAccessoryBuilder, HMHome, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>
{
    HMHome *_home;
    HFAccessoryBuilder *_accessoryBuilder;
    HFItem<HFServiceLikeItem> *_accessoryItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // @synthesize accessoryItem=_accessoryItem;
@property(retain, nonatomic) HFAccessoryBuilder *accessoryBuilder; // @synthesize accessoryBuilder=_accessoryBuilder;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)namingComponentForHomeKitObject;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

