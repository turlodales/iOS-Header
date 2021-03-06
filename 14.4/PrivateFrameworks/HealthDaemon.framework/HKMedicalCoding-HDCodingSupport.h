//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalCoding.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKMedicalCoding (HDCodingSupport) <HDCoding>
+ (id)codeableRepresentationForMedicalCodings:(id)arg1;
+ (id)multipleMedicalCodingsWithCodables:(id)arg1;
+ (id)medicalCodingsWithCodeable:(id)arg1;
+ (id)createWithCodable:(id)arg1;
- (id)codableRepresentationForSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

