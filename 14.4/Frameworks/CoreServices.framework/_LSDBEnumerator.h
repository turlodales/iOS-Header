//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _LSDBEnumerator : LSEnumerator
{
    struct Context _context;
    unsigned long long _index;
    id _lastFastObject;
    unsigned int _hasReachedEnd:1;
    unsigned int _hasTriedToPrepare:1;
    unsigned int _hasPrepared:1;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)nextObject;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (_Bool)prepareIfNeeded;
- (id)_initWithContext:(struct LSContext *)arg1;

@end

