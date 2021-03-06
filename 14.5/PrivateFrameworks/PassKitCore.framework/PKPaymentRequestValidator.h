//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>
{
    PKPaymentRequest *_request;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;
- (_Bool)isValidWithError:(id *)arg1;
- (_Bool)_checkTotal:(id)arg1 withAPIType:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithPaymentRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

