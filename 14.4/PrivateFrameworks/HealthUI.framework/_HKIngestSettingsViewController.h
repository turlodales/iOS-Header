//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthUI/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKDisplayTypeController, HKHealthServicesManager, HKHealthStore, NSMutableArray, NSUUID;

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate>
{
    HKHealthServicesManager *_healthServicesManager;
    HKDisplayTypeController *_displayTypeController;
    NSMutableArray *_dataTypeNames;
    _Bool _deviceEnabled;
    _Bool _deviceFound;
    NSUUID *_deviceIdentifier;
    HKHealthStore *_healthStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)reloadData:(id)arg1;
- (void)fetchEnabledStatusForPeripheral;
- (void)viewDidLoad;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 useInsetStyling:(_Bool)arg3;

@end

