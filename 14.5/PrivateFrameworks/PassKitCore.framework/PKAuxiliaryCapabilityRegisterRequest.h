//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceRequest.h>

@class NSArray, NSData, PKPaymentPass;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest
{
    NSArray *_dpanIdentifiers;
    NSData *_deviceSignatureKeyAttestation;
    NSData *_deviceDecryptionKeyAttestation;
    NSArray *_validCertificatesOnDevice;
    PKPaymentPass *_pass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSArray *validCertificatesOnDevice; // @synthesize validCertificatesOnDevice=_validCertificatesOnDevice;
@property(copy, nonatomic) NSData *deviceDecryptionKeyAttestation; // @synthesize deviceDecryptionKeyAttestation=_deviceDecryptionKeyAttestation;
@property(copy, nonatomic) NSData *deviceSignatureKeyAttestation; // @synthesize deviceSignatureKeyAttestation=_deviceSignatureKeyAttestation;
@property(copy, nonatomic) NSArray *dpanIdentifiers; // @synthesize dpanIdentifiers=_dpanIdentifiers;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

