//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest
{
    NSString *_requestID;
    NSString *_action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end

