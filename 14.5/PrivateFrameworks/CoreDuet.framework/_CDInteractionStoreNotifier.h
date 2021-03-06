//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject
{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDInteractionStore *_interactionStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (void)resume;
- (void)suspend;
- (void)deleted;
- (void)recorded:(id)arg1;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInteractionStore:(id)arg1;

@end

