//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest
{
    unsigned long long _reason;
    NSSet *_passOwnershipTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *passOwnershipTokens; // @synthesize passOwnershipTokens=_passOwnershipTokens;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 deviceMetadata:(id)arg3 appleAccountInformation:(id)arg4;

@end

