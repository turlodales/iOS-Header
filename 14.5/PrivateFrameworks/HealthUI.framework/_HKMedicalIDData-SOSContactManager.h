//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (SOSContactManager)
+ (id)contactKeysToLoadForMedicalID;
- (_Bool)consolidateSOSAndEmergencyContacts;
- (id)_contactKeysToFetch;
- (_Bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (_Bool)_autopopulateEmergencyContactsForSecondaryProfile;
- (_Bool)_updateExistingEmergencyContacts;
- (_Bool)updateEmergencyContactsAutopopulateForSecondaryProfileIfEmpty:(_Bool)arg1;
- (_Bool)updateEmergencyContacts;
- (void)loadDataFromCNContact:(id)arg1;
@end

