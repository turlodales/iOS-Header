//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthRecordsUI/WDMedicalRecordDetailDataProviderDelegate-Protocol.h>

@class HKAccountOwner, HKClinicalAccount, HKMedicalRecord, HRProfile, WDMedicalRecordDetailDataProvider;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate>
{
    HKClinicalAccount *_account;
    HKAccountOwner *_accountOwner;
    HRProfile *_profile;
    HKMedicalRecord *_medicalRecord;
    WDMedicalRecordDetailDataProvider *_medicalRecordDataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WDMedicalRecordDetailDataProvider *medicalRecordDataProvider; // @synthesize medicalRecordDataProvider=_medicalRecordDataProvider;
@property(retain, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) HKAccountOwner *accountOwner; // @synthesize accountOwner=_accountOwner;
@property(readonly, copy, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
- (void)trackUserInteraction;
- (void)trackUserImpression;
- (void)detailDataProviderHasDisplayItemUpdate:(id)arg1;
- (void)_tapToRadar:(id)arg1;
- (id)_makeCopyMenuFor:(id)arg1;
- (id)_pasteboardStringForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)recordCategory;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1 medicalRecord:(id)arg2;

@end

