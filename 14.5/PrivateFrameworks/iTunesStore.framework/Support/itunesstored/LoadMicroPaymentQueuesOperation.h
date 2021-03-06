//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueResponse, NSArray, NSDate, StoreKitClientIdentity;

@interface LoadMicroPaymentQueuesOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;
    NSDate *_lastQueueCheckDate;
    long long _reason;
    MicroPaymentQueueResponse *_paymentsResponse;
    NSArray *_userDSIDs;
}

- (void).cxx_destruct;
@property(copy) NSArray *userDSIDs; // @synthesize userDSIDs=_userDSIDs;
@property long long reason; // @synthesize reason=_reason;
@property(retain) MicroPaymentQueueResponse *paymentsResponse; // @synthesize paymentsResponse=_paymentsResponse;
- (id)_URLBagContext;
- (_Bool)_shouldCheckAutoRenewQueue;
- (_Bool)_appendToResponse:(id)arg1 usingOperation:(id)arg2 error:(id *)arg3;
- (_Bool)_appendNormalQueueToResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_appendAutoRenewQueueToResponse:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) NSDate *lastQueueCheckDate;
@property(copy) StoreKitClientIdentity *clientIdentity;

@end

