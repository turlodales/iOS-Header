//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKTLVRecord : NSObject
{
    unsigned long long _tag;
    NSData *_value;
    NSData *_data;
}

+ (id)sequenceOfRecordsFromData:(id)arg1;
+ (id)recordFromData:(id)arg1;
+ (id)parseFromDataSource:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (id)description;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3;

@end

