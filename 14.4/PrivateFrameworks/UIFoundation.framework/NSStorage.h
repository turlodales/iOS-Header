//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSStorage : NSObject
{
    id _storage;
    long long _hintCapacity;
    unsigned long long _reserved[4];
}

+ (void)initialize;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)addElement:(void *)arg1;
- (void)insertElement:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void *)pointerToElement:(unsigned long long)arg1 directlyAccessibleElements:(struct _NSRange *)arg2;
- (void)removeElementsInRange:(struct _NSRange)arg1;
- (void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(void *)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1;
- (void)insertElements:(void *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void *)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementSize;
- (unsigned long long)hintCapacity;
- (void)setHintCapacity:(unsigned long long)arg1;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;

@end

