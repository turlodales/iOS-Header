//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface EDSearchableIndexClientState : NSObject
{
    NSNumber *_transactionValue;
    long long _transaction;
    NSDate *_transactionDate;
    NSString *_systemBuildVersion;
}

+ (id)clientStateFromData:(id)arg1;
+ (id)clientState;
+ (id)transactionAttributeKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) long long transaction; // @synthesize transaction=_transaction;
- (void)addTransactionValueToAttributeSet:(id)arg1;
@property(readonly, nonatomic) NSNumber *transactionValue;
- (id)archiveRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

