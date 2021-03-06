//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCOfferMetadata, NSString;

__attribute__((visibility("hidden")))
@interface ASCAppOfferSavedState : NSObject
{
    NSString *_state;
    ASCOfferMetadata *_metadata;
    long long _flags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isActionable;
@property(readonly, nonatomic) _Bool isLoadingFullState;
- (id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3;

@end

