//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@protocol AKCredential, AKCredentialRequestProtocol;

@interface AKAuthorization : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _authorizedRequest;
    id <AKCredential> _credential;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AKCredential> credential; // @synthesize credential=_credential;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

