//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBBillDetailsValue;

@protocol _INPBSearchForBillsIntentResponse <NSObject>
+ (Class)billsType;
@property(readonly, nonatomic) unsigned long long billsCount;
@property(copy, nonatomic) NSArray *bills;
- (_INPBBillDetailsValue *)billsAtIndex:(unsigned long long)arg1;
- (void)addBills:(_INPBBillDetailsValue *)arg1;
- (void)clearBills;
@end

