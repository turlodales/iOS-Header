//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSData, NSNumber, NSString;

@interface CRKSetUserPropertiesRequest : CATTaskRequest
{
    NSString *_userIdentifier;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSString *_userSource;
    NSData *_imageData;
    NSNumber *_useMeCardIfAvailable;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *useMeCardIfAvailable; // @synthesize useMeCardIfAvailable=_useMeCardIfAvailable;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *userSource; // @synthesize userSource=_userSource;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;

@end

