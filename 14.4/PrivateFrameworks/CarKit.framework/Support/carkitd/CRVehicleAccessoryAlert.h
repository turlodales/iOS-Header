//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRAlert.h"

@class CRVehicleAccessory;

@interface CRVehicleAccessoryAlert : CRAlert
{
    CRVehicleAccessory *_vehicleAccessory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CRVehicleAccessory *vehicleAccessory; // @synthesize vehicleAccessory=_vehicleAccessory;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)lockscreenMessage;
- (id)initWithVehicleAccessory:(id)arg1;

@end

