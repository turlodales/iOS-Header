//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSArray, NSLock, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    NSArray *_words;
}

- (void).cxx_destruct;
- (void)main;
@property(copy) NSArray *words;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;

@end

