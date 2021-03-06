//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject
{
    ACAccount *_account;
    id <AMSBagDataSourceProtocol> _dataSource;
    NSString *_key;
    NSArray *_transformBlocks;
    unsigned long long _valueType;
}

+ (_Bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)globalBagValueStorage;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
+ (id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(retain, nonatomic) NSArray *transformBlocks; // @synthesize transformBlocks=_transformBlocks;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_processedDefaultValue:(id)arg1;
- (void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)valuePromise;
- (id)valueWithError:(id *)arg1;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)transformWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;

@end

