//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRVectorTimestamp;
@protocol CRDataType;

@interface CRDictionaryElement : NSObject
{
    id <CRDataType> _value;
    CRVectorTimestamp *_timestamp;
}

+ (id)temporaryElementWithValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <CRDataType> value; // @synthesize value=_value;
- (id)description;
- (void)mergeWith:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;
- (id)initWithValue:(id)arg1;

@end

