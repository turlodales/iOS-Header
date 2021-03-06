//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject
{
    void *_keysAndPriorities;
}

- (void)removeKey:(const struct _GEOTileKey *)arg1;
- (_Bool)popHighestPriorityKey:(struct _GEOTileKey *)arg1 priority:(unsigned int *)arg2;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned int highestPriority;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)dealloc;
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;
- (id)init;

@end

