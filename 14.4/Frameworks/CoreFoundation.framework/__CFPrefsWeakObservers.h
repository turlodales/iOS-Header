//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying>
{
    struct __cfobservers_t values;
    unsigned long long count;
}

- (id)debugDescription;
- (unsigned long long)approximateCount;
- (unsigned long long)borrowObjects:(id *)arg1 count:(unsigned long long)arg2;
- (unsigned char)removeObject:(id)arg1;
- (unsigned char)addObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

