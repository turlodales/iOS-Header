//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, OKProducer;

@protocol OKProducerDelegate <NSObject>
- (NSArray *)visibleMediaItemsForProducer:(OKProducer *)arg1;
- (void)producer:(OKProducer *)arg1 didProcessLiveAuthoringKeyPaths:(NSArray *)arg2;
@end

