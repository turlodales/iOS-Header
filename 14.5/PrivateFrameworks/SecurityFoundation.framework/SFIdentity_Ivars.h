//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

@interface SFIdentity_Ivars : NSObject
{
    _SFPublicKey *publicKey;
    _SFKeyPair *keyPair;
    _SFCertificate *certificate;
    SFIdentityAttributes *attributes;
}

- (void).cxx_destruct;

@end

