//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/_LTTranslationRequest.h>

@class NSArray, NSString;

@interface _LTParagraphTranslationRequest : _LTTranslationRequest
{
    NSString *_text;
    NSArray *_ranges;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)translationParagraph;
- (void)_translationFailedWithError:(id)arg1;
- (void)_startTranslationWithService:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)loggingType;

@end

