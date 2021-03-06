//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, NSNumber, NSString;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_rawValue;
    HKMedicalCoding *_comparatorCoding;
    HKMedicalCoding *_unitCoding;
}

+ (_Bool)supportsSecureCoding;
+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2;
+ (id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKMedicalCoding *unitCoding; // @synthesize unitCoding=_unitCoding;
@property(readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding; // @synthesize comparatorCoding=_comparatorCoding;
@property(readonly, copy, nonatomic) NSString *rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, copy, nonatomic) NSString *localizedValue;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, copy, nonatomic) NSString *value;
- (id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
- (id)init;

@end

