//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCentral, CBCharacteristic, NSData, NSMutableData, NSNumber;

@interface CBATTRequest : NSObject
{
    NSMutableData *_value;
    _Bool _ignoreResponse;
    CBCentral *_central;
    CBCharacteristic *_characteristic;
    unsigned long long _offset;
    NSNumber *_transactionID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreResponse; // @synthesize ignoreResponse=_ignoreResponse;
@property(readonly, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
@property(copy) NSData *value; // @synthesize value=_value;
- (id)description;
- (void)appendValueData:(id)arg1;
- (unsigned long long)endOffset;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4;

@end

