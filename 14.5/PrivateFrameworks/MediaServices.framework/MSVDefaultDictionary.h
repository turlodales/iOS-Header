//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface MSVDefaultDictionary : NSMutableDictionary
{
    CDUnknownBlockType _defaultValue;
    NSMutableDictionary *_storage;
}

+ (id)dictionaryWithDictionary:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
+ (id)dictionaryWithCapacity:(unsigned long long)arg1 defaultValue:(CDUnknownBlockType)arg2;
+ (id)dictionaryWithDefaultValue:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)initWithDefaultValue:(CDUnknownBlockType)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

