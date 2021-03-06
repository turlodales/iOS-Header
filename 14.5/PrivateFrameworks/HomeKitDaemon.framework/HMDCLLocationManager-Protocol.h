//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CLRegion, NSBundle, NSSet;
@protocol HMDCLLocationManagerDelegate;

@protocol HMDCLLocationManager <NSObject>
+ (_Bool)locationServicesEnabled;
+ (int)authorizationStatusForBundle:(NSBundle *)arg1;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) __weak id <HMDCLLocationManagerDelegate> delegate;
- (int)authorizationStatus;
- (void)requestStateForRegion:(CLRegion *)arg1;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestLocation;
- (void)requestWhenInUseAuthorization;
@end

