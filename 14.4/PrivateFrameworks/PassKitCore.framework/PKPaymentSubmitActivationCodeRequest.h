//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentPass;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    NSString *_verificationCode;
    NSData *_verificationData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *verificationData; // @synthesize verificationData=_verificationData;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end

