//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage
{
    _Bool _generateDeliveryReceipt;
    NSString *_originalGUID;
    NSData *_senderToken;
    NSData *_certifiedDeliveryRTS;
    long long _certifiedDeliveryVersion;
    NSNumber *_failureReason;
    NSString *_failureReasonMessage;
    NSDictionary *_generatedDeliveryStatusContext;
    NSString *_localURI;
    NSString *_remoteURI;
    NSData *_queryHash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *queryHash; // @synthesize queryHash=_queryHash;
@property(retain, nonatomic) NSString *remoteURI; // @synthesize remoteURI=_remoteURI;
@property(retain, nonatomic) NSString *localURI; // @synthesize localURI=_localURI;
@property(retain, nonatomic) NSDictionary *generatedDeliveryStatusContext; // @synthesize generatedDeliveryStatusContext=_generatedDeliveryStatusContext;
@property(nonatomic) _Bool generateDeliveryReceipt; // @synthesize generateDeliveryReceipt=_generateDeliveryReceipt;
@property(retain, nonatomic) NSString *failureReasonMessage; // @synthesize failureReasonMessage=_failureReasonMessage;
@property(retain, nonatomic) NSNumber *failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) long long certifiedDeliveryVersion; // @synthesize certifiedDeliveryVersion=_certifiedDeliveryVersion;
@property(retain, nonatomic) NSData *certifiedDeliveryRTS; // @synthesize certifiedDeliveryRTS=_certifiedDeliveryRTS;
@property(retain, nonatomic) NSData *senderToken; // @synthesize senderToken=_senderToken;
@property(retain, nonatomic) NSString *originalGUID; // @synthesize originalGUID=_originalGUID;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (_Bool)wantsResponse;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCertifiedDeliveryContext:(id)arg1;

@end

