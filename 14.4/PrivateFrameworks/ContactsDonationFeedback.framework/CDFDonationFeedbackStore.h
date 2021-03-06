//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSNumber, NSUbiquitousKeyValueStore;

@interface CDFDonationFeedbackStore : NSObject
{
    NSUbiquitousKeyValueStore *_kvs;
    NSMutableSet *_hashes;
    NSNumber *_resetGeneration;
    NSNumber *_resetTimestamp;
    NSData *_userSalt;
}

+ (id)log_t;
- (void).cxx_destruct;
- (void)_hashStrings:(id)arg1 salt:(id)arg2 digest:(char *)arg3;
- (id)_sha256BytesForStrings:(id)arg1 salt:(id)arg2;
- (id)_randomDataOfLength:(unsigned long long)arg1;
- (void)synchronize;
- (void)_saveResetInfo;
- (id)_loadResetInfo;
- (void)_saveHashes:(id)arg1 key:(id)arg2;
- (id)_loadHashesForKey:(id)arg1;
- (id)_loadSalt;
- (void)_handleHashesChangedNotification:(id)arg1;
- (id)_hashableStringsForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (_Bool)canHashDonation:(id)arg1;
- (id)_hashableStringsForDonation:(id)arg1;
- (id)_hashesForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (void)_confirmOrRejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (_Bool)donatedValueHasBeenConfirmedOrRejected:(id)arg1 contactIdentifier:(id)arg2;
- (void)rejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)confirmDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (id)initWithKeyValueStore:(id)arg1;
- (id)init;

@end

