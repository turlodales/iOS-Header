//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFCoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
    id <PHADirtyChangeCoalescerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PHADirtyChangeCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;
- (id)init;

@end

