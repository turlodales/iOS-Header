//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/_LTTranslationRequest.h>

@class NSArray;

@interface _LTBatchTextTranslationRequest : _LTTranslationRequest
{
    NSArray *_paragraphs;
    CDUnknownBlockType _textHandler;
    CDUnknownBlockType _translationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType translationHandler; // @synthesize translationHandler=_translationHandler;
@property(copy, nonatomic) CDUnknownBlockType textHandler; // @synthesize textHandler=_textHandler;
@property(copy, nonatomic) NSArray *paragraphs; // @synthesize paragraphs=_paragraphs;
- (void)_translationFailedWithError:(id)arg1;
- (void)_startTranslationWithService:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)loggingType;

@end

