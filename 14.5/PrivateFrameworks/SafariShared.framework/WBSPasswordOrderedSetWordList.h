//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList
{
    NSOrderedSet *_words;
    _Bool _sensitive;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSensitive) _Bool sensitive; // @synthesize sensitive=_sensitive;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 isSensitive:(_Bool)arg2 orderedWordsArray:(id)arg3;
- (id)initWithIdentifier:(id)arg1 isSensitive:(_Bool)arg2 orderedWords:(id)arg3;

@end

