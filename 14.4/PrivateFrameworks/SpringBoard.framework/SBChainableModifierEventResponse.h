//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSMutableArray, NSString;

@interface SBChainableModifierEventResponse : NSObject <BSDescriptionProviding>
{
    NSMutableArray *_childResponses;
    _Bool _consumed;
    double _delay;
    CDUnknownBlockType _validator;
}

+ (id)newEventResponse;
+ (id)responseByAppendingResponse:(id)arg1 toResponse:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)loggingCategory;
- (void)enumerateResponseTreeUsingBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)enumerateResponseTreeUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildResponsesUsingBlock:(CDUnknownBlockType)arg1;
- (void)consumeWithReason:(id)arg1;
- (void)setDelay:(double)arg1 withValidator:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)responseByTransformingResponseWithTransformer:(CDUnknownBlockType)arg1;
- (void)addChildResponses:(id)arg1;
- (void)addChildResponse:(id)arg1;
- (void)insertChildResponse:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_initWithChildResponses:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

