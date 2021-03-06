//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEventAnalyzerContext.h>

#import <HomeKitDaemon/HMDLogEventProcessLaunchAnalyzerContext-Protocol.h>

@class HMDLogEventDispatcher, HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDLogEventProcessLaunchAnalyzerContext : HMDLogEventAnalyzerContext <HMDLogEventProcessLaunchAnalyzerContext>
{
    HMFTimer *_submitProcessLaunchInfoTimer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMFTimer *submitProcessLaunchInfoTimer; // @synthesize submitProcessLaunchInfoTimer=_submitProcessLaunchInfoTimer;
- (struct jetsam_snapshot *)fetchJetsamSnapshot;
- (id)initWithWorkQueue:(id)arg1 processLaunchInfoTimer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDLogEventDispatcher *logEventDispatcher;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

@end

