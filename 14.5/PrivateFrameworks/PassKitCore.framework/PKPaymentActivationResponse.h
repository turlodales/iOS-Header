//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse
{
    NSString *_stepIdentifier;
    NSString *_previousStepIdentifier;
    long long _verificationStatus;
    NSDictionary *_requiredVerificationFieldData;
    NSArray *_verificationChannels;
    NSURL *_passURL;
}

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;
@property(readonly, copy, nonatomic) NSDictionary *requiredVerificationFieldData; // @synthesize requiredVerificationFieldData=_requiredVerificationFieldData;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(readonly, copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(readonly, copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
- (id)initWithData:(id)arg1 forPass:(id)arg2;

@end

