//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCEmulatedNetworkAlgorithm-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkAlgorithmQueueDelay : NSObject <VCEmulatedNetworkAlgorithm>
{
    NSDictionary *_policies;
    double _expectedProcessEndTime;
    unsigned int _packetCountInNetworkQueue;
    unsigned int _networkQueueDelay;
    unsigned int _networkQueueDelayMean;
    unsigned int _networkQueueDelayStdDev;
    int _currentIndexForDelay;
    int _currentIndexForDelayDistribution;
    double _lastNetworkQueueDelayLoadTime;
    double _lastNetworkQueueDelayDistributionLoadTime;
}

@property unsigned int packetCountInNetworkQueue; // @synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime; // @synthesize expectedProcessEndTime=_expectedProcessEndTime;
- (void)process:(id)arg1;
- (double)computeNetworkDelay;
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

