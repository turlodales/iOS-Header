//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecord.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class NSString;

@interface CKRecord (HMB) <HMBModelObjectStorage>
+ (id)recordFromExternalData:(id)arg1 error:(id *)arg2;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (id)hmbObjectForKey:(id)arg1 encrypted:(_Bool)arg2;
- (void)hmbSetObject:(id)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3;
- (id)externalID:(id *)arg1;
- (id)externalData:(id *)arg1;
- (id)hmbDescription;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

