//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface CRKFilteredEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _filterBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (_Bool)shouldRejectItem:(id)arg1;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;

@end

