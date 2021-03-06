//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBPriceRangeValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasMinimumPrice;
@property(retain, nonatomic) _INPBDecimalNumberValue *minimumPrice;
@property(readonly, nonatomic) _Bool hasMaximumPrice;
@property(retain, nonatomic) _INPBDecimalNumberValue *maximumPrice;
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(copy, nonatomic) NSString *currencyCode;
@end

