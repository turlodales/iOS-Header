//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantGuestDisplayPreferencesExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>
{
    _Bool _nameFieldFirstNameOptional;
    _Bool _nameFieldLastNameOptional;
    _Bool _nameFieldShouldBeDisplayed;
    _Bool _emailAddressFieldShouldBeDisplayed;
    _Bool _phoneNumberFieldShouldBeDisplayed;
    _Bool _nameEditable;
    _Bool _emailAddressEditable;
    _Bool _phoneNumberEditable;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool phoneNumberEditable; // @synthesize phoneNumberEditable=_phoneNumberEditable;
@property(nonatomic) _Bool emailAddressEditable; // @synthesize emailAddressEditable=_emailAddressEditable;
@property(nonatomic) _Bool nameEditable; // @synthesize nameEditable=_nameEditable;
@property(nonatomic) _Bool phoneNumberFieldShouldBeDisplayed; // @synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed;
@property(nonatomic) _Bool emailAddressFieldShouldBeDisplayed; // @synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed;
@property(nonatomic) _Bool nameFieldShouldBeDisplayed; // @synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed;
@property(nonatomic) _Bool nameFieldLastNameOptional; // @synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional;
@property(nonatomic) _Bool nameFieldFirstNameOptional; // @synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

