//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>

@class HMFNetMonitor, NSArray, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetMonitor *_netMonitor;
    NSMutableOrderedSet *_assets;
    NSMutableSet *_registeredMetadata;
}

+ (id)logCategory;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *registeredMetadata; // @synthesize registeredMetadata=_registeredMetadata;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)auditAsset:(id)arg1;
- (id)assetForDocumentationMetadata:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly) NSArray *assets;
- (void)unregisterDocumentationMetadata:(id)arg1;
- (void)registerDocumentationMetadata:(id)arg1;
- (void)parseCachedAssets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

