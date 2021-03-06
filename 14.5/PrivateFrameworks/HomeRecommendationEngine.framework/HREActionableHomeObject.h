//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeRecommendationEngine/HFHomeContainedObject-Protocol.h>
#import <HomeRecommendationEngine/HFRoomContextProviding-Protocol.h>

@class HMHome, HMRoom, HMService, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject;

@interface HREActionableHomeObject : NSObject <HFHomeContainedObject, HFRoomContextProviding>
{
    id <HFHomeKitObject> _homeKitObject;
}

+ (id)_types:(id)arg1 notMatchedByActionableObjects:(id)arg2;
+ (id)filterActionableObjects:(id)arg1 excludingObjectsInActions:(id)arg2;
+ (id)filterActionableObjects:(id)arg1 toRooms:(id)arg2;
+ (id)filterActionableObjects:(id)arg1 toMatchTypes:(id)arg2;
+ (_Bool)actionableObjects:(id)arg1 matchAllTypeGroups:(id)arg2;
+ (_Bool)actionableObjects:(id)arg1 matchAllTypes:(id)arg2;
+ (id)actionableObjectsFromHomeKitObjects:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_actionMap:(id)arg1 includesType:(id)arg2;
- (_Bool)_matchesAnyInTypes:(id)arg1;
- (id)_characteristicsInServices:(id)arg1;
- (id)_profileTypeForProfile:(id)arg1;
- (id)serviceGroup;
@property(readonly, nonatomic) HMService *service;
@property(readonly, nonatomic) NSSet *services;
- (id)singularProfile;
@property(readonly, nonatomic) NSSet *profiles;
@property(readonly, nonatomic) NSSet *actionTypes;
@property(readonly, nonatomic) NSSet *matchingTypes;
@property(readonly, nonatomic) NSString *primaryType;
- (_Bool)involvedInAction:(id)arg1;
- (id)characteristicMapFromActionMap:(id)arg1;
- (_Bool)involvedInActionMap:(id)arg1;
- (id)actionBuildersDerivedFromActions:(id)arg1;
@property(readonly, nonatomic) NSSet *characteristics;
@property(readonly, nonatomic) __weak HMHome *home;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isActionable;
- (id)initWithHomeKitObject:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

