//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSOSClawGestureObserver;

@protocol SBSOSClawGestureObserverDelegate <NSObject>
- (void)sosClawAutoCallInteractiveStateChanged:(SBSOSClawGestureObserver *)arg1 interacting:(_Bool)arg2;
- (void)sosClawDidBecomeInactive:(SBSOSClawGestureObserver *)arg1;
- (void)sosClawDidBecomeActive:(SBSOSClawGestureObserver *)arg1;
- (void)sosClawDidTriggerSOS:(SBSOSClawGestureObserver *)arg1 completion:(void (^)(_Bool))arg2;
@end

