//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, VSAccountProviderResponse;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accountProviderIdentifier;
    NSDate *_authenticationExpirationDate;
    NSData *_verificationData;
    VSAccountProviderResponse *_accountProviderResponse;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) VSAccountProviderResponse *accountProviderResponse; // @synthesize accountProviderResponse=_accountProviderResponse;
@property(copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;
@property(copy, nonatomic) NSDate *authenticationExpirationDate; // @synthesize authenticationExpirationDate=_authenticationExpirationDate;
@property(copy, nonatomic) NSString *accountProviderIdentifier; // @synthesize accountProviderIdentifier=_accountProviderIdentifier;
@property(readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

