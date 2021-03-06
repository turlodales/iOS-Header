//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue
{
    CNPostalAddress *_postalAddress;
    long long _style;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)updatePropertyListRepresentation:(id)arg1;
- (void)acceptDonationValueVisitor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;

@end

