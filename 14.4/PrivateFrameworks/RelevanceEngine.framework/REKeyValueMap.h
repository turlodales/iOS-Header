//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface REKeyValueMap : NSObject
{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

- (void).cxx_destruct;
- (id)keyForValue:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)addKey:(id)arg1 withValue:(id)arg2;
- (unsigned long long)valueCount;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

