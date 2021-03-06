//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BatteryMonitorTokenDelegate;

@protocol BatteryMonitorToken <NSObject>
@property(nonatomic) __weak id <BatteryMonitorTokenDelegate> delegate;
@property(readonly, nonatomic) _Bool batteryIsChargingOrFull;
@property(readonly, nonatomic) float currentBatteryLevel;
@property(readonly, nonatomic) long long currentBatteryState;
@end

