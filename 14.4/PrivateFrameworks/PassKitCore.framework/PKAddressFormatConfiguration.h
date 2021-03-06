//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKContactFieldConfiguration;

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding>
{
    PKContactFieldConfiguration *_streetFieldConfiguration;
    PKContactFieldConfiguration *_subLocalityFieldConfiguration;
    PKContactFieldConfiguration *_cityFieldConfiguration;
    PKContactFieldConfiguration *_subAdministrativeAreaFieldConfiguration;
    PKContactFieldConfiguration *_stateFieldConfiguration;
    PKContactFieldConfiguration *_postalCodeFieldConfiguration;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKContactFieldConfiguration *postalCodeFieldConfiguration; // @synthesize postalCodeFieldConfiguration=_postalCodeFieldConfiguration;
@property(readonly, nonatomic) PKContactFieldConfiguration *stateFieldConfiguration; // @synthesize stateFieldConfiguration=_stateFieldConfiguration;
@property(readonly, nonatomic) PKContactFieldConfiguration *subAdministrativeAreaFieldConfiguration; // @synthesize subAdministrativeAreaFieldConfiguration=_subAdministrativeAreaFieldConfiguration;
@property(readonly, nonatomic) PKContactFieldConfiguration *cityFieldConfiguration; // @synthesize cityFieldConfiguration=_cityFieldConfiguration;
@property(readonly, nonatomic) PKContactFieldConfiguration *subLocalityFieldConfiguration; // @synthesize subLocalityFieldConfiguration=_subLocalityFieldConfiguration;
@property(readonly, nonatomic) PKContactFieldConfiguration *streetFieldConfiguration; // @synthesize streetFieldConfiguration=_streetFieldConfiguration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

