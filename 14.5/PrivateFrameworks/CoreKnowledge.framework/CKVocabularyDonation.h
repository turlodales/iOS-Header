//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class CKVOriginApp, NSArray;

@interface CKVocabularyDonation : NSObject <NSCopying, NSSecureCoding>
{
    CKVOriginApp *_originApp;
    NSArray *_serializedItems;
    long long _itemType;
}

+ (_Bool)supportsSecureCoding;
+ (id)builderWithOriginApp:(id)arg1 itemClass:(Class)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSArray *serializedItems; // @synthesize serializedItems=_serializedItems;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
- (unsigned long long)hash;
- (_Bool)isEqualToDonation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithOriginApp:(id)arg1 serializedItems:(id)arg2 itemType:(long long)arg3;

@end

