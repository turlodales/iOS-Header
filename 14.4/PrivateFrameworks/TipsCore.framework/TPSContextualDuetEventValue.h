//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSNumber, NSString;

@interface TPSContextualDuetEventValue : TPSSerializableObject
{
    NSNumber *_boolValue;
    NSNumber *_integerValue;
    NSNumber *_doubleValue;
    NSString *_stringValue;
    unsigned long long _valueType;
}

+ (id)classSet;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSNumber *doubleValue; // @synthesize doubleValue=_doubleValue;
@property(copy, nonatomic) NSNumber *integerValue; // @synthesize integerValue=_integerValue;
@property(copy, nonatomic) NSNumber *boolValue; // @synthesize boolValue=_boolValue;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

