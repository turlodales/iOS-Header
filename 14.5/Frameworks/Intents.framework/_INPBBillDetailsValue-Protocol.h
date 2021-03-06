//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@protocol _INPBBillDetailsValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasPaymentDate;
@property(retain, nonatomic) _INPBDateTime *paymentDate;
@property(readonly, nonatomic) _Bool hasMinimumDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property(readonly, nonatomic) _Bool hasLateFee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property(readonly, nonatomic) _Bool hasDueDate;
@property(retain, nonatomic) _INPBDateTime *dueDate;
@property(nonatomic) _Bool hasBillType;
@property(nonatomic) int billType;
@property(readonly, nonatomic) _Bool hasBillPayee;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property(readonly, nonatomic) _Bool hasAmountDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsBillType:(NSString *)arg1;
- (NSString *)billTypeAsString:(int)arg1;
@end

