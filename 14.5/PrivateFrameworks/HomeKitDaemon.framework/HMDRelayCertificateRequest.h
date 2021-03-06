//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject
{
    NSData *_publicKey;
    NSString *_challengeIdentifier;
    NSData *_challengeResponse;
    NSData *_challengeCertificate;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *challengeCertificate; // @synthesize challengeCertificate=_challengeCertificate;
@property(readonly, copy, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(readonly, copy, nonatomic) NSString *challengeIdentifier; // @synthesize challengeIdentifier=_challengeIdentifier;
@property(readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)serializeWithError:(id *)arg1;
- (id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4;
- (id)init;

@end

