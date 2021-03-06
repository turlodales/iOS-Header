//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding>
{
    NSMutableArray *_scheduledPayments;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scheduledPaymentOfFundingSourceType:(long long)arg1;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1;
- (void)addScheduledPayment:(id)arg1;
@property(readonly, nonatomic) NSArray *scheduledPayments;
- (id)initWithScheduledPayment:(id)arg1;
- (id)init;

@end

