//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSCapability : TPSSerializableObject
{
    unsigned long long _joinType;
    NSString *_key;
    id _value;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long joinType; // @synthesize joinType=_joinType;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;

@end

