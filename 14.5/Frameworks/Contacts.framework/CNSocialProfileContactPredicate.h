//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithSocialProfile:(id)arg1;

@end

