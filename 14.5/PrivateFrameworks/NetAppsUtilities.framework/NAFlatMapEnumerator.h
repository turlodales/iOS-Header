//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFlatMapEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _map;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 map:(CDUnknownBlockType)arg2;

@end

