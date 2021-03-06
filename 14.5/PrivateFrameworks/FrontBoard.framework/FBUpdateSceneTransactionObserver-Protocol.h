//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSTransactionObserver-Protocol.h>

@class FBUpdateSceneTransaction;

@protocol FBUpdateSceneTransactionObserver <BSTransactionObserver>

@optional
- (void)updateSceneTransactionDidCommitUpdate:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionWillUpdateScene:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionDidCreateScene:(FBUpdateSceneTransaction *)arg1;
@end

