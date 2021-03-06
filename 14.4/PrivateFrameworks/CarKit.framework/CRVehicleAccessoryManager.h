//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, EAAccessoryManager, NSMutableDictionary;
@protocol CRVehicleAccessoryManagerDelegate;

@interface CRVehicleAccessoryManager : NSObject
{
    id <CRVehicleAccessoryManagerDelegate> _vehicleAccessoryDelegate;
    EAAccessoryManager *_accessoryManager;
    NSMutableDictionary *_vehiclesBySerialNumber;
    CARObserverHashTable *_observers;
}

+ (id)_certificateSerialNumberForAccessory:(id)arg1;
+ (_Bool)_isVehicleAccessory:(id)arg1;
+ (_Bool)_isValidAccessoryMacAddress:(id)arg1;
+ (id)managerInfoDataCache;
+ (id)vehicleAccessQueue;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *vehiclesBySerialNumber; // @synthesize vehiclesBySerialNumber=_vehiclesBySerialNumber;
@property(retain, nonatomic) EAAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(nonatomic) __weak id <CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate; // @synthesize vehicleAccessoryDelegate=_vehicleAccessoryDelegate;
- (id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1;
- (id)vehicleAccessoryForCertificateSerial:(id)arg1;
- (id)connectedVehicleAccessories;
- (id)connectedAccessories;
- (void)handleAccessoryInformationUpdate:(id)arg1;
- (void)handleAccessoryDisconnect:(id)arg1;
- (void)handleAccessoryConnect:(id)arg1;
- (id)_vehicleInfoDataForAccessory:(id)arg1;
- (void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2;
- (id)_vehicleForAccessory:(id)arg1;
- (void)_primeConnectedVehicleAccessories;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

