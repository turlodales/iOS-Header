//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeAIPersonDataReceiver.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMIHomePersonManagerDataSource-Protocol.h>

@class HMIHomePersonManager, NSString;

@interface HMDHomeAIHomePersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIHomePersonManagerDataSource>
{
    HMIHomePersonManager *_homePersonManager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMIHomePersonManager *homePersonManager; // @synthesize homePersonManager=_homePersonManager;
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;
- (id)logIdentifier;
- (id)initWithHomePersonManager:(id)arg1 workQueue:(id)arg2;
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

