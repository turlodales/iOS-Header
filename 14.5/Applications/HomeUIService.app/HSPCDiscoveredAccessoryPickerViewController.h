//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

#import "HSDiscoveredAccessoryPickerViewControllerDelegate-Protocol.h"

@class HSDiscoveredAccessoryPickerViewController, HSProxCardCoordinator, NSString, UIActivityIndicatorView;

@interface HSPCDiscoveredAccessoryPickerViewController : PRXCardContentViewController <HSDiscoveredAccessoryPickerViewControllerDelegate>
{
    HSProxCardCoordinator *_coordinator;
    HSDiscoveredAccessoryPickerViewController *_contentVC;
    UIActivityIndicatorView *_spinnerView;
}

- (void).cxx_destruct;
@property __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) HSDiscoveredAccessoryPickerViewController *contentVC; // @synthesize contentVC=_contentVC;
@property(retain, nonatomic) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)_launchAppStore;
- (void)_launchAirportUtility;
- (void)_presentSoftwareUpdateAlertForAirportExpress;
- (void)didUpdateNumberOfDiscoveredAccessories:(unsigned long long)arg1;
- (void)didSelectDiscoveredAccessory:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

