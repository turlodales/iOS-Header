//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VirtualGarage/NSObject-Protocol.h>
#import <VirtualGarage/VGVehicleStateProviding-Protocol.h>

@class LSApplicationRecord, NSString, VGVehicle;
@protocol VGOEMAppSOCStreaming;

@protocol VGOEMApplication <NSObject, VGVehicleStateProviding>
+ (id)new;
@property(nonatomic) __weak id <VGOEMAppSOCStreaming> chargeStreamingDelegate;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property(readonly, nonatomic) NSString *identifier;
- (void)stopSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;
- (void)startSendingChargeUpdatesForVehicle:(VGVehicle *)arg1;
- (id)initWithIdentifier:(NSString *)arg1 applicationRecord:(LSApplicationRecord *)arg2;
- (id)init;
@end

