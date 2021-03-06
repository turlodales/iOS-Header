//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField
{
    NSString *_currencyCode;
    long long _numberStyle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;

@end

