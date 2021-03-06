//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDLogEventDispatcher, NSString;

@interface HMDCloudManagerMetricsDispatcher : HMFObject <HMFLogging>
{
    HMDLogEventDispatcher *_logEventDispatcher;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
- (void)submitFailureEventWithModelType:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;
- (id)initWithLogEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

