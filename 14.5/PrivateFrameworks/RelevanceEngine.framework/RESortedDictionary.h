//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface RESortedDictionary : NSObject <NSCopying>
{
    NSMutableDictionary *_values;
    NSMutableArray *_order;
}

- (void).cxx_destruct;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

