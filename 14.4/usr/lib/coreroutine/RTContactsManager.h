//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class CNContact, RTDataProtectionManager, RTDistanceCalculator, RTMapServiceManager;

@interface RTContactsManager : RTService
{
    _Bool _available;
    RTDataProtectionManager *_dataProtectionManager;
    RTMapServiceManager *_mapServiceManager;
    RTDistanceCalculator *_distanceCalculator;
    CNContact *_meCard;
}

+ (id)formattedPostalAddressesForContact:(id)arg1;
+ (id)addressDictionaryFromMapItem:(id)arg1;
+ (id)addressLabelTypeToString:(unsigned long long)arg1;
+ (id)addressLabelTypeToLabel:(unsigned long long)arg1;
+ (unsigned long long)labelStringToAddressLabelType:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) CNContact *meCard; // @synthesize meCard=_meCard;
@property(retain, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
- (void)fetchFormattedPostalAddressesFromMeCard:(CDUnknownBlockType)arg1;
- (_Bool)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (_Bool)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addAddressToMeCardWithAddressLabelType:(unsigned long long)arg1 addressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addAddressToContact:(id)arg1 addressLabelType:(unsigned long long)arg2 addressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id *)arg3;
- (void)donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)__donateAddressFromMapItem:(id)arg1 addressLabelType:(unsigned long long)arg2 donationStore:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)labelTypeValidForDonation:(unsigned long long)arg1;
- (void)onDataProtectionNotification:(id)arg1;
- (void)_fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)_onContactStoreNotification:(id)arg1;
- (void)onContactStoreNotification:(id)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (id)_getMeCardWithError:(id *)arg1;
- (void)_shutdown;
- (void)_setup;
- (id)initWithDataProtectionManager:(id)arg1 mapServiceManager:(id)arg2 distanceCalculator:(id)arg3;
- (id)init;

@end

