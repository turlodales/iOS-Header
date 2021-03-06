//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class NSString;

@interface _CNEmailAddressDonationValue : CNDonationValue
{
    NSString *_emailAddress;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void)updatePropertyListRepresentation:(id)arg1;
- (void)acceptDonationValueVisitor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)description;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3;

@end

