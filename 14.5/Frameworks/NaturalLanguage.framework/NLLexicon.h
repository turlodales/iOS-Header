//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLLexicon : NSObject
{
    NSString *_localization;
    const void *_lexicon;
}

- (void).cxx_destruct;
- (void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;
- (id)entryForString:(id)arg1;
- (id)entryForTokenID:(unsigned int)arg1;
- (void)_enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _LXLexicon *)lexicon;
- (void)dealloc;
- (id)description;
@property(readonly, copy) NSString *localization;
- (id)initWithLocalization:(id)arg1;

@end

