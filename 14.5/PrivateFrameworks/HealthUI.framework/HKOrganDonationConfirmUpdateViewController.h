//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant;

@interface HKOrganDonationConfirmUpdateViewController : HKOrganDonationBaseViewController
{
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
}

- (void).cxx_destruct;
- (void)updateButtonTapped:(id)arg1;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)bottomAnchoredButtons;
- (id)bodyString;
- (id)titleString;
- (id)titleImage;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;

@end

