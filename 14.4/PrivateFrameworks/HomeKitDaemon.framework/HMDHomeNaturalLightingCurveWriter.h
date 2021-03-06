//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSString;
@protocol HMDLightProfileDataSource;

@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging>
{
    HMDHome *_home;
    id <HMDLightProfileDataSource> _dataSource;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMDLightProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *logIdentifier;
- (void)setNaturalLightingEnabled:(_Bool)arg1 forLightProfiles:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

