//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRMutableStateBase.h>

@class NRPBMutableDeviceProperty;
@protocol NSObject><NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase
{
    id <NSObject><NSCopying> _value;
    NRPBMutableDeviceProperty *_protobuf;
}

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NRPBMutableDeviceProperty *protobuf; // @synthesize protobuf=_protobuf;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)init;
- (void)setValue:(id)arg1;
@property(readonly, retain, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;

@end

