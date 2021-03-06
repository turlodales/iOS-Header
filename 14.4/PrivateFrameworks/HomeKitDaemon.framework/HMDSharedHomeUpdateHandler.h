//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharedHomeUpdateSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDSharedHomeUpdateSession, HMFUnfairLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState>
{
    HMFUnfairLock *_lock;
    _Bool _firstFetchComplete;
    _Bool _suspended;
    _Bool _pendingRequestDataFromResident;
    HMDSharedHomeUpdateSession *_pendingRequestDataFromResidentSession;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic) _Bool pendingRequestDataFromResident; // @synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident;
@property(getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool firstFetchComplete; // @synthesize firstFetchComplete=_firstFetchComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (id)dumpState;
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;
@property(retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // @synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_evaluateNeedForSync;
- (void)requestHomeDataSync;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (void)residentsChanged:(id)arg1;
- (void)resume;
- (void)pause;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)configureWithHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

