//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject
{
    struct vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>> *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type _vectorInlineStorage;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToU16CountedSet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_dictEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_vectorEnumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValuesAndCountsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dictionary;
- (unsigned long long)uniqueValueCount;
- (unsigned short)countForValue:(unsigned short)arg1;
- (void)addValue:(unsigned short)arg1;
- (void)_convertToDictionaryRepresentation;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

